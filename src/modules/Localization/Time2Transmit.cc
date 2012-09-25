
#include <iostream>

#include "Time2Transmit.h"

Time2Transmit::Time2Transmit(simtime_t time, Time2Transmit *next = NULL)
{
    transmitTime = time;
    succesIndicator = 0;
    nextTime = next;
}

Time2Transmit::~Time2Transmit() {
    // TODO Auto-generated destructor stub
}

