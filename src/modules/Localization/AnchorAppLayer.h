#ifndef ANCHORAPPLAYER_H_
#define ANCHORAPPLAYER_H_

#include "AppLayer.h"

class AnchorAppLayer : public AppLayer
{
protected:

	int phaseRepetitionNumber;			// Total number of full phases, -1 = unlimited
	bool syncInSlot; 					// Indicates if the sync packets have to be slotted or not

	int syncPacketsPerSyncPhaseCounter; // In which of the repetitions (mini sync phases) are we already in the sync phase now
	PhaseType syncPhaseNumber; 			// To identify in which of the 3 sync phases are we inside the full phase
	int scheduledSlot; 					// When a node has assigned more than 1 slot, we have to create a new entry in the same sync phase, this variable count how many slots did we already assign

	simtime_t nextPhaseStart;			// Start time for the next slot period
	simtime_t nextSyncSend;				//
   	simtime_t syncFirstMaxRandomTime; 	// First maximum time an anchor must wait to transmit the first sync packet in no slotted mode
   	simtime_t syncRestMaxRandomTimes; 	// Rest of maximum times an anchor must wait to transmit the rest of the sync packets in no slotted mode

//	cQueue packetsQueue;				// FIFO to store the packets we receive in Report and VIP phases to send them to Computer in Com Sink 1
	cQueueWithPriority packetsQueue;	// Priority queue to store the packets we receive in Report and VIP phases to send them to Computer in Com Sink 1
	simtime_t *randomQueueTime;			// Vector of random times to transmit the queue along the Com Sink 1
	simtime_t stepTimeComSink1;			// Step time in which we divide the Com Sink 1 Phase - The guard time. We divide it in so many parts like elements in the queue
	int queueElementCounter;			// Variable to know how many queue elements have we already transmitted, therefore to calculate all the random transmitting times when = 0 or knowing which randomQueueTime is the next to use
	int maxQueueElements;				// Maximum number of packets in the queue to transmit in the next Com Sink 2 Phase

	int *broadcastCounter;				// Vector of number of broadcasts from Mobile Node already read, to check if we just read the last one
	int indexBroadcast;					// Number of Mobile Node who sent the broadcast to store the value of Broadcast received in the correct field


	NicEntry* anchor;					// Pointer to the NIC of this anchor to access some NIC variables

	bool macDeviceFree;					// Flag signaling if transmitter is available for new packet

	int* broadPriority;					// Flag to save the priority of the broadcasts received on anchors
	int* broadNodeMode;					// Flag to save the node mode of the broadcasts received on anchors

	int hops;							// Variable to know hops from this anchor to the PC

	int* fromNode;						// Vector to count the amount of packets received from each node

	int parentAnchor;					// Saves the id of the anchor servicing the current anchor
	double numPckToSent;				// Saves the number of packets originally in queue and the received to route
	double numPckSentOk;				// Saves the number of packets correctly sent
	double selfSuccess;					// Saves the ration between messages to send and the effectively sent
	double parentSuccess;				// Saves the effectiveness received from the anchor servicing this anchor
	int meanWindow;						// Sets the length of the circular mean window of latest anchor's ratios of messages sent_OK/to_be_sent
	int meanIndex;						// Current index of the circular window
	double* formerSuccess;				// Mean window buffer to where are sent the former anchor ratios of messages sent_OK/to_be_sent
	double successToTx;					// Saves the calculated effectiveness for the AN, which is broadcasted during SYNC phases

	double meanSuccess;					// Saves the effectiveness of the anchor during the simulation to do a mean
	int numPeriods;						// Saves the number of periods there is a real effectiveness ratio calculated

	double comsinkPhaseStartTime;	// Variable to save when the current COM_SINK 1 phase started

	// Modified by Victor

