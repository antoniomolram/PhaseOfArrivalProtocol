
#ifndef TIMELIST_H_
#define TIMELIST_H_

#include "Time2Transmit.h"
#include <omnetpp.h>

class TimeList {
public:
    TimeList();
    virtual ~TimeList();

    Time2Transmit* firstTime;
    Time2Transmit* currentTime;

    void insertTime(simtime_t);
    void deleteTime(simsignal_t);
    bool emptyList() { return firstTime == NULL; }
    void printTimes();
    void getnextTime();
    void getfirstTime();
    void getlastTime();
    bool currentTime2Transmit() { return currentTime != NULL; }
    void updateSuccess(bool);
    bool findTime(simtime_t time2find);
    bool checkSpace(simtime_t time);
};

#endif /* TIMELIST_H_ */
