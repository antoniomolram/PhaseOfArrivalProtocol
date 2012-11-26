
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
   time = firstTime;
   lastTime = NULL;
   while(time && time->nextTime && time->transmitTime != time2delete) {
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
    bool returnSuccess = true;
    Time2Transmit* aux = currentTime;
    getfirstTime();
    while(time != currentTime->transmitTime){
        if(currentTime->nextTime == NULL)
        {
            EV<<"TIEMPO PARA BORRAR NO ENCONTRADO"<<endl;
            break;
        }
        else
            getnextTime();
    }


    if(currentTime->succesIndicator<5 && currentTime->succesIndicator>0)
    {
        if(success)
        {
            currentTime->succesIndicator++;
            returnSuccess = true;
        }
        else
        {
            currentTime->succesIndicator--;
            if(currentTime->succesIndicator == 0)
                returnSuccess = false;
            else
                returnSuccess = true;
        }

    }
    else{
        if(currentTime->succesIndicator == 5 && !success){
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
    else if(firstTime->transmitTime > time + 0.0025)
    {
        return true;
    }
    else{
        while(aux && aux->nextTime && (aux->nextTime->transmitTime < time))
           aux = aux->nextTime;
       if(aux->transmitTime + 0.0025 <= time){
           if(aux->nextTime == NULL)
               return true;
           if(aux->nextTime->transmitTime >= time+0.0025)
               return true;
           else
               return false;
       }
       else
           return false;
    }
}

void TimeList::handleFineTimeError(simtime_t adjusTime, simtime_t transmitTime)
{
    Time2Transmit * aux;
    aux = firstTime;
    EV<<"Transmit time:"<<transmitTime<<endl;
    EV<<"Adjust time:"<<adjusTime<<endl;
    while(aux->transmitTime != transmitTime)
    {
        assert(aux->nextTime);
        aux = aux->nextTime;
    }
    if(aux->succesIndicator > 1)
        aux->succesIndicator--;
    else
    {
        this->deleteTime(aux->transmitTime);
        this->insertTime(adjusTime,aux->hopSlot,aux->subComSink1);
        if(aux->succesIndicator > 0)
            updateSuccess(adjusTime, true);
        EV<<"FINE ERROR-CURRENT A: "<<currentTime->transmitTime<<endl;
        EV<<"FINE ERROR-CURRENT H: "<<aux->transmitTime<<endl;
        if(this->currentTime->transmitTime < adjusTime && currentTime->nextTime)
        {
            assert(currentTime->nextTime);
            this->getnextTime();
//            getfirstTime();
//            while(this->currentTime->transmitTime != adjusTime)
//            {
//                assert(currentTime->nextTime);
//                this->getnextTime();
//            }
            EV<<"FINE ERROR-CURRENTB: "<<currentTime->transmitTime<<endl;
        }
    }
}
