#include <cstddef>
#include <iostream>
#include <unordered_map>

#include "antlr4-runtime/antlr4-runtime.h"
#include "hw4Lexer.h"
#include "hw4Parser.h"

std::unordered_map<size_t, std::string> to_string{
    {1, "PERIOD"},      {2, "COLON"},
    {3, "QMARK"},       {4, "EXMARK"},
    {5, "NEWLINE"},     {6, "WS"},
    {7, "AND"},         {8, "ARRAY"},
    {9, "ASM"},         {10, "BEGIN"},
    {11, "BREAK"},      {12, "CASE"},
    {13, "CONST"},      {14, "CONSTRUCTOR"},
    {15, "CONTINUE"},   {16, "DESTRUCTOR"},
    {17, "DIV"},        {18, "DO"},
    {19, "DOWNTO"},     {20, "ELSE"},
    {21, "END"},        {22, "FALSE"},
    {23, "FILE"},       {24, "FOR"},
    {25, "FUNCTION"},   {26, "GOTO"},
    {27, "IF"},         {28, "IMPLEMENTATION"},
    {29, "IN"},         {30, "INLINE"},
    {31, "INTERFACE"},  {32, "LABEL"},
    {33, "MOD"},        {34, "NIL"},
    {35, "NOT"},        {36, "OF"},
    {37, "OF"},         {38, "ON"},
    {39, "OPERATOR"},   {40, "OR"},
    {41, "PACKED"},     {42, "PROCEDURE"},
    {43, "PROGRAM"},    {44, "RECORD"},
    {45, "REPEAT"},     {46, "SET"},
    {47, "SHL"},        {48, "SHR"},
    {49, "QUOTE"},      {50, "CHARACTER"},
    {51, "STRING"},     {52, "THEN"},
    {53, "TO"},         {54, "TRUE"},
    {55, "TYPE"},       {56, "UNIT"},
    {57, "UNTIL"},      {58, "USES"},
    {59, "VAR"},        {60, "WHILE"},
    {61, "WITH"},       {62, "XOR"},
    {63, "INTEGER"},    {64, "REAL"},
    {65, "IDENTIFIER"}, {66, "PLUSOP"},
    {67, "MINUSOP"},    {68, "DIVOP"},
    {69, "MULTOP"},     {70, "ASSIGN"},
    {71, "EQUAL"},      {72, "NE"},
    {73, "LTEQ"},       {74, "GTEQ"},
    {75, "LT"},         {76, "GT"},
    {77, "PLUSEQUAL"},  {78, "MINUSEQUAL"},
    {79, "MULTEQUAL"},  {80, "DIVEQUAL"},
    {81, "CARAT"},      {82, "SEMICOLON"},
    {83, "COMMA"},      {84, "LPAREN"},
    {85, "RPAREN"},     {86, "LBRACKET"},
    {87, "RBRACKET"},   {88, "LBRACE"},
    {89, "RBRACE"},     {90, "LCOMMENT"},
    {91, "RCOMMENT"},   {92, ""},
};

int main(int argc, const char *argv[]) {
  std::ifstream stream{"test-in.txt"};
  antlr4::ANTLRInputStream input(stream);
  hw4Lexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();
  for (antlr4::Token *token : tokens.getTokens()) {
    if (auto search = to_string.find(token->getType());
        search != to_string.end())
      std::cout << search->second;
    else
      std::cout << "";
    std::cout << ": " << token->getText() << std::endl;
  }
}
