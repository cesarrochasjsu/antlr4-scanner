
// Generated from hw4.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "hw4Listener.h"


namespace parser {

/**
 * This class provides an empty implementation of hw4Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  hw4BaseListener : public hw4Listener {
public:

  virtual void enterProg(hw4Parser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(hw4Parser::ProgContext * /*ctx*/) override { }

  virtual void enterProgram(hw4Parser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(hw4Parser::ProgramContext * /*ctx*/) override { }

  virtual void enterFactor(hw4Parser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(hw4Parser::FactorContext * /*ctx*/) override { }

  virtual void enterVariable(hw4Parser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(hw4Parser::VariableContext * /*ctx*/) override { }

  virtual void enterNumber(hw4Parser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(hw4Parser::NumberContext * /*ctx*/) override { }

  virtual void enterUnsignedNumber(hw4Parser::UnsignedNumberContext * /*ctx*/) override { }
  virtual void exitUnsignedNumber(hw4Parser::UnsignedNumberContext * /*ctx*/) override { }

  virtual void enterIntegerConstant(hw4Parser::IntegerConstantContext * /*ctx*/) override { }
  virtual void exitIntegerConstant(hw4Parser::IntegerConstantContext * /*ctx*/) override { }

  virtual void enterRealConstant(hw4Parser::RealConstantContext * /*ctx*/) override { }
  virtual void exitRealConstant(hw4Parser::RealConstantContext * /*ctx*/) override { }

  virtual void enterCharacterConstant(hw4Parser::CharacterConstantContext * /*ctx*/) override { }
  virtual void exitCharacterConstant(hw4Parser::CharacterConstantContext * /*ctx*/) override { }

  virtual void enterStringConstant(hw4Parser::StringConstantContext * /*ctx*/) override { }
  virtual void exitStringConstant(hw4Parser::StringConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace parser
