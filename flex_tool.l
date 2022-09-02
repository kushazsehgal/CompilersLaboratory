/* C Declarations and Definitions */
%{
    #include<stdio.h>
    #define KEYWORD 10
    #define IDENTIFIER 11
    #define INTEGER_CONST 12
    #define FLOATING_CONST 13
    #define ENUM_CONST 14
    #define CHAR_CONST 15
    #define STRING_LITERAL 16
    #define SINGLE_LINE_COMMENT_S 17
    #define SINGLE_LINE_COMMENT_E 18
    #define PUNCTUATOR 19
    #define INVALID_TOKEN 20
%}

%x  SINGLE_LINE_COMMENT
%x  MULTI_LINE_COMMENT
/* Regular Expression Definitions */
%%
KEYWORD                 "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
ESCAPE_SEQUENCE         "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
PUNCTUATOR              "["|"++"|"/"|"?"|"="|","|"]"|"("|"{"|"}"|"."|"->"|"*"|"+"|"-"|"~"|"!"|"%"|"<<"|">>"|"<"|">"|"<="|">="|":"|";"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|"#"|"--"|")"|"&"|"=="|"^"|"|"|"&&"|">>="|"!="|"&="|"^="|"||"|"|"

DIGIT                   [0-9]
NON_ZERO_DIGIT          [1-9]
IDENTIFIER_NON_DIGIT    [a-z]|[A-Z]|"_"
DIGIT_SEQUENCE          {DIGIT}+
IDENTIFIER              {IDENTIFIER_NON_DIGIT}({IDENTIFIER_NON_DIGIT}|{DIGIT})*

INTEGER_CONSTANT        "0"|({NON_ZERO_DIGIT}{DIGIT}*)
SIGN                     "+"|"-"
EXP_PART                [eE]{SIGN}?{DIGIT_SEQUENCE}
FRACTIONAL_CONSTANT     ({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|{DIGIT_SEQUENCE}"."
FLOATING_CONST          (FRACTIONAL_CONSTANT{EXP_PART}?)|({DIGIT_SEQUENCE}{EXP_PART})
ENUM_CONST              {IDENTIFIER}

C_CHAR                  [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE         {C_CHAR}+
CHAR_CONST              \'({C_CHAR_SEQUENCE}*)\'

S_CHAR                  [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE         {S_CHAR}+
STRING_LITERAL          \"({S_CHAR_SEQUENCE}?)\"

WHITESPACE              [ \n\t]

%%

