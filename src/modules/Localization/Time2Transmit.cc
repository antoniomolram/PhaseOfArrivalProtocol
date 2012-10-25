
#include <iostream>

#include "Time2Transmit.h"

Time2Transmit::Time2Transmit(simtime_t time, int  hop, int subCS, Time2Transmit *next = NULL)
{
    transmitTime = time;
    succesIndicator = 1;
    nextTime = next;
    hopSlot = hop;
    subComSink1 = subCS;
}

Time2Transmit::~Time2Transmit() {
    // TODO Auto-generated destructor stub
}

