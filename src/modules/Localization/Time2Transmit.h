

#ifndef TIME2TRANSMIT_H_
#define TIME2TRANSMIT_H_

#include <omnetpp.h>

class Time2Transmit {
friend class TimeList;
public:
    Time2Transmit(simtime_t, int, int, Time2Transmit *);
    virtual ~Time2Transmit();
    int hopSlot;
    int subComSink1;
    int succesIndicator;
    simtime_t transmitTime;
    Time2Transmit *nextTime;

};

#endif /* TIME2TRANSMIT_H_ */
