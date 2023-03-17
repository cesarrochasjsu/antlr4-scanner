
// Generated from hw4.g4 by ANTLR 4.11.1

#include "hw4Listener.h"

#include "hw4Parser.h"

using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Hw4ParserStaticData final {
  Hw4ParserStaticData(std::vector<std::string> ruleNames,
                      std::vector<std::string> literalNames,
                      std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Hw4ParserStaticData(const Hw4ParserStaticData &) = delete;
  Hw4ParserStaticData(Hw4ParserStaticData &&) = delete;
  Hw4ParserStaticData &operator=(const Hw4ParserStaticData &) = delete;
  Hw4ParserStaticData &operator=(Hw4ParserStaticData &&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hw4ParserOnceFlag;
Hw4ParserStaticData *hw4ParserStaticData = nullptr;

void hw4ParserInitialize() {
  assert(hw4ParserStaticData == nullptr);
  auto staticData = std::make_unique<Hw4ParserStaticData>(
      std::vector<std::string>{"prog", "program", "factor", "variable",
                               "number", "unsignedNumber", "integerConstant",
                               "realConstant", "characterConstant",
                               "stringConstant"},
      std::vector<std::string>{
          "",     "'.'",  "':'",  "'\\u003F'", "'!'", "",     "",     "",
          "",     "",     "",     "",          "",    "",     "",     "",
          "",     "",     "",     "",          "",    "",     "",     "",
          "",     "",     "",     "",          "",    "",     "",     "",
          "",     "",     "",     "",          "",    "",     "",     "",
          "",     "",     "",     "",          "",    "",     "",     "",
          "",     "'''",  "",     "",          "",    "",     "",     "",
          "",     "",     "",     "",          "",    "",     "",     "",
          "",     "",     "'+'",  "'-'",       "'/'", "'*'",  "':='", "'='",
          "'<>'", "'<='", "'>='", "'<'",       "'>'", "'+='", "'-='", "'*='",
          "'/='", "'^'",  "';'",  "','",       "'('", "')'",  "'['",  "']'",
          "'{'",  "'}'",  "'(*'", "'*)'"},
      std::vector<std::string>{"",
                               "",
                               "QUOTEMARK",
                               "QMARK",
                               "EXMARK",
                               "NEWLINE",
                               "WS",
                               "AND",
                               "ARRAY",
                               "ASM",
                               "BEGIN",
                               "BREAK",
                               "CASE",
                               "CONST",
                               "CONSTRUCTOR",
                               "CONTINUE",
                               "DESTRUCTOR",
                               "DIV",
                               "DO",
                               "DOWNTO",
                               "ELSE",
                               "END",
                               "FALSE",
                               "FILE",
                               "FOR",
                               "FUNCTION",
                               "GOTO",
                               "IF",
                               "IMPLEMENTATION",
                               "IN",
                               "INLINE",
                               "INTERFACE",
                               "LABEL",
                               "MOD",
                               "NIL",
                               "NOT",
                               "OBJECT",
                               "OF",
                               "ON",
                               "OPERATOR",
                               "OR",
                               "PACKED",
                               "PROCEDURE",
                               "PROGRAM",
                               "RECORD",
                               "REPEAT",
                               "SET",
                               "SHL",
                               "SHR",
                               "QUOTE",
                               "CHARACTER",
                               "STRING",
                               "THEN",
                               "TO",
                               "TRUE",
                               "TYPE",
                               "UNIT",
                               "UNTIL",
                               "USES",
                               "VAR",
                               "WHILE",
                               "WITH",
                               "XOR",
                               "INTEGER",
                               "REAL",
                               "IDENTIFIER",
                               "PLUSOP",
                               "MINUSOP",
                               "DIVOP",
                               "MULTOP",
                               "ASSIGN",
                               "EQUAL",
                               "NE",
                               "LTEQ",
                               "GTEQ",
                               "LT",
                               "GT",
                               "PLUSEQUAL",
                               "MINUSEQUAL",
                               "MULTEQUAL",
                               "DIVEQUAL",
                               "CARAT",
                               "SEMICOLOR",
                               "COMMA",
                               "LPAREN",
                               "RPAREN",
                               "LBRACKET",
                               "RBRACKET",
                               "LBRACE",
                               "RBRACE",
                               "LCOMMENT",
                               "RCOMMENT"});
  static const int32_t serializedATNSegment[] = {
      4,  1,  91, 55, 2,  0,  7, 0,  2,  1,  7, 1,  2,  2, 7,  2,  2,  3,
      7,  3,  2,  4,  7,  4,  2, 5,  7,  5,  2, 6,  7,  6, 2,  7,  7,  7,
      2,  8,  7,  8,  2,  9,  7, 9,  1,  0,  1, 0,  1,  0, 5,  0,  24, 8,
      0,  10, 0,  12, 0,  27, 9, 0,  1,  1,  1, 1,  1,  2, 1,  2,  1,  2,
      1,  2,  1,  2,  1,  2,  3, 2,  37, 8,  2, 1,  3,  1, 3,  1,  4,  1,
      4,  1,  5,  1,  5,  3,  5, 45, 8,  5,  1, 6,  1,  6, 1,  7,  1,  7,
      1,  8,  1,  8,  1,  9,  1, 9,  1,  9,  0, 0,  10, 0, 2,  4,  6,  8,
      10, 12, 14, 16, 18, 0,  0, 50, 0,  25, 1, 0,  0,  0, 2,  28, 1,  0,
      0,  0,  4,  36, 1,  0,  0, 0,  6,  38, 1, 0,  0,  0, 8,  40, 1,  0,
      0,  0,  10, 44, 1,  0,  0, 0,  12, 46, 1, 0,  0,  0, 14, 48, 1,  0,
      0,  0,  16, 50, 1,  0,  0, 0,  18, 52, 1, 0,  0,  0, 20, 21, 3,  4,
      2,  0,  21, 22, 5,  5,  0, 0,  22, 24, 1, 0,  0,  0, 23, 20, 1,  0,
      0,  0,  24, 27, 1,  0,  0, 0,  25, 23, 1, 0,  0,  0, 25, 26, 1,  0,
      0,  0,  26, 1,  1,  0,  0, 0,  27, 25, 1, 0,  0,  0, 28, 29, 5,  1,
      0,  0,  29, 3,  1,  0,  0, 0,  30, 37, 3, 6,  3,  0, 31, 37, 3,  8,
      4,  0,  32, 37, 3,  16, 8, 0,  33, 37, 3, 18, 9,  0, 34, 35, 5,  35,
      0,  0,  35, 37, 3,  4,  2, 0,  36, 30, 1, 0,  0,  0, 36, 31, 1,  0,
      0,  0,  36, 32, 1,  0,  0, 0,  36, 33, 1, 0,  0,  0, 36, 34, 1,  0,
      0,  0,  37, 5,  1,  0,  0, 0,  38, 39, 5, 65, 0,  0, 39, 7,  1,  0,
      0,  0,  40, 41, 3,  10, 5, 0,  41, 9,  1, 0,  0,  0, 42, 45, 3,  12,
      6,  0,  43, 45, 3,  14, 7, 0,  44, 42, 1, 0,  0,  0, 44, 43, 1,  0,
      0,  0,  45, 11, 1,  0,  0, 0,  46, 47, 5, 63, 0,  0, 47, 13, 1,  0,
      0,  0,  48, 49, 5,  64, 0, 0,  49, 15, 1, 0,  0,  0, 50, 51, 5,  50,
      0,  0,  51, 17, 1,  0,  0, 0,  52, 53, 5, 51, 0,  0, 53, 19, 1,  0,
      0,  0,  3,  25, 36, 44};
  staticData->serializedATN = antlr4::atn::SerializedATNView(
      serializedATNSegment,
      sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) {
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i),
                                           i);
  }
  hw4ParserStaticData = staticData.release();
}

} // namespace

