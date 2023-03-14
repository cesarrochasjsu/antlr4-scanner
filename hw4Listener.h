
// Generated from hw4.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "hw4Parser.h"


namespace parser {

/**
 * This interface defines an abstract listener for a parse tree produced by hw4Parser.
 */
class  hw4Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(hw4Parser::ProgContext *ctx) = 0;
  virtual void exitProg(hw4Parser::ProgContext *ctx) = 0;

  virtual void enterProgram(hw4Parser::ProgramContext *ctx) = 0;
  virtual void exitProgram(hw4Parser::ProgramContext *ctx) = 0;

  virtual void enterFactor(hw4Parser::FactorContext *ctx) = 0;
  virtual void exitFactor(hw4Parser::FactorContext *ctx) = 0;

  virtual void enterVariable(hw4Parser::VariableContext *ctx) = 0;
  virtual void exitVariable(hw4Parser::VariableContext *ctx) = 0;

  virtual void enterNumber(hw4Parser::NumberContext *ctx) = 0;
  virtual void exitNumber(hw4Parser::NumberContext *ctx) = 0;

  virtual void enterUnsignedNumber(hw4Parser::UnsignedNumberContext *ctx) = 0;
  virtual void exitUnsignedNumber(hw4Parser::UnsignedNumberContext *ctx) = 0;

  virtual void enterIntegerConstant(hw4Parser::IntegerConstantContext *ctx) = 0;
  virtual void exitIntegerConstant(hw4Parser::IntegerConstantContext *ctx) = 0;

  virtual void enterRealConstant(hw4Parser::RealConstantContext *ctx) = 0;
  virtual void exitRealConstant(hw4Parser::RealConstantContext *ctx) = 0;

  virtual void enterCharacterConstant(hw4Parser::CharacterConstantContext *ctx) = 0;
  virtual void exitCharacterConstant(hw4Parser::CharacterConstantContext *ctx) = 0;

  virtual void enterStringConstant(hw4Parser::StringConstantContext *ctx) = 0;
  virtual void exitStringConstant(hw4Parser::StringConstantContext *ctx) = 0;


};

}  // namespace parser
