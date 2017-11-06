ifneq ($(MAKECMDGOALS),clean)
-include Makefile.options
endif

CXX ?= gcc
TARGET ?= ../build/hap-cpp
OBJ_DIR ?= ../build
DOC_DIR ?= ../docs

ifndef _ARCH
  ifeq ($(shell uname), Darwin)
  	_ARCH := $(shell uname -m)
  else
    _ARCH := $(shell uname -i)
  endif
  export _ARCH
endif

INCLUDES = -I. -Iobjects/accessories -Iobjects/services -Iobjects/characteristics -Iconstants -Ipairing -Ible-transport -Iip-transport -Iip-transport/mDNS
SOURCES = $(wildcard *.cpp) $(wildcard objects/accessories/*.cpp) $(wildcard objects/services/*.cpp) $(wildcard objects/characteristics/*.cpp) $(wildcard constants/*.cpp) $(wildcard pairing/*.cpp) $(wildcard ble-transport/*.cpp) $(wildcard ip-transport/*.cpp) $(wildcard ip-transport/mDNS/*.cpp)

LDFLAGS += -lstdc++
# -lwolfCrypt

CXXFLAGS += $(CPPFLAGS) $(INCLUDES) -ansi -Wall -fPIC

ifeq ($(OPTIMIZE), yes)
	ifeq ($(SPACE_OPTIMIZE), yes)
		CXXFLAGS += -O3 -Os
	else
		CXXFLAGS += -O3
	endif
else
	ifeq ($(DEBUG), yes)
	    CXXFLAGS += -g
	endif

	ifeq ($(NO_INLINE), yes)
		CXXFLAGS += -O0 -fno-inline
	else
		CXXFLAGS += -O2
	endif
endif

ifeq ($(GPROF), yes)
	CXXFLAGS += -pg
endif

OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))
$(TARGET): $(OBJECTS)
	@echo "Linking $(TARGET)"
	$(CXX) $(LDCMD) $(CXXFLAGS) -o $@ $(OBJECTS) $(LDFLAGS)

OPTIONS = Makefile.options

$(OPTIONS):
	@touch $@

$(DEPS_DIR)/%.d: %.cpp $(OPTIONS)
	@echo "Deps $<"

$(OBJ_DIR)/%.o: %.cpp $(OPTIONS)
	@echo "C++ $<"
	set -e; mkdir -p $(dir $@); \
	$(CXX) -c $(CXXFLAGS) $< -o $@

EXTERNAL_MODULES = $(foreach module,$(MODULES),$($(module)_TARGET))

all: $(TARGET) $(EXTERNAL_MODULES)

debug: $(TARGET) $(EXTERNAL_MODULES)

docs:
	doxygen

clean:
	rm -rf $(TARGET) $(TESTS) $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o)) $(OBJ_DIR) $(DOC_DIR) *~

.PHONY: install thirdparty docs clean
