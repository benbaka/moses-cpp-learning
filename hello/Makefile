DEPS := $(wildcard *.h)
SRC  := $(wildcard *.cc)
OBJ  := $(wildcard *.o)
APP  := $(notdir $(CURDIR))




all: $(DEPS) $(SRC)
	$(CXX) $(CXXFLAGS) -o $(APP)  $(SRC)
