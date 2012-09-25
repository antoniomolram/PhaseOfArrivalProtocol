

#ifndef TIME2TRANSMIT_H_
#define TIME2TRANSMIT_H_

#include <omnetpp.h>

class Time2Transmit {

public:
    Time2Transmit(simtime_t, Time2Transmit *);
    virtual ~Time2Transmit();
private:
    int succesIndicator;
    simtime_t transmitTime;
    Time2Transmit *nextTime;
    friend class TimeList;
};

#endif /* TIME2TRANSMIT_H_ */
