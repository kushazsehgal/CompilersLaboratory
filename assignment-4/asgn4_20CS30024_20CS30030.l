/* C Declarations and Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    int line_count = 1;
%}

%option yylineno

%x  SINGLE_LINE_COMMENT_CONTENT
%x  MULTI_LINE_COMMENT_CONTENT
/* Regular Expression Definitions */

ESCAPE_SEQUENCE                 "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"

DIGIT                           [0-9]
NON_ZERO_DIGIT                  [1-9]
IDENTIFIER_NON_DIGIT            [a-z]|[A-Z]|"_"
DIGIT_SEQUENCE                  {DIGIT}+
IDENTIFIER                      {IDENTIFIER_NON_DIGIT}({IDENTIFIER_NON_DIGIT}|{DIGIT})*

INTEGER_CONST                   "0"|({NON_ZERO_DIGIT}{DIGIT}*)
SIGN                            "+"|"-"
EXP_PART                        [eE]({SIGN})?({DIGIT_SEQUENCE})
FRACTIONAL_CONSTANT             ({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
FLOAT_CONST                     ({FRACTIONAL_CONSTANT}{EXP_PART}?)|({DIGIT_SEQUENCE}{EXP_PART})
ENUM_CONST                      {IDENTIFIER}

C_CHAR                          [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHAR_CONST                      \'({C_CHAR_SEQUENCE}*)\'

S_CHAR                          [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+
STRING_LITERAL                  \"({S_CHAR_SEQUENCE}?)\"

WHITESPACE                      [ \t]
NEWLINE							\n

%%

"auto"                          { return AUTO; }
"break"                         { return BREAK; }
"case"                          { return CASE; }
"char"                          { return CHAR; }
"const"                         { return CONST; }
"continue"                      { return CONTINUE; }
"default"                       { return DEFAULT; }
"do"                            { return DO; }
"double"                        { return DOUBLE; }
"else"                          { return ELSE; }
"enum"                          { return ENUM; }
"extern"                        { return EXTERN; }
"float"                         { return FLOAT; }
"for"                           { return FOR; }
"goto"                          { return GOTO; }
"if"                            { return IF; }
"inline"                        { return INLINE; }
"int"                           { return INT; }
"long"                          { return LONG; }
"register"                      { return REGISTER; }
"restrict"                      { return RESTRICT; }
"return"                        { return RETURN; }
"short"                         { return SHORT; }
"signed"                        { return SIGNED; }
"sizeof"                        { return SIZEOF; }
"static"                        { return STATIC; }
"struct"                        { return STRUCT; }
"switch"                        { return SWITCH; }
"typedef"                       { return TYPEDEF; }
"union"                         { return UNION; }
"unsigned"                      { return UNSIGNED; }
"void"                          { return VOID; }
"volatile"                      { return VOLATILE; }
"while"                         { return WHILE; }
"_Bool"                         { return _BOOL; }
"_Complex"                      { return _COMPLEX; }
"_Imaginary"                    { return _IMAGINARY; }

{IDENTIFIER}                    { return IDENTIFIER; }
{INTEGER_CONST}                 { return INTEGER_CONST; }
{FLOAT_CONST}                   { return FLOAT_CONST; }
{CHAR_CONST}                    { return CHAR_CONST; }
{STRING_LITERAL}                { return STRING_LITERAL; }

"["                             { return LEFT_SQUARE_BRACKET; }
"++"                            { return INCREMENT; }
"/"                             { return SLASH; }
"?"                             { return QUESTION_MARK; }
"="                             { return ASSIGNMENT; }
","                             { return COMMA; }
"]"                             { return RIGHT_SQUARE_BRACKET; }
"("                             { return LEFT_PARENTHESES; }
"{"                             { return LEFT_CURLY_BRACKET; }
"}"                             { return RIGHT_CURLY_BRACKET; }
"."                             { return DOT; }
"->"                            { return ARROW; }
"*"                             { return ASTERISK; }
"+"                             { return PLUS; }
"-"                             { return MINUS; }
"~"                             { return TILDE; }
"!"                             { return EXCLAMATION; }
"%"                             { return MODULO; }
"<<"                            { return LEFT_SHIFT; }
">>"                            { return RIGHT_SHIFT; }
"<"                             { return LESS_THAN; }
">"                             { return GREATER_THAN; }
"<="                            { return LESS_EQUAL_THAN; }
">="                            { return GREATER_EQUAL_THAN; }
":"                             { return COLON; }
";"                             { return SEMI_COLON; }
"..."                           { return ELLIPSIS; }
"*="                            { return ASTERISK_ASSIGNMENT; }
"/="                            { return SLASH_ASSIGNMENT; }
"%="                            { return MODULO_ASSIGNMENT; }
"+="                            { return PLUS_ASSIGNMENT; }
"-="                            { return MINUS_ASSIGNMENT; }
"<<="                           { return LEFT_SHIFT_ASSIGNMENT; }
"#"                             { return HASH; }
"--"                            { return DECREMENT; }
")"                             { return RIGHT_PARENTHESES; }
"&"                             { return BITWISE_AND; }
"=="                            { return EQUALS; }
"^"                             { return BITWISE_XOR; }
"|"                             { return BITWISE_OR; }
"&&"                            { return LOGICAL_AND; }
"||"                            { return LOGICAL_OR; }
">>="                           { return RIGHT_SHIFT_ASSIGNMENT; }
"!="                            { return NOT_EQUALS; }
"&="                            { return BITWISE_AND_ASSIGNMENT; }
"|="                            { return BITWISE_OR_ASSIGNMENT; }
"^="                            { return BITWISE_XOR_ASSIGNMENT; }

"/*"                               { BEGIN(MULTI_LINE_COMMENT_CONTENT); }
<MULTI_LINE_COMMENT_CONTENT>"*/"   { BEGIN(INITIAL); }
<MULTI_LINE_COMMENT_CONTENT>.      { } 
<MULTI_LINE_COMMENT_CONTENT>"\n"   { printf("\nParsing line #%d...\n\n", yylineno); }

"//"                               { BEGIN(SINGLE_LINE_COMMENT_CONTENT); }
<SINGLE_LINE_COMMENT_CONTENT>.     { }
<SINGLE_LINE_COMMENT_CONTENT>"\n"  { BEGIN(INITIAL); printf("\nParsing line #%d...\n\n", yylineno); }

{WHITESPACE}					{ }
{NEWLINE}						{ printf("\nParsing line #%d...\n\n", yylineno); }
.                       		{ printf("error occured at line #%d : Invalid token %s\n", yylineno, yytext); return INVALID_TOKEN; }

%%

int yywrap(void) {
    return 1;
}
