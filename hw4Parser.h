
// Generated from hw4.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  hw4Parser : public antlr4::Parser {
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

  enum {
    RuleProg = 0, RuleProgram = 1, RuleFactor = 2, RuleVariable = 3, RuleNumber = 4, 
    RuleUnsignedNumber = 5, RuleIntegerConstant = 6, RuleRealConstant = 7, 
    RuleCharacterConstant = 8, RuleStringConstant = 9
  };

  explicit hw4Parser(antlr4::TokenStream *input);

  hw4Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~hw4Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class ProgramContext;
  class FactorContext;
  class VariableContext;
  class NumberContext;
  class UnsignedNumberContext;
  class IntegerConstantContext;
  class RealConstantContext;
  class CharacterConstantContext;
  class StringConstantContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    NumberContext *number();
    CharacterConstantContext *characterConstant();
    StringConstantContext *stringConstant();
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FactorContext* factor();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnsignedNumberContext *unsignedNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  UnsignedNumberContext : public antlr4::ParserRuleContext {
  public:
    UnsignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    RealConstantContext *realConstant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnsignedNumberContext* unsignedNumber();

  class  IntegerConstantContext : public antlr4::ParserRuleContext {
  public:
    IntegerConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerConstantContext* integerConstant();

  class  RealConstantContext : public antlr4::ParserRuleContext {
  public:
    RealConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RealConstantContext* realConstant();

  class  CharacterConstantContext : public antlr4::ParserRuleContext {
  public:
    CharacterConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharacterConstantContext* characterConstant();

  class  StringConstantContext : public antlr4::ParserRuleContext {
  public:
    StringConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringConstantContext* stringConstant();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

