ANTLR4_CPP_RUNTIME_DIR=/usr/local/include/antlr4-runtime
ANTLR4_CPP_LIB_DIR=/usr/local/lib
ANTLR4_CPP_LIB=-lantlr4-runtime
GRAMMAR=hw4.g4
CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix ,$(notdir $(CPP_FILES:.cpp=.o)))

all: scanner

scanner: $(OBJ_FILES)
	g++ -o $@ $^ -L$(ANTLR4_CPP_LIB_DIR) -I$(ANTLR4_CPP_RUNTIME_DIR) $(ANTLR4_CPP_LIB)

%.o: %.cpp
	g++ -c -o $@ $< -L$(ANTLR4_CPP_LIB_DIR) -I$(ANTLR4_CPP_RUNTIME_DIR) $(ANTLR4_CPP_LIB)

generate:
	antlr4 -Dlanguage=Cpp  $(GRAMMAR)

clean:
	rm -f *.o scanner *~
