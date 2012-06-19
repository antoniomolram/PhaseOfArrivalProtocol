//
// Generated file, do not edit! Created by opp_msgc 4.2 from messages/LMacPkt.msg.
//

#ifndef _LMACPKT_M_H_
#define _LMACPKT_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "MacPkt_m.h"
// }}



/**
 * Class generated from <tt>messages/LMacPkt.msg</tt> by opp_msgc.
 * <pre>
 * message LMacPkt extends MacPkt
 * {
 *     int              mySlot;          
 *     LAddress::L2Type occupiedSlots[]; 
 * }
 * </pre>
 */
class LMacPkt : public ::MacPkt
{
  protected:
    int mySlot_var;
    LAddress::L2Type *occupiedSlots_var; // array ptr
    unsigned int occupiedSlots_arraysize;

  private:
    void copy(const LMacPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LMacPkt&);

  public:
    LMacPkt(const char *name=NULL, int kind=0);
    LMacPkt(const LMacPkt& other);
    virtual ~LMacPkt();
    LMacPkt& operator=(const LMacPkt& other);
    virtual LMacPkt *dup() const {return new LMacPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getMySlot() const;
    virtual void setMySlot(int mySlot);
    virtual void setOccupiedSlotsArraySize(unsigned int size);
    virtual unsigned int getOccupiedSlotsArraySize() const;
    virtual LAddress::L2Type& getOccupiedSlots(unsigned int k);
    virtual const LAddress::L2Type& getOccupiedSlots(unsigned int k) const {return const_cast<LMacPkt*>(this)->getOccupiedSlots(k);}
    virtual void setOccupiedSlots(unsigned int k, const LAddress::L2Type& occupiedSlots);
};

inline void doPacking(cCommBuffer *b, LMacPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LMacPkt& obj) {obj.parsimUnpack(b);}


#endif // _LMACPKT_M_H_
