

#ifndef TIME2TRANSMIT_H_
#define TIME2TRANSMIT_H_

#include <omnetpp.h>

class Time2Transmit {
friend class TimeList;
public:
    Time2Transmit(simtime_t, Time2Transmit *);
    virtual ~Time2Transmit();

    int succesIndicator;
    simtime_t transmitTime;
    Time2Transmit *nextTime;

};

#endif /* TIME2TRANSMIT_H_ */
