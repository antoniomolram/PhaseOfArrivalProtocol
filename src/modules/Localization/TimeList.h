
#ifndef TIMELIST_H_
#define TIMELIST_H_

#include "Time2Transmit.h"
#include <assert.h>
#include <omnetpp.h>

class TimeList {
public:
    TimeList();
    virtual ~TimeList();

    Time2Transmit* firstTime;
    Time2Transmit* currentTime;

    void insertTime(simtime_t, int hopSlot, int subComSink1 );
    void deleteTime(simtime_t);
    bool emptyList() { return firstTime == NULL; }
    void printTimes();
    void getnextTime();
    void getfirstTime();
    void getlastTime();
    bool currentTime2Transmit() { return currentTime != NULL; }
    bool updateSuccess(simtime_t time, bool success);
    Time2Transmit* findTime(simtime_t time2find);
    bool checkSpace(simtime_t time);
    void handleFineTimeError(simtime_t adjusTime, simtime_t transmitTime);
};

#endif /* TIMELIST_H_ */
