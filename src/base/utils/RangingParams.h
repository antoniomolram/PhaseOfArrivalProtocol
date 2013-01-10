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
    int PMUFreqStart;      // Freq default.
    int PMUFreqStep;          // Default value (2Mhz hops).
    int PMUFreqStop;       // Freq default.
    int PMUSamplesM;          // PMU units (Only read at the moment)
    bool PMUCompress;     // Default not enable.

//    int pmuVerboseLevel=0;      // See reference to implement
//    bool DefaultAntenna;
//    bool EnableAntennaDiv;
//    bool ProvideAntennaDivResults;

public:
    /*
     * Constructor
     */
    RangingParams():
       RangingEnabled(false),
       RangingMethod(0),       // Only one method.
       PMUFreqStart(2403),      // Freq default.
       PMUFreqStep(2),         // Default value (2Mhz hops).
       PMUFreqStop(2443),       // Freq default.
       PMUSamplesM(4),          // PMU units (Only read at the moment)
       PMUCompress(false)    // Default not enable.
       {}
    /*
     * SetterFreqStart
     */


    /*
     * GetterFreqStart
     */



};



#endif /* RANGEREQUEST_H_ */
