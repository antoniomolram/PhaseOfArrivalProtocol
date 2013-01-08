#include "AppLayer.h"
#include "NetwControlInfo.h"
#include <cassert>
#include <Packet.h>
#include <BaseMacLayer.h>

#include "FindModule.h"

void AppLayer::initialize(int stage)
{
	BaseLayer::initialize(stage);

	if(stage == 0) {
		arp = FindModule<BaseArp*>::findSubModule(findHost());

        cc = FindModule<BaseConnectionManager *>::findGlobalModule();
        if( cc == 0 ) error("Could not find connectionmanager module");

        // Parameter load
		syncPacketsPerSyncPhase = par("syncPacketsPerSyncPhase");
		if (syncPacketsPerSyncPhase <= 0) error("You must introduce a positive number of periods.");

	   	syncPacketLength = par("syncPacketLength");
	   	normalReportPacketLength = par("normalReportPacketLength");
	   	type2ReportPacketLength = par("type2ReportPacketLength");
	   	askReportPacketLength = par("askReportPacketLength");
	   	requestPacketLength = par("requestPacketLength");
	   	broadcastPacketLength = par("broadcastPacketLength");
	   	answerANtoMNPacketLength = par("answerANtoMNPacketLength");
	   	bcastMixANPacketLength = par("bcastMixANPacketLength");

		destination = par("destination");

		syncPacketTime = par("syncPacketTime");
		phase2VIPPercentage = par("phase2VIPPercentage");
		fullPhaseTime = getParentModule()->getParentModule()->par("fullPhaseTime");
		timeComSinkPhase1 = getParentModule()->getParentModule()->par("timeComSinkPhase1");
		timeComSinkPhase2 = getParentModule()->getParentModule()->par("timeComSinkPhase2");
		numberOfAnchors = getParentModule()->getParentModule()->par("numAnchors");
		numberOfNodes = getParentModule()->getParentModule()->par("numNodes");

		// Variable initialization, we could change this into parameters if necesary
		nbPacketDroppedNoACK		= 0;
		nbPacketDroppedBackOff		= 0;
		nbPacketDroppedAppQueueFull	= 0;
		nbPacketDroppedMacQueueFull	= 0;
		nbPacketDroppedNoTimeApp 	= 0;
		nbAnswersRequestOutOfTime 	= 0;
		nbRequestWihoutAnswer		= 0;
		nbErasedPacketsBackOffMax	= 0;
		nbErasedPacketsNoACKMax		= 0;
		nbErasedPacketsMacQueueFull	= 0;
		nbBroadcastPacketsSent 		= 0;
		nbReportsWithACK 			= 0;
		nbBroadcastPacketsReceived 	= 0;
		nbReportsReceived 			= 0;
		nbReportsForMeReceived 		= 0;
		guardTimeReportPhase 		= 0.020; 	// 20 ms
		guardTimeVIPPhase 			= 0.020;	// 20 ms
		guardTimeComSinkPhase 		= 0.080; 	// 100 ms
		smallTime 					= 0.000001;	//  1 us
		maxRetransDroppedReportMN 	= 1;
		maxRetransDroppedReportAN 	= 4;
		maxRetransDroppedBackOff 	= 4;
		myNetwAddr = getParentModule()->findSubmodule("nic");
	} else if (stage == 4) { // We have to wait till stage 4 because before the number of slots are not yet calculated
		computer = cc->findNic(getParentModule()->getParentModule()->getSubmodule("computer", 0)->findSubmodule("nic"));
		timeSyncPhase = 0.06;// 60ms // syncPacketsPerSyncPhase * computer->numTotalSlots * syncPacketTime ;
		timeVIPPhase =  0.3; // 300ms //(fullPhaseTime - (2 * timeComSinkPhase) - (3 * timeSyncPhase)) * phase2VIPPercentage;
		timeReportPhase = 0.4 ; // 400 ms //(fullPhaseTime - (2 * timeComSinkPhase) - (3 * timeSyncPhase)) * (1 - phase2VIPPercentage);

		beginPhases = new cMessage("next-phase",AppLayer::BEGIN_PHASE);
		nextPhase = AppLayer::RANGING_PHASE;
		nextPhaseStartTime = simTime();
		scheduleAt(nextPhaseStartTime, beginPhases);
	}
}
