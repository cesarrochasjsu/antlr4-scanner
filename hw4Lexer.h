
// Generated from hw4.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  hw4Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, QUOTEMARK = 2, QMARK = 3, EXMARK = 4, NEWLINE = 5, WS = 6, 
    AND = 7, ARRAY = 8, ASM = 9, BEGIN = 10, BREAK = 11, CASE = 12, CONST = 13, 
    CONSTRUCTOR = 14, CONTINUE = 15, DESTRUCTOR = 16, DIV = 17, DO = 18, 
    DOWNTO = 19, ELSE = 20, END = 21, FALSE = 22, FILE = 23, FOR = 24, FUNCTION = 25, 
    GOTO = 26, IF = 27, IMPLEMENTATION = 28, IN = 29, INLINE = 30, INTERFACE = 31, 
    LABEL = 32, MOD = 33, NIL = 34, NOT = 35, OBJECT = 36, OF = 37, ON = 38, 
    OPERATOR = 39, OR = 40, PACKED = 41, PROCEDURE = 42, PROGRAM = 43, RECORD = 44, 
    REPEAT = 45, SET = 46, SHL = 47, SHR = 48, QUOTE = 49, CHARACTER = 50, 
    STRING = 51, THEN = 52, TO = 53, TRUE = 54, TYPE = 55, UNIT = 56, UNTIL = 57, 
    USES = 58, VAR = 59, WHILE = 60, WITH = 61, XOR = 62, INTEGER = 63, 
    REAL = 64, IDENTIFIER = 65, PLUSOP = 66, MINUSOP = 67, DIVOP = 68, MULTOP = 69, 
    ASSIGN = 70, EQUAL = 71, NE = 72, LTEQ = 73, GTEQ = 74, LT = 75, GT = 76, 
    PLUSEQUAL = 77, MINUSEQUAL = 78, MULTEQUAL = 79, DIVEQUAL = 80, CARAT = 81, 
    SEMICOLOR = 82, COMMA = 83, LPAREN = 84, RPAREN = 85, LBRACKET = 86, 
    RBRACKET = 87, LBRACE = 88, RBRACE = 89, LCOMMENT = 90, RCOMMENT = 91
  };

  explicit hw4Lexer(antlr4::CharStream *input);

  ~hw4Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

