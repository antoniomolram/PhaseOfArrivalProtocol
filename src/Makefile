#
# OMNeT++/OMNEST Makefile for PhaseOfArrivalProtocol
#
# This file was generated with the command:
#  opp_makemake -f --nolink -O out -d base -d modules -L../out/$(CONFIGNAME)/tests/testUtils -L../out/$(CONFIGNAME)/tests/power/utils -L../out/$(CONFIGNAME)/src/base -L../out/$(CONFIGNAME)/src/modules
#

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
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
# inserted from file 'makefrag':
modules_dir: base_dir

# <<<
#------------------------------------------------------------------------------

# Main target

all: $(OBJS) submakedirs Makefile
	@# Do nothing

submakedirs:  base_dir modules_dir

.PHONY: all clean cleanall depend msgheaders  base modules
base: base_dir
modules: modules_dir

base_dir:
	cd base && $(MAKE) all

modules_dir:
	cd modules && $(MAKE) all

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)
	cd base && $(MAKE) msgheaders
	cd modules && $(MAKE) msgheaders

clean:
	-rm -rf $O
	-rm -f PhaseOfArrivalProtocol PhaseOfArrivalProtocol.exe libPhaseOfArrivalProtocol.so libPhaseOfArrivalProtocol.a libPhaseOfArrivalProtocol.dll libPhaseOfArrivalProtocol.dylib
	-rm -f ./*_m.cc ./*_m.h

	-cd base && $(MAKE) clean
	-cd modules && $(MAKE) clean

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc
	-cd base && if [ -f Makefile ]; then $(MAKE) depend; fi
	-cd modules && if [ -f Makefile ]; then $(MAKE) depend; fi

# DO NOT DELETE THIS LINE -- make depend depends on it.

