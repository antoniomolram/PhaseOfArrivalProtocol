//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef RANGEREQUEST_H_
#define RANGEREQUEST_H_

#include <omnetpp.h>
#include "MiXiMDefs.h"
#include "FWMath.h"



class MIXIM_API RangingParams:  public cObject {
public:
    static const RangingParams Inital;
public:

    bool RangingEnabled;
    int RangingMethod;        // Only one method.
    int PMUFreqStart;         // Freq default.
    int PMUFreqStep;          // Default value (2Mhz hops).
    int PMUFreqStop;          // Freq default.
    int PMUSamplesM;          // PMU units (Only read at the moment)
    bool PMUCompress;         // Default not enable.



//    int pmuVerboseLevel=0;      // See reference to implement
//    bool DefaultAntenna;
//    bool EnableAntennaDiv;
//    bool ProvideAntennaDivResults;

    //Internal parameters. (functional parameters)
    int actual_step;
    int actual_Freq;
    int total_step;
    int channel;
    int class_node;         // Iniciator =0 , Reflector =1
    simtime_t StartTimestamp;


public:
    /*
     * Constructor
     */
    RangingParams():
       RangingEnabled(false),
       RangingMethod(0),        // Only one method.
       PMUFreqStart(2403),      // Freq default.
       PMUFreqStep(2),          // Default value (2Mhz hops).
       PMUFreqStop(2443),       // Freq default.
       PMUSamplesM(4),          // PMU units (Only read at the moment)
       PMUCompress(false),      // Default not enable.
       actual_step(0),          // During the procedure the different steps.
       actual_Freq(0),          // Frequency used at the moment
       total_step(20),          // Number total of steps
       channel(0),              // Groups of channels to make multiple rangings in the same time!
       class_node(0),
       StartTimestamp()        // time to start ranging measurement
       {}
    /*
     * SetterFreqStart
     */
    void setFreqStart(const int freqStart) {
        PMUFreqStart= freqStart;
    };
    /*
     * GetterFreqStart
     */
    const int getFreqStart() {
         return PMUFreqStart;
     };
    /*
    * SetterRangingEnabled
    */
    void setRangingEnabled(const bool Enabled) {
        RangingEnabled= Enabled;
    };
    /*
     * GetterRangingEnabled
     */
    const bool getRangingEnabled() {
         return RangingEnabled;
     };
    /*
     * SetterFreqStep
     */
    void setFreqStep(const int freqStep) {
        PMUFreqStep= freqStep;
    };
    /*
     * GetterFreqStep
     */
    const int getFreqStep() {
         return PMUFreqStep;
     };
    /*
    * SetterFreqStop
    */
    void setFreqStop(const int freqStop) {
       PMUFreqStop= freqStop;
    };
    /*
    * GetterFreqStop
    */
    const int getFreqStop() {
       return PMUFreqStop;
    };
    /*
    * GetterFreqStop
    */
    const int getSamplesM() {
       return PMUSamplesM;
    };
    /*
     * SetterFreqStep
     */
    void setActualStep(const int InputActualStep) {
        actual_step= InputActualStep;
    };
    /*
     * GetterFreqStep
     */
    const int getActualStep() {


         return actual_step;
     };
    /*
     * SetterFreqStep
     */
    void setActualFreq(const int InputActualFreq) {
        actual_Freq= InputActualFreq;
    };
    /*
     * GetterFreqStep
     */
    const int getActualFreq() {
         return actual_Freq;
     };
    /*
     * SetterTotalStep
     */
    void setTotalStep(const int inputTotalStep) {
        total_step= inputTotalStep;
    };
    /*
     * GetterTotalStep
     */
    const int getTotalStep() {
         return total_step;
     };

    const int getChannelStep(const int freqStep) {
        switch(channel){
        case 0:
            return freqStep;
        break;
        case 1:
            return freqStep+total_step;
        break;
        default:
            return freqStep+total_step*channel;
        break;

        };
//Initial solution :: DELETE

        //         if(channel==0 || freqStep==0){
        //             return freqStep;
        //         }else{
        //             return freqStep+20*channel;
        //         }
    };
    void setChannel(const int input_channel){
        channel=input_channel;
    }
    const int getChannel(){
        return channel;
    }
    //Getter returning 0 if the node is set to Iniciator or 1 if the node is a reflector
    const int getClassNode(){
        return class_node;
    }
    void setClassNode(const int input_class){
        class_node=input_class;
    }

    void setStartTimeStamp(const simtime_t timestamp ){
        StartTimestamp= timestamp;
    }
    const simtime_t getStartTimestamp(){
        return StartTimestamp;
    }



};



#endif /* RANGEREQUEST_H_ */
