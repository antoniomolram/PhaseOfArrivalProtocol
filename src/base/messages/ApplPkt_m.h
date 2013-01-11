//
// Generated file, do not edit! Created by opp_msgc 4.2 from messages/ApplPkt.msg.
//

#ifndef _APPLPKT_M_H_
#define _APPLPKT_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "SimpleAddress.h"
    #include "RangingParams.h"
// }}



/**
 * Class generated from <tt>messages/ApplPkt.msg</tt> by opp_msgc.
 * <pre>
 * packet ApplPkt
 * {
 *     LAddress::L3Type destAddr = LAddress::L3BROADCAST; 
 *     LAddress::L3Type srcAddr  = LAddress::L3BROADCAST; 
 * 	int sequenceId = 0;				
 *     int priority = 1; 				
 *     int timeOfLife = 1;				
 *     int8 status = 0;
 * 	int16 posX = 0;
 * 	int16 posY = 0;
 * 	int16 posZ = 0;
 * 	int32 timestamp = 0;
 * 	
 * 	
 * 
 * 	int realDestAddr = -1;			
 * 	int realSrcAddr = -1;			
 * 	int retransmisionCounterBO = 0;	
 * 	int retransmisionCounterACK = 0;
 * 	bool CSMA = true;				
 * 	bool askForRequest = false;		
 * 	bool requestPacket = false;		
 * 	int numberOfBroadcasts = 0;		
 * 	bool sendInProcess = false;		
 * 	
 * 	bool wasRequest = false;		
 * 	bool wasReport = false;			
 * 	bool wasBroadcast = false;		
 * 	bool isAnswer = false;			
 * 
 * 	int id;							
 * 	int createdIn;					
 * 	int nodeMode;					
 * 	int fromNode;					
 * 	
 * 	double timestampAnchorTX = 0;	
 * 	double timestampComRelated = 0; 
 * 	
 * 	double broadcastedSuccess = 1;	
 * 	
 * 	
 * 	bool fastTransmision=false;
 * 	RangingParams RangingParams;
 * 
 * }
 * </pre>
 */
class ApplPkt : public ::cPacket
{
  protected:
    LAddress::L3Type destAddr_var;
    LAddress::L3Type srcAddr_var;
    int sequenceId_var;
    int priority_var;
    int timeOfLife_var;
    int8 status_var;
    int16 posX_var;
    int16 posY_var;
    int16 posZ_var;
    int32 timestamp_var;
    int realDestAddr_var;
    int realSrcAddr_var;
    int retransmisionCounterBO_var;
    int retransmisionCounterACK_var;
    bool CSMA_var;
    bool askForRequest_var;
    bool requestPacket_var;
    int numberOfBroadcasts_var;
    bool sendInProcess_var;
    bool wasRequest_var;
    bool wasReport_var;
    bool wasBroadcast_var;
    bool isAnswer_var;
    int id_var;
    int createdIn_var;
    int nodeMode_var;
    int fromNode_var;
    double timestampAnchorTX_var;
    double timestampComRelated_var;
    double broadcastedSuccess_var;
    bool fastTransmision_var;
    RangingParams RangingParams_var;

  private:
    void copy(const ApplPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ApplPkt&);

  public:
    ApplPkt(const char *name=NULL, int kind=0);
    ApplPkt(const ApplPkt& other);
    virtual ~ApplPkt();
    ApplPkt& operator=(const ApplPkt& other);
    virtual ApplPkt *dup() const {return new ApplPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual LAddress::L3Type& getDestAddr();
    virtual const LAddress::L3Type& getDestAddr() const {return const_cast<ApplPkt*>(this)->getDestAddr();}
    virtual void setDestAddr(const LAddress::L3Type& destAddr);
    virtual LAddress::L3Type& getSrcAddr();
    virtual const LAddress::L3Type& getSrcAddr() const {return const_cast<ApplPkt*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const LAddress::L3Type& srcAddr);
    virtual int getSequenceId() const;
    virtual void setSequenceId(int sequenceId);
    virtual int getPriority() const;
    virtual void setPriority(int priority);
    virtual int getTimeOfLife() const;
    virtual void setTimeOfLife(int timeOfLife);
    virtual int8 getStatus() const;
    virtual void setStatus(int8 status);
    virtual int16 getPosX() const;
    virtual void setPosX(int16 posX);
    virtual int16 getPosY() const;
    virtual void setPosY(int16 posY);
    virtual int16 getPosZ() const;
    virtual void setPosZ(int16 posZ);
    virtual int32 getTimestamp() const;
    virtual void setTimestamp(int32 timestamp);
    virtual int getRealDestAddr() const;
    virtual void setRealDestAddr(int realDestAddr);
    virtual int getRealSrcAddr() const;
    virtual void setRealSrcAddr(int realSrcAddr);
    virtual int getRetransmisionCounterBO() const;
    virtual void setRetransmisionCounterBO(int retransmisionCounterBO);
    virtual int getRetransmisionCounterACK() const;
    virtual void setRetransmisionCounterACK(int retransmisionCounterACK);
    virtual bool getCSMA() const;
    virtual void setCSMA(bool CSMA);
    virtual bool getAskForRequest() const;
    virtual void setAskForRequest(bool askForRequest);
    virtual bool getRequestPacket() const;
    virtual void setRequestPacket(bool requestPacket);
    virtual int getNumberOfBroadcasts() const;
    virtual void setNumberOfBroadcasts(int numberOfBroadcasts);
    virtual bool getSendInProcess() const;
    virtual void setSendInProcess(bool sendInProcess);
    virtual bool getWasRequest() const;
    virtual void setWasRequest(bool wasRequest);
    virtual bool getWasReport() const;
    virtual void setWasReport(bool wasReport);
    virtual bool getWasBroadcast() const;
    virtual void setWasBroadcast(bool wasBroadcast);
    virtual bool getIsAnswer() const;
    virtual void setIsAnswer(bool isAnswer);
    virtual int getId() const;
    virtual void setId(int id);
    virtual int getCreatedIn() const;
    virtual void setCreatedIn(int createdIn);
    virtual int getNodeMode() const;
    virtual void setNodeMode(int nodeMode);
    virtual int getFromNode() const;
    virtual void setFromNode(int fromNode);
    virtual double getTimestampAnchorTX() const;
    virtual void setTimestampAnchorTX(double timestampAnchorTX);
    virtual double getTimestampComRelated() const;
    virtual void setTimestampComRelated(double timestampComRelated);
    virtual double getBroadcastedSuccess() const;
    virtual void setBroadcastedSuccess(double broadcastedSuccess);
    virtual bool getFastTransmision() const;
    virtual void setFastTransmision(bool fastTransmision);
    virtual RangingParams& getRangingParams();
    virtual const RangingParams& getRangingParams() const {return const_cast<ApplPkt*>(this)->getRangingParams();}
    virtual void setRangingParams(const RangingParams& RangingParams);
};

inline void doPacking(cCommBuffer *b, ApplPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ApplPkt& obj) {obj.parsimUnpack(b);}


#endif // _APPLPKT_M_H_
