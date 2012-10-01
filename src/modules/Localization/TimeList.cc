
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

void TimeList::insertTime(simtime_t newTime, int hopSlot, int subComSink1)
{
   Time2Transmit* lastTime;
   if(emptyList() || firstTime->transmitTime > newTime) {
      firstTime = new Time2Transmit(newTime, hopSlot, subComSink1, firstTime);
   }
   else {
      lastTime = firstTime;
      while(lastTime->nextTime && lastTime->nextTime->transmitTime <= newTime){
          lastTime->transmitTime;
          lastTime = lastTime->nextTime;
      }
      lastTime->nextTime = new Time2Transmit(newTime, hopSlot,subComSink1, lastTime->nextTime);
   }
}

void TimeList::deleteTime(simtime_t time2delete)
{
   Time2Transmit* lastTime;
   Time2Transmit* time;
   simtime_t testTime;
   testTime = time2delete;
   EV<<"TIEMPO A BORRAR: "<<time2delete<<endl;
   time = firstTime;
   lastTime = NULL;
   while(time && time->nextTime && time->transmitTime < time2delete) {
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

bool TimeList::updateSuccess(simtime_t time, bool success)
{
    bool returnSuccess;
    Time2Transmit* aux = currentTime;
    getfirstTime();
    while(time != currentTime->transmitTime)
        getnextTime();

    if(currentTime->succesIndicator<4 && currentTime->succesIndicator>0)
    {
        if(success)
            currentTime->succesIndicator++;
        else
            currentTime->succesIndicator--;
        returnSuccess = true;
    }
    else{
        if(currentTime->succesIndicator == 4 && !success){
            currentTime->succesIndicator--;
            returnSuccess = true;
        }
        else if(currentTime->succesIndicator == 0 && success){
            currentTime->succesIndicator++;
            returnSuccess = true;
        }
        else if(currentTime->succesIndicator == 0 && !success)
            returnSuccess = false;
    }
    EV<<"NEW SUCCESS INDICATOR: "<<currentTime->succesIndicator<<endl;
    currentTime = aux;
    return returnSuccess;
}

Time2Transmit* TimeList::findTime(simtime_t time2find)
{
    Time2Transmit* time;
    time = firstTime;
    while(time && time->nextTime && time->transmitTime < time2find) {
       time = time->nextTime;
    }
    if(!time || time->transmitTime != time2find)
        return NULL;
    else
        return time;
}

bool TimeList::checkSpace(simtime_t time)
{
    Time2Transmit * aux;
    aux = firstTime;
    if(aux == NULL)
    {
        return true;
    }
    else{
        while(aux && aux->nextTime && (aux->nextTime->transmitTime < time))
           aux = aux->nextTime;
       if(aux->transmitTime + 0.002 <= time){
           if(aux->nextTime == NULL)
               return true;
           if(aux->nextTime->transmitTime >= time+0.002)
               return true;
           else
               return false;
       }
       else
           return false;
    }
}
