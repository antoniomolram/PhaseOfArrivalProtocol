
#include "TimeList.h"

TimeList::TimeList() {
    firstTime = NULL;
    currentTime = NULL;
}

TimeList::~TimeList()
{
   Time2Transmit* aux;

   while(firstTime) {
      aux = firstTime;
      firstTime = firstTime->nextTime;
      delete aux;
   }
   currentTime = NULL;
}

void TimeList::insertTime(simtime_t newTime)
{
   Time2Transmit* lastTime;

   if(emptyList() || firstTime->transmitTime > newTime) {
      firstTime = new Time2Transmit(newTime, firstTime);
   }
   else {
      lastTime = firstTime;
      while(lastTime->nextTime && lastTime->nextTime->transmitTime <= newTime)
         lastTime = lastTime->nextTime;
      lastTime->nextTime = new Time2Transmit(newTime, lastTime->nextTime);
   }
}

void TimeList::deleteTime(simsignal_t time2delete)
{
   Time2Transmit* lastTime;
   Time2Transmit* time;

  time = firstTime;
   lastTime = NULL;
   while(time && time->nextTime->transmitTime < time2delete) {
      lastTime = time;
      time = time->nextTime;
   }
   if(!time || time->transmitTime != time2delete) return;
   else {
      if(!lastTime)
         firstTime = time->nextTime;
      else
         lastTime->nextTime = time->nextTime;
      delete time;
   }
}

void TimeList::printTimes()
{
   Time2Transmit *aux;

   aux = firstTime;
   while(aux) {
      EV<<"Time to transmit: "<<aux->transmitTime << "Success indicator: " << aux->succesIndicator<<endl;
      aux = aux->nextTime;
   }
}

void TimeList::getnextTime()
{
   if(currentTime)
       currentTime = currentTime->nextTime;
}

void TimeList::getfirstTime()
{
   currentTime = firstTime;
}

void TimeList::getlastTime()
{
   currentTime = firstTime;
   if(!emptyList())
      while(currentTime->nextTime)
          getnextTime();
}

void TimeList::updateSuccess(bool success)
{
    if(currentTime->succesIndicator<4 && currentTime->succesIndicator>0)
    {
        if(success)
            currentTime->succesIndicator++;
        else
            currentTime->succesIndicator--;
    }
    else{
        if(currentTime->succesIndicator == 4 && !success)
            currentTime->succesIndicator--;
        else if(currentTime->succesIndicator == 0 && success)
            currentTime->succesIndicator++;
    }
}

bool TimeList::findTime(simtime_t time2find)
{
    Time2Transmit* time;
    time = firstTime;
    while(time && time->nextTime->transmitTime < time2find) {
       time = time->nextTime;
    }
    if(!time || time->transmitTime != time2find)
        return false;
    else
        return true;
}

bool TimeList::checkSpace(simtime_t time)
{
    Time2Transmit * aux;
    aux = firstTime;
     while(aux && aux->nextTime->transmitTime < time)
        aux = aux->nextTime;
    if(aux->transmitTime + 0.002 <= time){
        if(aux->nextTime->transmitTime >= time+0.002)
            return true;
        else
            return false;
    }
    else
        return false;

}
