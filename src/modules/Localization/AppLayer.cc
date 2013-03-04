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
		timeEachFreq = 3e-3;




//		 BaseConnectionManager::NicEntries& nicList = cc->getNicList();
//		 NicEntry* anchors[numberOfAnchors]; // Array to store pointers to all the anchors
//
//               int j=0;
//
//                      // First here we look for the Anchors and discard computer an MN, and put them in our array
//                      for(BaseConnectionManager::NicEntries::iterator i = nicList.begin(); i != nicList.end(); ++i) {
//                          if (i->second->moduleType == 1) {
//                              anchors[j] = i->second;
//                              anchors[j]->numSlots = 0;
//                              j++;
//                          }
//                      }




		myNetwAddr = getParentModule()->findSubmodule("nic");
	} else if (stage == 4) { // We have to wait till stage 4 because before the number of slots are not yet calculated


	    //Added by Antonio
	    //**** Ranging Slotted parameters *****//
	            int j=0;
	            int k=0;
	             BaseConnectionManager::NicEntries& nicList = cc->getNicList();
	            NicEntry* anchors[numberOfAnchors]; // Array to store pointers to all the anchors
	            NicEntry* nodes[numberOfNodes];
	            for(BaseConnectionManager::NicEntries::iterator i = nicList.begin(); i != nicList.end(); ++i) {
	                        if (i->second->moduleType == 1) {
	                            anchors[j] = i->second;
	                            anchors[j]->numSlots = 0;

	                            j++;
	                        }
	                        if (i->second->moduleType == 2) {
	                                nodes[k] = i->second;
	                                nodes[k]->numSlots = 0;

	                                k++;
	                            }
	                    }

	            const int numbersOfAnchors=2;
	            const int numberOfNodes=2;
	            const int timeSlots=2;
	            int canal;

                int AnchorRangingTransmision[numbersOfAnchors][timeSlots]= {{3,3},{1,4}};
                int nodeRangingTransmision[numberOfNodes][timeSlots]={{3,3},{1,4}};
                int initiators[numbersOfAnchors+numberOfNodes][timeSlots]={{40,0},{52,0},{0,0},{0,0}};

	            int temporalSlots = sizeof(AnchorRangingTransmision[0])/sizeof(AnchorRangingTransmision[0][0]);
	            EV << "Solution Matrix (Ranging Procedure):"<< endl;
	            for(int a=0;a<numberOfAnchors;a++){
	                EV <<"Anchor "<< a << ": ";
                    anchors[a]->rangingTotalTimeSlot=temporalSlots;
	                for(int b=0;b<temporalSlots;b++){
	                    anchors[a]->rangingTransmisionSlot[b]=AnchorRangingTransmision[a][b];
                       EV << AnchorRangingTransmision[a][b] << ", " ;
	                }
	                EV << endl;
	            }
	            for(int a=0;a<numberOfNodes;a++){
                    EV <<"Node "<< a << ": ";
                    nodes[a]->rangingTotalTimeSlot=temporalSlots;
                    for(int b=0;b<temporalSlots;b++){
                        nodes[a]->rangingTransmisionSlot[b]=nodeRangingTransmision[a][b];
                       EV << nodeRangingTransmision[a][b] << ", " ;
                    }
                    EV << endl;
	            }
//	            EV << "Initiator Matrix (Ranging Procedure):"<< endl;
//                for(int a=0;a<temporalSlots;a++){
//                   EV <<"Anchor or node: "<< a << ": ";
//                   anchors[a]->rangingTotalTimeSlot=temporalSlots;
//                   for(int b=0;b<(numberOfAnchors+numberOfNodes);b++){
//                      anchors[a]->initiatorDirections[b]=initiators[a][b];
//                      EV << initiators[a][b] << ", " ;
//                   }
//                   EV << endl;
//                }
                int w=0;
                NicEntry* allNodes[numberOfAnchors+numberOfNodes];
                for(BaseConnectionManager::NicEntries::iterator i = nicList.begin(); i != nicList.end(); ++i) {
                    allNodes[w]=i->second;
                    EV <<"Anchor or node: "<< w << ": ";
                    //allNodes[w]->rangingTotalTimeSlot=temporalSlots;
                    for(int a=0;a<temporalSlots;a++){
                        allNodes[w]->initiatorDirections[a]=initiators[w][a];
                        EV << initiators[w][a] << ", " ;
                    }
                    EV << endl;
                    w++;
                }








	    computer = cc->findNic(getParentModule()->getParentModule()->getSubmodule("computer", 0)->findSubmodule("nic"));
		timeSyncPhase = 0.06;// 60ms // syncPacketsPerSyncPhase * computer->numTotalSlots * syncPacketTime ;
		timeVIPPhase =  0.3; // 300ms //(fullPhaseTime - (2 * timeComSinkPhase) - (3 * timeSyncPhase)) * phase2VIPPercentage;
		timeReportPhase = 0.4 ; // 400 ms //(fullPhaseTime - (2 * timeComSinkPhase) - (3 * timeSyncPhase)) * (1 - phase2VIPPercentage);
		timeRangingPhase = 1.6 ;
		beginPhases = new cMessage("next-phase",AppLayer::BEGIN_PHASE);
         nextPhase = AppLayer::SYNC_PHASE_1;
		//nextPhase = AppLayer::RANGING_PHASE;
		nextPhaseStartTime = simTime();
		scheduleAt(nextPhaseStartTime, beginPhases);
	}
}