	cMessage *hopSlotTimer;
	cMessage *delayTimer;                // Pointer to the event we use to schedule all the sync packets in the sync phases
	cMessage *checkQueue;                // Variable to schedule the events to process the Queue elements
	int* packetsResend;                  // Packets that were successfully resent.
	int* firstMNBroadcasTime;            // Vector to save the order in which arrive the first broadcast from MN.
	int* hopSlots2TransmitA;              // Vector with the hopslots that each anchor has to transmit
    int* hopSlots2TransmitB;              // Vector with the hopslots that each anchor has to transmit
	int** TxComSinkPktMatrix;             // Matrix to save the hop that this anchor has for each subComSink slot.
	int* hopSlotsDistributionVector;      // Vector with the slots duration taking into account the way to assign the size of each slot: equal, sequential or fibonacci
	int* availablePktsProHopSlot;         // Number of possible packets to send in one slot
	int pktProHopSlot;                    // Number of packets to be allocated pro HopSlot
    int duplicatedPktCounter;             // Counter of repeated packets received
	int totalPktpProSubComSink1;          // Number of packets to be allocated in ones subdivioson of the COM_SINK_1 phase
	int firtsBCCounter;                  // Count how many nodes have send their first broadcast
    int numPckToSentByPeriod;            // Saves the number of packets originally in queue and the received to route by period
    int PktLengthMN3;                    // Packet length of the message from Mobile Nodes.
    int txPktsCreatedInApp;              // Save the number of packets created in this AN
    int remPktApp;                       // SAve the number the packets that were not send.
    int nbSubComSink1Slots;              // Number of equal parts in which the COM_SINK_1 will be divided
    int subComSink1Counter;              // Counter of the number of COM_SINK_1 subdivision
    int nbTotalHops;                     // Number of hops that the network has.
    int hopSlotsCounter;                 // Number of hopSlots that have been used.
    int myNumberOfHopSlotsA;             // Save the number of hopSlots for this Anchor
    int myNumberOfHopSlotsB;             // Save the number of hopSlots for this Anchor
    int numberOfBrothers;                // Number of Anchors that have the same parent anchor as this anchor
    int nextSubComSinkPkts;              // Number of packets to be allocated in the second COM_SINK_1 subdivision at the beginnig of the COM_SINK_1 phase
    int nbTotalAvailableTime;            // Total number of times in the time list
    int nbCurrentAvailableTime;          // Number of available times in the time list.
    bool pktRepeated;                    // Flag to indicate if a packet is repeated
    bool appDuplicateFilter;             // Flag to allow repeated packets filtering in the App layer
    bool blockAppTransmissions;          // Variable to block the transmission in App Layer until arrive a control msg of the last send packet
    bool insertedSlots;                  // Decide if two slots of the same hop can be scheduled together
    bool transmitHopSlot;                // Flag to indicate if the anchor is transmitting in the current slot
    simtime_t randomTimeComsink1;         // Random time to transmit in ComSink1
    simtime_t stepTimeComSink1End;        // Save the Time when finish the stepTimeComSink1
    simtime_t initTimeComSink1;           // Save the time when the ComSink1 began
    simtime_t baseSlotTime;               // Minimal time Unit that may receive a Anchor in the comsink1 to transmit a packet.
    simtime_t subComSink1Time;            // Duration of a RepetitionComSink1Slot
    simtime_t hopSlotTime;                // Time that have the Anchors of a specific hop to transmit
    simtime_t stepHopSlot;
    simtime_t periodIniTime;              // Save the tme when the last period began
    std::string hopSlotsDistributionMethod; // Method to assign the size of the slots: equal, sequential or fibonacci
    TimeList myTimeList;                    // Time list
    TimeList waitingRespondList;            // Save the times that already were used until the anchor knows if the transmission was successful or not
    cOutVector successTimeVec;              // Vector to save simulation results: list of times per period
    cOutVector timeVec;                     // Vector to save simulation results: success indicator of each time  per period
    cOutVector noAckDroppedVec;             // Vector to save simulation results: dropped packets due to no Ack per period
    cOutVector backoffDroppedVec;           // Vector to save simulation results: dropped packets due to backoff per period
    cOutVector reportsWithAckVec;           // Vector to save simulation results: transmitted packets with ack per period
    cOutVector pktsFromThisAnchor;          // Vector to save simulation results: Number of packets that this anchor wanted to transmit per period
    cOutVector pktFromNode0Vec;             // Vector to save simulation results: Number of packets from mobile node 0 that this anchor wanted to transmit per period
    cOutVector successToTxVec;              // Vector to save simulation results: effectiveness of Rafel per period

    enum allocationType{                    // Type of packets to be allocated

        time4newPacket = 1,
        time4oldPacket,
        timeOptimized
        };


public:
	virtual ~AnchorAppLayer();

	virtual void initialize(int stage);

	virtual void finish();

protected:
	/** @brief Handle self messages such as timer... */
	virtual void handleSelfMsg(cMessage *msg);

	/** @brief Handle messages from lower layer */
	virtual void handleLowerMsg(cMessage *msg);

	/** @brief Handle control messages from lower layer */
	virtual void handleLowerControl(cMessage *msg);

	/** @brief Handle messages from upper layer */
	virtual void handleUpperMsg(cMessage *msg)
	{
		opp_error("AnchorAppLayer has no upper layers!");
		delete msg;
	}

	/** @brief Handle control messages from upper layer */
	virtual void handleUpperControl(cMessage *msg)
	{
		opp_error("AnchorAppLayer has no upper layers!");
		delete msg;
	}

	/** @brief Send a broadcast message to lower layer. */
	virtual void sendBroadcast();

	/** @brief Manage the Mac errors */
	void errorManagement(cMessage *msg);

	/** @brief Recalculates the sending events for the packetsQueue starting from the current simTime */
	void createScheduleEvents();

	/** @brief Returns the max of two simtime_t variables */
	simtime_t max (simtime_t a, simtime_t b) { return (a<b)? b : a; }

	void comSinkStrategyInit();

	bool pktAllocator(int kindOfAllocation);

	void firstPktAllocation(int nbOfPkt, int subComSink1);

	void updateSuccessTimeList (bool success);
	void optimalTimeSearch();
};

#endif
