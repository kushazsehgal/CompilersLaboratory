#include<stdio.h>
#include "definitions.h"

extern char* yytext;
extern int yylex();

int main(){
    int token;
    while(token = yylex()){
        switch(token){
            case KEYWORD:
                printf("<KEYWORD, %d, %s>\n", token, yytext); 
            break;
            case IDENTIFIER: 
                printf("<IDENTIFIER, %d, %s>\n", token, yytext); 
                break;
            case INTEGER_CONST: 
                printf("<INTEGER_CONSTANT, %d, %s>\n", token, yytext); 
                break;
            case FLOAT_CONST: 
                printf("<FLOAT_CONSTANT, %d, %s>\n", token, yytext); 
                break;
            case CHAR_CONST: 
                printf("<CHARACTER_CONSTANT, %d, %s>\n", token, yytext); 
                break;
            case STRING_LITERAL: 
                printf("<STRING_LITERAL, %d, %s>\n", token, yytext); 
                break;
            case PUNCTUATOR: 
                printf("<PUNCTUATOR, %d, %s>\n", token, yytext); 
                break;
            case MULTI_LINE_COMMENT: 
                printf("<MULTI_LINE_COMMENT, %d>\n", token);  
                break;
            case SINGLE_LINE_COMMENT: 
                printf("<SINGLE_LINE_COMMENT, %d>\n", token); 
                break;
            default:
                printf("<INVALID_TOKEN, %d, %s>\n", token, yytext);
                break;
        }
    }
}
