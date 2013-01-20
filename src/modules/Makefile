#
# OMNeT++/OMNEST Makefile for libmiximmodules
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o miximmodules -O out -I../base/phyLayer -I../base/connectionManager -I../base/messages -I../base/utils -I../base/modules -L../../out/$(CONFIGNAME)/tests/testUtils -L../../out/$(CONFIGNAME)/tests/power/utils -L../../out/$(CONFIGNAME)/src/base -lmiximbase
#

# Name of target to be created (-o option)
TARGET = libmiximmodules$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../base/phyLayer \
    -I../base/connectionManager \
    -I../base/messages \
    -I../base/utils \
    -I../base/modules \
    -I. \
    -ILocalization \
    -IanalogueModel \
    -Iapplication \
    -IconnectionManager \
    -Ienergy \
    -Imac \
    -Imessages \
    -Imobility \
    -Inetw \
    -Inic \
    -Inode \
    -Iphy \
    -Ipower \
    -Ipower/battery \
    -Itransport \
    -Iutility

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../out/$(CONFIGNAME)/tests/testUtils -L../../out/$(CONFIGNAME)/tests/power/utils -L../../out/$(CONFIGNAME)/src/base  -lmiximbase
LIBS += -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/testUtils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/power/utils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/base`

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = src/modules
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/Localization/AnchorNetLayer.o \
    $O/Localization/NodeAppLayer.o \
    $O/Localization/AppLayer.o \
    $O/Localization/AnchorAppLayer.o \
    $O/Localization/NetworkStackTrafficGen.o \
    $O/Localization/AnchorTransLayer.o \
    $O/Localization/WorldUtilityStats.o \
    $O/Localization/NodeTransLayer.o \
    $O/Localization/ComputerNetLayer.o \
    $O/Localization/cQueueWithPriority.o \
    $O/Localization/NodeNetLayer.o \
    $O/Localization/ComputerAppLayer.o \
    $O/Localization/ComputerTransLayer.o \
    $O/analogueModel/PERModel.o \
    $O/analogueModel/BreakpointPathlossModel.o \
    $O/analogueModel/LogNormalShadowing.o \
    $O/analogueModel/UWBIRIEEE802154APathlossModel.o \
    $O/analogueModel/UWBIRStochasticPathlossModel.o \
    $O/analogueModel/JakesFading.o \
    $O/analogueModel/SimplePathlossModel.o \
    $O/application/SensorApplLayer.o \
    $O/application/TestApplication.o \
    $O/application/BurstApplLayerBattery.o \
    $O/application/TrafficGen.o \
    $O/application/BurstApplLayer.o \
    $O/connectionManager/UnitDisk.o \
    $O/energy/EnergyConsumption.o \
    $O/mac/UWBIRMac.o \
    $O/mac/CSMA802154.o \
    $O/mac/Mac80211MultiChannel.o \
    $O/mac/CSMAMacLayer.o \
    $O/mac/Mac80211.o \
    $O/mac/AlohaMacLayer.o \
    $O/mac/LMacLayer.o \
    $O/mac/BMacLayer.o \
    $O/mac/csma.o \
    $O/messages/AggrPkt.o \
    $O/messages/UWBIRMacPkt.o \
    $O/mobility/MassMobility.o \
    $O/mobility/TurtleMobility.o \
    $O/mobility/BonnMotionMobility.o \
    $O/mobility/ANSimMobility.o \
    $O/mobility/Posture.o \
    $O/mobility/LinearMobility.o \
    $O/mobility/MoBANCoordinator.o \
    $O/mobility/CircleMobility.o \
    $O/mobility/TractorMobility.o \
    $O/mobility/MoBANLocal.o \
    $O/mobility/BonnMotionFileCache.o \
    $O/mobility/PostureTransition.o \
    $O/mobility/LineSegmentsMobilityBase.o \
    $O/mobility/RectangleMobility.o \
    $O/mobility/ConstSpeedMobility.o \
    $O/netw/ProbabilisticBroadcast.o \
    $O/netw/Flood.o \
    $O/netw/DummyRoute.o \
    $O/netw/ArpHost.o \
    $O/netw/WiseRoute.o \
    $O/netw/AdaptiveProbabilisticBroadcast.o \
    $O/phy/SNRThresholdDecider.o \
    $O/phy/DeciderUWBIREDSync.o \
    $O/phy/DeciderUWBIREDSyncOnAddress.o \
    $O/phy/Decider802154Narrow.o \
    $O/phy/DeciderUWBIRED.o \
    $O/phy/Decider80211.o \
    $O/phy/PhyLayerBattery.o \
    $O/phy/PhyLayer.o \
    $O/phy/Decider80211Battery.o \
    $O/phy/Decider80211MultiChannel.o \
    $O/phy/PhyLayerUWBIR.o \
    $O/power/battery/BatteryStats.o \
    $O/power/battery/SimpleBattery.o \
    $O/transport/Aggregation.o \
    $O/utility/IEEE802154A.o \
    $O/utility/SimTracer.o \
    $O/utility/phyPER.o \
    $O/messages/UWBIRMacPkt_m.o \
    $O/messages/Mac80211Pkt_m.o \
    $O/messages/AggrPkt_m.o \
    $O/messages/AirFrameUWBIR_m.o \
    $O/messages/WiseRoutePkt_m.o \
    $O/messages/ProbabilisticBroadcastPkt_m.o \
    $O/messages/LMacPkt_m.o \
    $O/messages/DummyRoutePkt_m.o

# Message files
MSGFILES = \
    messages/UWBIRMacPkt.msg \
    messages/Mac80211Pkt.msg \
    messages/AggrPkt.msg \
    messages/AirFrameUWBIR.msg \
    messages/WiseRoutePkt.msg \
    messages/ProbabilisticBroadcastPkt.msg \
    messages/LMacPkt.msg \
    messages/DummyRoutePkt.msg

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f miximmodules miximmodules.exe libmiximmodules.so libmiximmodules.a libmiximmodules.dll libmiximmodules.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f Localization/*_m.cc Localization/*_m.h
	-rm -f analogueModel/*_m.cc analogueModel/*_m.h
	-rm -f application/*_m.cc application/*_m.h
	-rm -f connectionManager/*_m.cc connectionManager/*_m.h
	-rm -f energy/*_m.cc energy/*_m.h
	-rm -f mac/*_m.cc mac/*_m.h
	-rm -f messages/*_m.cc messages/*_m.h
	-rm -f mobility/*_m.cc mobility/*_m.h
	-rm -f netw/*_m.cc netw/*_m.h
	-rm -f nic/*_m.cc nic/*_m.h
	-rm -f node/*_m.cc node/*_m.h
	-rm -f phy/*_m.cc phy/*_m.h
	-rm -f power/*_m.cc power/*_m.h
	-rm -f power/battery/*_m.cc power/battery/*_m.h
	-rm -f transport/*_m.cc transport/*_m.h
	-rm -f utility/*_m.cc utility/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc Localization/*.cc analogueModel/*.cc application/*.cc connectionManager/*.cc energy/*.cc mac/*.cc messages/*.cc mobility/*.cc netw/*.cc nic/*.cc node/*.cc phy/*.cc power/*.cc power/battery/*.cc transport/*.cc utility/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/Localization/AnchorAppLayer.o: Localization/AnchorAppLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AnchorAppLayer.h \
	Localization/AppLayer.h \
	Localization/cQueueWithPriority.h \
	utility/Packet.h
$O/Localization/AnchorNetLayer.o: Localization/AnchorNetLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/messages/NetwPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AnchorAppLayer.h \
	Localization/AnchorNetLayer.h \
	Localization/AppLayer.h \
	Localization/cQueueWithPriority.h \
	utility/Packet.h
$O/Localization/AnchorTransLayer.o: Localization/AnchorTransLayer.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/miximkerneldefs.h \
	Localization/AnchorTransLayer.h
$O/Localization/AppLayer.o: Localization/AppLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AppLayer.h \
	Localization/cQueueWithPriority.h \
	utility/Packet.h
$O/Localization/ComputerAppLayer.o: Localization/ComputerAppLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AppLayer.h \
	Localization/ComputerAppLayer.h \
	Localization/cQueueWithPriority.h \
	utility/Packet.h
$O/Localization/ComputerNetLayer.o: Localization/ComputerNetLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/messages/NetwPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AppLayer.h \
	Localization/ComputerAppLayer.h \
	Localization/ComputerNetLayer.h \
	Localization/cQueueWithPriority.h \
	utility/Packet.h
$O/Localization/ComputerTransLayer.o: Localization/ComputerTransLayer.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/miximkerneldefs.h \
	Localization/ComputerTransLayer.h
$O/Localization/NetworkStackTrafficGen.o: Localization/NetworkStackTrafficGen.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/NetworkStackTrafficGen.h \
	utility/Packet.h
$O/Localization/NodeAppLayer.o: Localization/NodeAppLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AppLayer.h \
	Localization/NodeAppLayer.h \
	Localization/cQueueWithPriority.h \
	energy/EnergyConsumption.h \
	utility/Packet.h
$O/Localization/NodeNetLayer.o: Localization/NodeNetLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/messages/NetwPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AppLayer.h \
	Localization/NodeAppLayer.h \
	Localization/NodeNetLayer.h \
	Localization/cQueueWithPriority.h \
	energy/EnergyConsumption.h \
	utility/Packet.h
$O/Localization/NodeTransLayer.o: Localization/NodeTransLayer.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/miximkerneldefs.h \
	Localization/NodeTransLayer.h
$O/Localization/WorldUtilityStats.o: Localization/WorldUtilityStats.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/WorldUtilityStats.h \
	utility/Packet.h
$O/Localization/cQueueWithPriority.o: Localization/cQueueWithPriority.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/cQueueWithPriority.h \
	utility/Packet.h
$O/analogueModel/BreakpointPathlossModel.o: analogueModel/BreakpointPathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/BreakpointPathlossModel.h
$O/analogueModel/JakesFading.o: analogueModel/JakesFading.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/JakesFading.h
$O/analogueModel/LogNormalShadowing.o: analogueModel/LogNormalShadowing.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/LogNormalShadowing.h
$O/analogueModel/PERModel.o: analogueModel/PERModel.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/PERModel.h
$O/analogueModel/SimplePathlossModel.o: analogueModel/SimplePathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseWorldUtility.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/SimplePathlossModel.h
$O/analogueModel/UWBIRIEEE802154APathlossModel.o: analogueModel/UWBIRIEEE802154APathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRIEEE802154APathlossModel.h \
	utility/IEEE802154A.h \
	utility/SimpleTimeConstMapping.h
$O/analogueModel/UWBIRStochasticPathlossModel.o: analogueModel/UWBIRStochasticPathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseWorldUtility.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRStochasticPathlossModel.h
$O/application/BurstApplLayer.o: application/BurstApplLayer.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/modules/TestApplLayer.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/BurstApplLayer.h
$O/application/BurstApplLayerBattery.o: application/BurstApplLayerBattery.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/modules/TestApplLayer.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/BurstApplLayer.h \
	application/BurstApplLayerBattery.h
$O/application/SensorApplLayer.o: application/SensorApplLayer.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/SensorApplLayer.h \
	utility/Packet.h
$O/application/TestApplication.o: application/TestApplication.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/TestApplication.h
$O/application/TrafficGen.o: application/TrafficGen.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/TrafficGen.h \
	utility/Packet.h
$O/connectionManager/UnitDisk.o: connectionManager/UnitDisk.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	connectionManager/UnitDisk.h
$O/energy/EnergyConsumption.o: energy/EnergyConsumption.cc \
	../base/modules/BaseModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	energy/EnergyConsumption.h
$O/mac/AlohaMacLayer.o: mac/AlohaMacLayer.cc \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/AlohaMacLayer.h \
	mac/UWBIRMac.h \
	messages/UWBIRMacPkt.h \
	messages/UWBIRMacPkt_m.h \
	utility/IEEE802154A.h \
	utility/Packet.h
$O/mac/BMacLayer.o: mac/BMacLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/MacPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/BMacLayer.h \
	utility/DroppedPacket.h
$O/mac/CSMA802154.o: mac/CSMA802154.cc \
	../base/connectionManager/NicEntry.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	energy/EnergyConsumption.h \
	mac/CSMA802154.h \
	mac/csma.h \
	phy/Decider802154Narrow.h \
	phy/DeciderResult802154Narrow.h \
	utility/DroppedPacket.h
$O/mac/CSMAMacLayer.o: mac/CSMAMacLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/CSMAMacLayer.h
$O/mac/LMacLayer.o: mac/LMacLayer.cc \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/LMacLayer.h \
	messages/LMacPkt_m.h \
	utility/DroppedPacket.h
$O/mac/Mac80211.o: mac/Mac80211.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/Mac80211.h \
	messages/Mac80211Pkt_m.h \
	phy/Decider80211.h \
	phy/DeciderResult80211.h \
	utility/Consts80211.h
$O/mac/Mac80211MultiChannel.o: mac/Mac80211MultiChannel.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/Mac80211.h \
	mac/Mac80211MultiChannel.h \
	messages/Mac80211Pkt_m.h \
	utility/Consts80211.h
$O/mac/UWBIRMac.o: mac/UWBIRMac.cc \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/UWBIRMac.h \
	messages/UWBIRMacPkt.h \
	messages/UWBIRMacPkt_m.h \
	phy/DeciderResultUWBIR.h \
	phy/MacToUWBIRPhyControlInfo.h \
	utility/IEEE802154A.h \
	utility/Packet.h
$O/mac/csma.o: mac/csma.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ApplPkt_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/AppToNetControlInfo.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	Localization/AppLayer.h \
	Localization/cQueueWithPriority.h \
	energy/EnergyConsumption.h \
	mac/csma.h \
	utility/DroppedPacket.h \
	utility/Packet.h
$O/messages/AggrPkt.o: messages/AggrPkt.cc \
	../base/messages/ApplPkt_m.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/AggrPkt.h \
	messages/AggrPkt_m.h
$O/messages/AggrPkt_m.o: messages/AggrPkt_m.cc \
	../base/messages/ApplPkt_m.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/AggrPkt_m.h
$O/messages/AirFrameUWBIR_m.o: messages/AirFrameUWBIR_m.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	messages/AirFrameUWBIR_m.h \
	utility/IEEE802154A.h
$O/messages/DummyRoutePkt_m.o: messages/DummyRoutePkt_m.cc \
	../base/messages/NetwPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/DummyRoutePkt_m.h
$O/messages/LMacPkt_m.o: messages/LMacPkt_m.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/LMacPkt_m.h
$O/messages/Mac80211Pkt_m.o: messages/Mac80211Pkt_m.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/Mac80211Pkt_m.h
$O/messages/ProbabilisticBroadcastPkt_m.o: messages/ProbabilisticBroadcastPkt_m.cc \
	../base/messages/NetwPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/ProbabilisticBroadcastPkt_m.h
$O/messages/UWBIRMacPkt.o: messages/UWBIRMacPkt.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/UWBIRMacPkt.h \
	messages/UWBIRMacPkt_m.h
$O/messages/UWBIRMacPkt_m.o: messages/UWBIRMacPkt_m.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/UWBIRMacPkt_m.h
$O/messages/WiseRoutePkt_m.o: messages/WiseRoutePkt_m.cc \
	../base/messages/NetwPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/WiseRoutePkt_m.h
$O/mobility/ANSimMobility.o: mobility/ANSimMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/ANSimMobility.h \
	mobility/LineSegmentsMobilityBase.h
$O/mobility/BonnMotionFileCache.o: mobility/BonnMotionFileCache.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/BonnMotionFileCache.h
$O/mobility/BonnMotionMobility.o: mobility/BonnMotionMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/BonnMotionFileCache.h \
	mobility/BonnMotionMobility.h \
	mobility/LineSegmentsMobilityBase.h
$O/mobility/CircleMobility.o: mobility/CircleMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/CircleMobility.h
$O/mobility/ConstSpeedMobility.o: mobility/ConstSpeedMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/ConstSpeedMobility.h
$O/mobility/LineSegmentsMobilityBase.o: mobility/LineSegmentsMobilityBase.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/LineSegmentsMobilityBase.h
$O/mobility/LinearMobility.o: mobility/LinearMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/LinearMobility.h
$O/mobility/MassMobility.o: mobility/MassMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/MassMobility.h
$O/mobility/MoBANCoordinator.o: mobility/MoBANCoordinator.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/MoBANCoordinator.h \
	mobility/MoBANLocal.h \
	mobility/Posture.h \
	mobility/PostureTransition.h \
	utility/MoBANBBItem.h
$O/mobility/MoBANLocal.o: mobility/MoBANLocal.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/MoBANLocal.h \
	utility/MoBANBBItem.h
$O/mobility/Posture.o: mobility/Posture.cc \
	../base/modules/BaseWorldUtility.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	mobility/Posture.h
$O/mobility/PostureTransition.o: mobility/PostureTransition.cc \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	mobility/PostureTransition.h
$O/mobility/RectangleMobility.o: mobility/RectangleMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/RectangleMobility.h
$O/mobility/TractorMobility.o: mobility/TractorMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/TractorMobility.h
$O/mobility/TurtleMobility.o: mobility/TurtleMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/TurtleMobility.h
$O/netw/AdaptiveProbabilisticBroadcast.o: netw/AdaptiveProbabilisticBroadcast.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/ProbabilisticBroadcastPkt_m.h \
	netw/AdaptiveProbabilisticBroadcast.h \
	netw/ProbabilisticBroadcast.h
$O/netw/ArpHost.o: netw/ArpHost.cc \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseModule.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	netw/ArpHost.h
$O/netw/DummyRoute.o: netw/DummyRoute.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/DummyRoutePkt_m.h \
	netw/DummyRoute.h
$O/netw/Flood.o: netw/Flood.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	netw/Flood.h
$O/netw/ProbabilisticBroadcast.o: netw/ProbabilisticBroadcast.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/ProbabilisticBroadcastPkt_m.h \
	netw/ProbabilisticBroadcast.h \
	utility/ProbBcastNetwControlInfo.h
$O/netw/WiseRoute.o: netw/WiseRoute.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/NetwPkt_m.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/WiseRoutePkt_m.h \
	netw/WiseRoute.h \
	utility/Packet.h \
	utility/SimTracer.h
$O/phy/Decider80211.o: phy/Decider80211.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/Mac80211Pkt_m.h \
	phy/Decider80211.h \
	phy/DeciderResult80211.h \
	utility/Consts80211.h
$O/phy/Decider80211Battery.o: phy/Decider80211Battery.cc \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider80211.h \
	phy/Decider80211Battery.h
$O/phy/Decider80211MultiChannel.o: phy/Decider80211MultiChannel.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider80211.h \
	phy/Decider80211Battery.h \
	phy/Decider80211MultiChannel.h \
	phy/DeciderResult80211.h \
	utility/Consts80211.h
$O/phy/Decider802154Narrow.o: phy/Decider802154Narrow.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/Signal_.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider802154Narrow.h \
	phy/DeciderResult802154Narrow.h
$O/phy/DeciderUWBIRED.o: phy/DeciderUWBIRED.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	messages/AirFrameUWBIR_m.h \
	phy/DeciderResultUWBIR.h \
	phy/DeciderUWBIRED.h \
	phy/PhyLayerUWBIR.h \
	phy/RadioUWBIR.h \
	utility/IEEE802154A.h \
	utility/UWBIRPacket.h
$O/phy/DeciderUWBIREDSync.o: phy/DeciderUWBIREDSync.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/DeciderUWBIRED.h \
	phy/DeciderUWBIREDSync.h \
	utility/IEEE802154A.h \
	utility/UWBIRPacket.h
$O/phy/DeciderUWBIREDSyncOnAddress.o: phy/DeciderUWBIREDSyncOnAddress.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/DeciderUWBIRED.h \
	phy/DeciderUWBIREDSyncOnAddress.h \
	utility/IEEE802154A.h \
	utility/UWBIRPacket.h
$O/phy/PhyLayer.o: phy/PhyLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/BreakpointPathlossModel.h \
	analogueModel/JakesFading.h \
	analogueModel/LogNormalShadowing.h \
	analogueModel/PERModel.h \
	analogueModel/SimplePathlossModel.h \
	phy/Decider80211.h \
	phy/Decider802154Narrow.h \
	phy/PhyLayer.h \
	phy/SNRThresholdDecider.h
$O/phy/PhyLayerBattery.o: phy/PhyLayerBattery.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider80211.h \
	phy/Decider80211Battery.h \
	phy/Decider80211MultiChannel.h \
	phy/PhyLayer.h \
	phy/PhyLayerBattery.h
$O/phy/PhyLayerUWBIR.o: phy/PhyLayerUWBIR.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRIEEE802154APathlossModel.h \
	analogueModel/UWBIRStochasticPathlossModel.h \
	messages/AirFrameUWBIR_m.h \
	phy/DeciderUWBIRED.h \
	phy/DeciderUWBIREDSync.h \
	phy/DeciderUWBIREDSyncOnAddress.h \
	phy/MacToUWBIRPhyControlInfo.h \
	phy/PhyLayerUWBIR.h \
	phy/RadioUWBIR.h \
	utility/IEEE802154A.h \
	utility/SimpleTimeConstMapping.h \
	utility/UWBIRPacket.h
$O/phy/SNRThresholdDecider.o: phy/SNRThresholdDecider.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/SNRThresholdDecider.h
$O/power/battery/BatteryStats.o: power/battery/BatteryStats.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	power/battery/BatteryState.h \
	power/battery/BatteryStats.h \
	power/battery/DeviceEntry.h
$O/power/battery/SimpleBattery.o: power/battery/SimpleBattery.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseModule.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	power/battery/BatteryState.h \
	power/battery/BatteryStats.h \
	power/battery/DeviceEntry.h \
	power/battery/SimpleBattery.h
$O/transport/Aggregation.o: transport/Aggregation.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/RangingParams.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/AggrPkt.h \
	messages/AggrPkt_m.h \
	transport/Aggregation.h
$O/utility/IEEE802154A.o: utility/IEEE802154A.cc \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	utility/IEEE802154A.h
$O/utility/SimTracer.o: utility/SimTracer.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	utility/Packet.h \
	utility/SimTracer.h
$O/utility/phyPER.o: utility/phyPER.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/DeciderUWBIRED.h \
	utility/IEEE802154A.h \
	utility/Packet.h \
	utility/UWBIRPacket.h \
	utility/phyPER.h

