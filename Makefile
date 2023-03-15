ANTLR4_CPP_RUNTIME_DIR=/usr/local/include/antlr4-runtime
ANTLR4_CPP_LIB_DIR=/usr/local/lib
ANTLR4_CPP_LIB=-lantlr4-runtime
GRAMMAR=hw4.g4
CPP=clang++
CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix ,$(notdir $(CPP_FILES:.cpp=.o)))
CPPFLAGS=-std=c++17

all: scanner

scanner: $(OBJ_FILES)
	$(CPP) $(CPPFLAGS) -o $@ $^  -L$(ANTLR4_CPP_LIB_DIR) -I$(ANTLR4_CPP_RUNTIME_DIR) $(ANTLR4_CPP_LIB)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $<  -I$(ANTLR4_CPP_RUNTIME_DIR)

clean:
	rm -f *.o scanner *~
