#
# OMNeT++/OMNEST Makefile for PhaseOfArrivalProtocol
#
# This file was generated with the command:
#  opp_makemake -f --nolink -O out -d analogueModels -d lmac -d CSMAMac -d baseNetwork -d BaseMoBANNetwork -d ieee802154a -d bmac -d Mac80211 -d WSNRouting -d multiConnectionManager -d ieee802154Narrow -L../out/$(CONFIGNAME)/tests/testUtils -L../out/$(CONFIGNAME)/tests/power/utils -L../out/$(CONFIGNAME)/src/base -L../out/$(CONFIGNAME)/src/modules
#

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = examples
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS =

# Message files
MSGFILES =

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

all: $(OBJS) submakedirs Makefile
	@# Do nothing

submakedirs:  analogueModels_dir lmac_dir CSMAMac_dir baseNetwork_dir BaseMoBANNetwork_dir ieee802154a_dir bmac_dir Mac80211_dir WSNRouting_dir multiConnectionManager_dir ieee802154Narrow_dir

.PHONY: all clean cleanall depend msgheaders  analogueModels lmac CSMAMac baseNetwork BaseMoBANNetwork ieee802154a bmac Mac80211 WSNRouting multiConnectionManager ieee802154Narrow
analogueModels: analogueModels_dir
lmac: lmac_dir
CSMAMac: CSMAMac_dir
baseNetwork: baseNetwork_dir
BaseMoBANNetwork: BaseMoBANNetwork_dir
ieee802154a: ieee802154a_dir
bmac: bmac_dir
Mac80211: Mac80211_dir
WSNRouting: WSNRouting_dir
multiConnectionManager: multiConnectionManager_dir
ieee802154Narrow: ieee802154Narrow_dir

analogueModels_dir:
	cd analogueModels && $(MAKE) all

lmac_dir:
	cd lmac && $(MAKE) all

CSMAMac_dir:
	cd CSMAMac && $(MAKE) all

baseNetwork_dir:
	cd baseNetwork && $(MAKE) all

BaseMoBANNetwork_dir:
	cd BaseMoBANNetwork && $(MAKE) all

ieee802154a_dir:
	cd ieee802154a && $(MAKE) all

bmac_dir:
	cd bmac && $(MAKE) all

Mac80211_dir:
	cd Mac80211 && $(MAKE) all

WSNRouting_dir:
	cd WSNRouting && $(MAKE) all

multiConnectionManager_dir:
	cd multiConnectionManager && $(MAKE) all

ieee802154Narrow_dir:
	cd ieee802154Narrow && $(MAKE) all

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)
	cd analogueModels && $(MAKE) msgheaders
	cd lmac && $(MAKE) msgheaders
	cd CSMAMac && $(MAKE) msgheaders
	cd baseNetwork && $(MAKE) msgheaders
	cd BaseMoBANNetwork && $(MAKE) msgheaders
	cd ieee802154a && $(MAKE) msgheaders
	cd bmac && $(MAKE) msgheaders
	cd Mac80211 && $(MAKE) msgheaders
	cd WSNRouting && $(MAKE) msgheaders
	cd multiConnectionManager && $(MAKE) msgheaders
	cd ieee802154Narrow && $(MAKE) msgheaders

clean:
	-rm -rf $O
	-rm -f PhaseOfArrivalProtocol PhaseOfArrivalProtocol.exe libPhaseOfArrivalProtocol.so libPhaseOfArrivalProtocol.a libPhaseOfArrivalProtocol.dll libPhaseOfArrivalProtocol.dylib
	-rm -f ./*_m.cc ./*_m.h

	-cd analogueModels && $(MAKE) clean
	-cd lmac && $(MAKE) clean
	-cd CSMAMac && $(MAKE) clean
	-cd baseNetwork && $(MAKE) clean
	-cd BaseMoBANNetwork && $(MAKE) clean
	-cd ieee802154a && $(MAKE) clean
	-cd bmac && $(MAKE) clean
	-cd Mac80211 && $(MAKE) clean
	-cd WSNRouting && $(MAKE) clean
	-cd multiConnectionManager && $(MAKE) clean
	-cd ieee802154Narrow && $(MAKE) clean

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc
	-cd analogueModels && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd lmac && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd CSMAMac && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd baseNetwork && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd BaseMoBANNetwork && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd ieee802154a && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd bmac && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd Mac80211 && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd WSNRouting && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd multiConnectionManager && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd ieee802154Narrow && if [ -f Makefile ]; then $(MAKE) depend; fi

# DO NOT DELETE THIS LINE -- make depend depends on it.

