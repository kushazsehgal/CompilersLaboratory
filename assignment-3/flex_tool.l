/* C Declarations and Definitions */
%{
    #include "definitions.h"
%}

%x  SINGLE_LINE_COMMENT_CONTENT
%x  MULTI_LINE_COMMENT_CONTENT
/* Regular Expression Definitions */

KEYWORD                         "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
ESCAPE_SEQUENCE                 "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
PUNCTUATOR                      "["|"++"|"/"|"?"|"="|","|"]"|"("|"{"|"}"|"."|"->"|"*"|"+"|"-"|"~"|"!"|"%"|"<<"|">>"|"<"|">"|"<="|">="|":"|";"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|"#"|"--"|")"|"&"|"=="|"^"|"|"|"&&"|">>="|"!="|"&="|"^="|"||"|"|"

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

WHITESPACE                      [ \n\t]

%%

{KEYWORD}                       {return KEYWORD;}
{IDENTIFIER}                    {return IDENTIFIER;}
{INTEGER_CONST}                 {return INTEGER_CONST;}
{FLOAT_CONST}                   {return FLOAT_CONST;}
{CHAR_CONST}                    {return CHAR_CONST;}
{STRING_LITERAL}                {return STRING_LITERAL;}

"/*"                               { BEGIN(MULTI_LINE_COMMENT_CONTENT); }
<MULTI_LINE_COMMENT_CONTENT>"*/"   { BEGIN(INITIAL); return MULTI_LINE_COMMENT; }
<MULTI_LINE_COMMENT_CONTENT>.      {/* getting comment content*/} 
<MULTI_LINE_COMMENT_CONTENT>"\n"   {/* getting comment content */}

"//"                               { BEGIN(SINGLE_LINE_COMMENT_CONTENT); }
<SINGLE_LINE_COMMENT_CONTENT>"\n"  { BEGIN(INITIAL); return SINGLE_LINE_COMMENT; }
<SINGLE_LINE_COMMENT_CONTENT>.     { /* getting comment content */ }

{WHITESPACE}
.                       {return INVALID_TOKEN;}

%%

int yywrap(void){
    return 1;
}