hw4Parser::hw4Parser(TokenStream *input)
    : hw4Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

hw4Parser::hw4Parser(TokenStream *input,
                     const antlr4::atn::ParserATNSimulatorOptions &options)
    : Parser(input) {
  hw4Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(
      this, *hw4ParserStaticData->atn, hw4ParserStaticData->decisionToDFA,
      hw4ParserStaticData->sharedContextCache, options);
}

hw4Parser::~hw4Parser() { delete _interpreter; }

const atn::ATN &hw4Parser::getATN() const { return *hw4ParserStaticData->atn; }

std::string hw4Parser::getGrammarFileName() const { return "hw4.g4"; }

const std::vector<std::string> &hw4Parser::getRuleNames() const {
  return hw4ParserStaticData->ruleNames;
}

const dfa::Vocabulary &hw4Parser::getVocabulary() const {
  return hw4ParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView hw4Parser::getSerializedATN() const {
  return hw4ParserStaticData->serializedATN;
}

//----------------- ProgContext
//------------------------------------------------------------------

hw4Parser::ProgContext::ProgContext(ParserRuleContext *parent,
                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

std::vector<hw4Parser::FactorContext *> hw4Parser::ProgContext::factor() {
  return getRuleContexts<hw4Parser::FactorContext>();
}

hw4Parser::FactorContext *hw4Parser::ProgContext::factor(size_t i) {
  return getRuleContext<hw4Parser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> hw4Parser::ProgContext::NEWLINE() {
  return getTokens(hw4Parser::NEWLINE);
}

tree::TerminalNode *hw4Parser::ProgContext::NEWLINE(size_t i) {
  return getToken(hw4Parser::NEWLINE, i);
}

size_t hw4Parser::ProgContext::getRuleIndex() const {
  return hw4Parser::RuleProg;
}

void hw4Parser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void hw4Parser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

hw4Parser::ProgContext *hw4Parser::prog() {
  ProgContext *_localctx =
      _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, hw4Parser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la - 35) & ~0x3fULL) == 0) &&
           ((1ULL << (_la - 35)) & 1879146497) != 0) {
      setState(20);
      factor();
      setState(21);
      match(hw4Parser::NEWLINE);
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext
//------------------------------------------------------------------

hw4Parser::ProgramContext::ProgramContext(ParserRuleContext *parent,
                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

size_t hw4Parser::ProgramContext::getRuleIndex() const {
  return hw4Parser::RuleProgram;
}

void hw4Parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void hw4Parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

hw4Parser::ProgramContext *hw4Parser::program() {
  ProgramContext *_localctx =
      _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, hw4Parser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(hw4Parser::T__0);

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext
//------------------------------------------------------------------

hw4Parser::FactorContext::FactorContext(ParserRuleContext *parent,
                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

hw4Parser::VariableContext *hw4Parser::FactorContext::variable() {
  return getRuleContext<hw4Parser::VariableContext>(0);
}

hw4Parser::NumberContext *hw4Parser::FactorContext::number() {
  return getRuleContext<hw4Parser::NumberContext>(0);
}

hw4Parser::CharacterConstantContext *
hw4Parser::FactorContext::characterConstant() {
  return getRuleContext<hw4Parser::CharacterConstantContext>(0);
}

hw4Parser::StringConstantContext *hw4Parser::FactorContext::stringConstant() {
  return getRuleContext<hw4Parser::StringConstantContext>(0);
}

tree::TerminalNode *hw4Parser::FactorContext::NOT() {
  return getToken(hw4Parser::NOT, 0);
}

hw4Parser::FactorContext *hw4Parser::FactorContext::factor() {
  return getRuleContext<hw4Parser::FactorContext>(0);
}

size_t hw4Parser::FactorContext::getRuleIndex() const {
  return hw4Parser::RuleFactor;
}

void hw4Parser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void hw4Parser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

hw4Parser::FactorContext *hw4Parser::factor() {
  FactorContext *_localctx =
      _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 4, hw4Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
    case hw4Parser::IDENTIFIER: {
      enterOuterAlt(_localctx, 1);
      setState(30);
      variable();
      break;
    }

    case hw4Parser::INTEGER:
    case hw4Parser::REAL: {
      enterOuterAlt(_localctx, 2);
      setState(31);
      number();
      break;
    }

    case hw4Parser::CHARACTER: {
      enterOuterAlt(_localctx, 3);
      setState(32);
      characterConstant();
      break;
    }

    case hw4Parser::STRING: {
      enterOuterAlt(_localctx, 4);
      setState(33);
      stringConstant();
      break;
    }

    case hw4Parser::NOT: {
      enterOuterAlt(_localctx, 5);
      setState(34);
      match(hw4Parser::NOT);
      setState(35);
      factor();
      break;
    }

    default:
      throw NoViableAltException(this);
    }

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext
//------------------------------------------------------------------

hw4Parser::VariableContext::VariableContext(ParserRuleContext *parent,
                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *hw4Parser::VariableContext::IDENTIFIER() {
  return getToken(hw4Parser::IDENTIFIER, 0);
}

size_t hw4Parser::VariableContext::getRuleIndex() const {
  return hw4Parser::RuleVariable;
}

void hw4Parser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void hw4Parser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

hw4Parser::VariableContext *hw4Parser::variable() {
  VariableContext *_localctx =
      _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 6, hw4Parser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(hw4Parser::IDENTIFIER);

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext
//------------------------------------------------------------------

hw4Parser::NumberContext::NumberContext(ParserRuleContext *parent,
                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

hw4Parser::UnsignedNumberContext *hw4Parser::NumberContext::unsignedNumber() {
  return getRuleContext<hw4Parser::UnsignedNumberContext>(0);
}

size_t hw4Parser::NumberContext::getRuleIndex() const {
  return hw4Parser::RuleNumber;
}

void hw4Parser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void hw4Parser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

hw4Parser::NumberContext *hw4Parser::number() {
  NumberContext *_localctx =
      _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 8, hw4Parser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    unsignedNumber();

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext
//------------------------------------------------------------------

hw4Parser::UnsignedNumberContext::UnsignedNumberContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

hw4Parser::IntegerConstantContext *
hw4Parser::UnsignedNumberContext::integerConstant() {
  return getRuleContext<hw4Parser::IntegerConstantContext>(0);
}

hw4Parser::RealConstantContext *
hw4Parser::UnsignedNumberContext::realConstant() {
  return getRuleContext<hw4Parser::RealConstantContext>(0);
}

size_t hw4Parser::UnsignedNumberContext::getRuleIndex() const {
  return hw4Parser::RuleUnsignedNumber;
}

void hw4Parser::UnsignedNumberContext::enterRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsignedNumber(this);
}

void hw4Parser::UnsignedNumberContext::exitRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsignedNumber(this);
}

hw4Parser::UnsignedNumberContext *hw4Parser::unsignedNumber() {
  UnsignedNumberContext *_localctx =
      _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 10, hw4Parser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
    case hw4Parser::INTEGER: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      integerConstant();
      break;
    }

    case hw4Parser::REAL: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      realConstant();
      break;
    }

    default:
      throw NoViableAltException(this);
    }

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerConstantContext
//------------------------------------------------------------------

hw4Parser::IntegerConstantContext::IntegerConstantContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *hw4Parser::IntegerConstantContext::INTEGER() {
  return getToken(hw4Parser::INTEGER, 0);
}

size_t hw4Parser::IntegerConstantContext::getRuleIndex() const {
  return hw4Parser::RuleIntegerConstant;
}

void hw4Parser::IntegerConstantContext::enterRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerConstant(this);
}

void hw4Parser::IntegerConstantContext::exitRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerConstant(this);
}

hw4Parser::IntegerConstantContext *hw4Parser::integerConstant() {
  IntegerConstantContext *_localctx =
      _tracker.createInstance<IntegerConstantContext>(_ctx, getState());
  enterRule(_localctx, 12, hw4Parser::RuleIntegerConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(hw4Parser::INTEGER);

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealConstantContext
//------------------------------------------------------------------

hw4Parser::RealConstantContext::RealConstantContext(ParserRuleContext *parent,
                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *hw4Parser::RealConstantContext::REAL() {
  return getToken(hw4Parser::REAL, 0);
}

size_t hw4Parser::RealConstantContext::getRuleIndex() const {
  return hw4Parser::RuleRealConstant;
}

void hw4Parser::RealConstantContext::enterRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRealConstant(this);
}

void hw4Parser::RealConstantContext::exitRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRealConstant(this);
}

hw4Parser::RealConstantContext *hw4Parser::realConstant() {
  RealConstantContext *_localctx =
      _tracker.createInstance<RealConstantContext>(_ctx, getState());
  enterRule(_localctx, 14, hw4Parser::RuleRealConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(hw4Parser::REAL);

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterConstantContext
//------------------------------------------------------------------

hw4Parser::CharacterConstantContext::CharacterConstantContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *hw4Parser::CharacterConstantContext::CHARACTER() {
  return getToken(hw4Parser::CHARACTER, 0);
}

size_t hw4Parser::CharacterConstantContext::getRuleIndex() const {
  return hw4Parser::RuleCharacterConstant;
}

void hw4Parser::CharacterConstantContext::enterRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterConstant(this);
}

void hw4Parser::CharacterConstantContext::exitRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterConstant(this);
}

hw4Parser::CharacterConstantContext *hw4Parser::characterConstant() {
  CharacterConstantContext *_localctx =
      _tracker.createInstance<CharacterConstantContext>(_ctx, getState());
  enterRule(_localctx, 16, hw4Parser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(hw4Parser::CHARACTER);

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstantContext
//------------------------------------------------------------------

hw4Parser::StringConstantContext::StringConstantContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode *hw4Parser::StringConstantContext::STRING() {
  return getToken(hw4Parser::STRING, 0);
}

size_t hw4Parser::StringConstantContext::getRuleIndex() const {
  return hw4Parser::RuleStringConstant;
}

void hw4Parser::StringConstantContext::enterRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConstant(this);
}

void hw4Parser::StringConstantContext::exitRule(
    tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hw4Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConstant(this);
}

hw4Parser::StringConstantContext *hw4Parser::stringConstant() {
  StringConstantContext *_localctx =
      _tracker.createInstance<StringConstantContext>(_ctx, getState());
  enterRule(_localctx, 18, hw4Parser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(hw4Parser::STRING);

  } catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void hw4Parser::initialize() {
  ::antlr4::internal::call_once(hw4ParserOnceFlag, hw4ParserInitialize);
}
