/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asgn6_20CS30030_20CS30024.y"

    #include "asgn6_20CS30030_20CS30024_translator.h"
	#include <stdio.h>
	extern int yylex();
	extern int yylineno;
	void yyerror(string);
	void yyinfo(string);

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR_TYPE = 261,               /* CHAR_TYPE  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    ENUM = 268,                    /* ENUM  */
    EXTERN = 269,                  /* EXTERN  */
    FLOAT_TYPE = 270,              /* FLOAT_TYPE  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    IF = 273,                      /* IF  */
    INLINE = 274,                  /* INLINE  */
    INT_TYPE = 275,                /* INT_TYPE  */
    LONG = 276,                    /* LONG  */
    REGISTER = 277,                /* REGISTER  */
    RESTRICT = 278,                /* RESTRICT  */
    RETURN = 279,                  /* RETURN  */
    SHORT = 280,                   /* SHORT  */
    SIGNED = 281,                  /* SIGNED  */
    SIZEOF = 282,                  /* SIZEOF  */
    STATIC = 283,                  /* STATIC  */
    STRUCT = 284,                  /* STRUCT  */
    SWITCH = 285,                  /* SWITCH  */
    TYPEDEF = 286,                 /* TYPEDEF  */
    UNION = 287,                   /* UNION  */
    UNSIGNED = 288,                /* UNSIGNED  */
    VOID_TYPE = 289,               /* VOID_TYPE  */
    VOLATILE = 290,                /* VOLATILE  */
    WHILE = 291,                   /* WHILE  */
    _BOOL = 292,                   /* _BOOL  */
    _COMPLEX = 293,                /* _COMPLEX  */
    _IMAGINARY = 294,              /* _IMAGINARY  */
    IDENTIFIER = 295,              /* IDENTIFIER  */
    INTEGER_CONST = 296,           /* INTEGER_CONST  */
    FLOAT_CONST = 297,             /* FLOAT_CONST  */
    CHAR_CONST = 298,              /* CHAR_CONST  */
    STRING_LITERAL = 299,          /* STRING_LITERAL  */
    LEFT_SQUARE_BRACKET = 300,     /* LEFT_SQUARE_BRACKET  */
    INCREMENT = 301,               /* INCREMENT  */
    SLASH = 302,                   /* SLASH  */
    QUESTION_MARK = 303,           /* QUESTION_MARK  */
    ASSIGNMENT = 304,              /* ASSIGNMENT  */
    COMMA = 305,                   /* COMMA  */
    RIGHT_SQUARE_BRACKET = 306,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARENTHESES = 307,        /* LEFT_PARENTHESES  */
    LEFT_CURLY_BRACKET = 308,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 309,     /* RIGHT_CURLY_BRACKET  */
    DOT = 310,                     /* DOT  */
    ARROW = 311,                   /* ARROW  */
    ASTERISK = 312,                /* ASTERISK  */
    PLUS = 313,                    /* PLUS  */
    MINUS = 314,                   /* MINUS  */
    TILDE = 315,                   /* TILDE  */
    EXCLAMATION = 316,             /* EXCLAMATION  */
    MODULO = 317,                  /* MODULO  */
    LEFT_SHIFT = 318,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 319,             /* RIGHT_SHIFT  */
    LESS_THAN = 320,               /* LESS_THAN  */
    GREATER_THAN = 321,            /* GREATER_THAN  */
    LESS_EQUAL_THAN = 322,         /* LESS_EQUAL_THAN  */
    GREATER_EQUAL_THAN = 323,      /* GREATER_EQUAL_THAN  */
    COLON = 324,                   /* COLON  */
    SEMI_COLON = 325,              /* SEMI_COLON  */
    ELLIPSIS = 326,                /* ELLIPSIS  */
    ASTERISK_ASSIGNMENT = 327,     /* ASTERISK_ASSIGNMENT  */
    SLASH_ASSIGNMENT = 328,        /* SLASH_ASSIGNMENT  */
    MODULO_ASSIGNMENT = 329,       /* MODULO_ASSIGNMENT  */
    PLUS_ASSIGNMENT = 330,         /* PLUS_ASSIGNMENT  */
    MINUS_ASSIGNMENT = 331,        /* MINUS_ASSIGNMENT  */
    LEFT_SHIFT_ASSIGNMENT = 332,   /* LEFT_SHIFT_ASSIGNMENT  */
    HASH = 333,                    /* HASH  */
    DECREMENT = 334,               /* DECREMENT  */
    RIGHT_PARENTHESES = 335,       /* RIGHT_PARENTHESES  */
    BITWISE_AND = 336,             /* BITWISE_AND  */
    EQUALS = 337,                  /* EQUALS  */
    BITWISE_XOR = 338,             /* BITWISE_XOR  */
    BITWISE_OR = 339,              /* BITWISE_OR  */
    LOGICAL_AND = 340,             /* LOGICAL_AND  */
    LOGICAL_OR = 341,              /* LOGICAL_OR  */
    RIGHT_SHIFT_ASSIGNMENT = 342,  /* RIGHT_SHIFT_ASSIGNMENT  */
    NOT_EQUALS = 343,              /* NOT_EQUALS  */
    BITWISE_AND_ASSIGNMENT = 344,  /* BITWISE_AND_ASSIGNMENT  */
    BITWISE_OR_ASSIGNMENT = 345,   /* BITWISE_OR_ASSIGNMENT  */
    BITWISE_XOR_ASSIGNMENT = 346,  /* BITWISE_XOR_ASSIGNMENT  */
    INVALID_TOKEN = 347,           /* INVALID_TOKEN  */
    THEN = 348                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR_TYPE 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT_TYPE 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT_TYPE 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID_TYPE 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONST 296
#define FLOAT_CONST 297
#define CHAR_CONST 298
#define STRING_LITERAL 299
#define LEFT_SQUARE_BRACKET 300
#define INCREMENT 301
#define SLASH 302
#define QUESTION_MARK 303
#define ASSIGNMENT 304
#define COMMA 305
#define RIGHT_SQUARE_BRACKET 306
#define LEFT_PARENTHESES 307
#define LEFT_CURLY_BRACKET 308
#define RIGHT_CURLY_BRACKET 309
#define DOT 310
#define ARROW 311
#define ASTERISK 312
#define PLUS 313
#define MINUS 314
#define TILDE 315
#define EXCLAMATION 316
#define MODULO 317
#define LEFT_SHIFT 318
#define RIGHT_SHIFT 319
#define LESS_THAN 320
#define GREATER_THAN 321
#define LESS_EQUAL_THAN 322
#define GREATER_EQUAL_THAN 323
#define COLON 324
#define SEMI_COLON 325
#define ELLIPSIS 326
#define ASTERISK_ASSIGNMENT 327
#define SLASH_ASSIGNMENT 328
#define MODULO_ASSIGNMENT 329
#define PLUS_ASSIGNMENT 330
#define MINUS_ASSIGNMENT 331
#define LEFT_SHIFT_ASSIGNMENT 332
#define HASH 333
#define DECREMENT 334
#define RIGHT_PARENTHESES 335
#define BITWISE_AND 336
#define EQUALS 337
#define BITWISE_XOR 338
#define BITWISE_OR 339
#define LOGICAL_AND 340
#define LOGICAL_OR 341
#define RIGHT_SHIFT_ASSIGNMENT 342
#define NOT_EQUALS 343
#define BITWISE_AND_ASSIGNMENT 344
#define BITWISE_OR_ASSIGNMENT 345
#define BITWISE_XOR_ASSIGNMENT 346
#define INVALID_TOKEN 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "asgn6_20CS30030_20CS30024.y"

    int int_val;
    char *float_val;
    char *char_val;
    char *string_val;
    char *identifier_val; 
    char *unary_operator;
    int instruction_number;
    int parameter_count;
    Expression *expression;
    Statement *statement;
    Array *array;
    SymbolType *symbolType;
    Symbol *symbol;

#line 335 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR_TYPE = 6,                  /* CHAR_TYPE  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FLOAT_TYPE = 15,                /* FLOAT_TYPE  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INLINE = 19,                    /* INLINE  */
  YYSYMBOL_INT_TYPE = 20,                  /* INT_TYPE  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_REGISTER = 22,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 23,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_SHORT = 25,                     /* SHORT  */
  YYSYMBOL_SIGNED = 26,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 27,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 28,                    /* STATIC  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 30,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 31,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 32,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 33,                  /* UNSIGNED  */
  YYSYMBOL_VOID_TYPE = 34,                 /* VOID_TYPE  */
  YYSYMBOL_VOLATILE = 35,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL__BOOL = 37,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 38,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 39,                /* _IMAGINARY  */
  YYSYMBOL_IDENTIFIER = 40,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONST = 41,             /* INTEGER_CONST  */
  YYSYMBOL_FLOAT_CONST = 42,               /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 43,                /* CHAR_CONST  */
  YYSYMBOL_STRING_LITERAL = 44,            /* STRING_LITERAL  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 45,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_INCREMENT = 46,                 /* INCREMENT  */
  YYSYMBOL_SLASH = 47,                     /* SLASH  */
  YYSYMBOL_QUESTION_MARK = 48,             /* QUESTION_MARK  */
  YYSYMBOL_ASSIGNMENT = 49,                /* ASSIGNMENT  */
  YYSYMBOL_COMMA = 50,                     /* COMMA  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 51,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 52,          /* LEFT_PARENTHESES  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 53,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 54,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 55,                       /* DOT  */
  YYSYMBOL_ARROW = 56,                     /* ARROW  */
  YYSYMBOL_ASTERISK = 57,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 58,                      /* PLUS  */
  YYSYMBOL_MINUS = 59,                     /* MINUS  */
  YYSYMBOL_TILDE = 60,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 61,               /* EXCLAMATION  */
  YYSYMBOL_MODULO = 62,                    /* MODULO  */
  YYSYMBOL_LEFT_SHIFT = 63,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 64,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 65,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 66,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL_THAN = 67,           /* LESS_EQUAL_THAN  */
  YYSYMBOL_GREATER_EQUAL_THAN = 68,        /* GREATER_EQUAL_THAN  */
  YYSYMBOL_COLON = 69,                     /* COLON  */
  YYSYMBOL_SEMI_COLON = 70,                /* SEMI_COLON  */
  YYSYMBOL_ELLIPSIS = 71,                  /* ELLIPSIS  */
  YYSYMBOL_ASTERISK_ASSIGNMENT = 72,       /* ASTERISK_ASSIGNMENT  */
  YYSYMBOL_SLASH_ASSIGNMENT = 73,          /* SLASH_ASSIGNMENT  */
  YYSYMBOL_MODULO_ASSIGNMENT = 74,         /* MODULO_ASSIGNMENT  */
  YYSYMBOL_PLUS_ASSIGNMENT = 75,           /* PLUS_ASSIGNMENT  */
  YYSYMBOL_MINUS_ASSIGNMENT = 76,          /* MINUS_ASSIGNMENT  */
  YYSYMBOL_LEFT_SHIFT_ASSIGNMENT = 77,     /* LEFT_SHIFT_ASSIGNMENT  */
  YYSYMBOL_HASH = 78,                      /* HASH  */
  YYSYMBOL_DECREMENT = 79,                 /* DECREMENT  */
  YYSYMBOL_RIGHT_PARENTHESES = 80,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_BITWISE_AND = 81,               /* BITWISE_AND  */
  YYSYMBOL_EQUALS = 82,                    /* EQUALS  */
  YYSYMBOL_BITWISE_XOR = 83,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 84,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 85,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 86,                /* LOGICAL_OR  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGNMENT = 87,    /* RIGHT_SHIFT_ASSIGNMENT  */
  YYSYMBOL_NOT_EQUALS = 88,                /* NOT_EQUALS  */
  YYSYMBOL_BITWISE_AND_ASSIGNMENT = 89,    /* BITWISE_AND_ASSIGNMENT  */
  YYSYMBOL_BITWISE_OR_ASSIGNMENT = 90,     /* BITWISE_OR_ASSIGNMENT  */
  YYSYMBOL_BITWISE_XOR_ASSIGNMENT = 91,    /* BITWISE_XOR_ASSIGNMENT  */
  YYSYMBOL_INVALID_TOKEN = 92,             /* INVALID_TOKEN  */
  YYSYMBOL_THEN = 93,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_primary_expression = 95,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 96,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 97, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 98,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 99,          /* unary_expression  */
  YYSYMBOL_unary_operator = 100,           /* unary_operator  */
  YYSYMBOL_cast_expression = 101,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 102, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 103,      /* additive_expression  */
  YYSYMBOL_shift_expression = 104,         /* shift_expression  */
  YYSYMBOL_relational_expression = 105,    /* relational_expression  */
  YYSYMBOL_equality_expression = 106,      /* equality_expression  */
  YYSYMBOL_AND_expression = 107,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 108,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 109,  /* inclusive_OR_expression  */
  YYSYMBOL_M = 110,                        /* M  */
  YYSYMBOL_N = 111,                        /* N  */
  YYSYMBOL_logical_AND_expression = 112,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 113,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 114,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 115,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 116,      /* assignment_operator  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_constant_expression = 118,      /* constant_expression  */
  YYSYMBOL_declaration = 119,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 120, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 121,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 122, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 123,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 124,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 125,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 126,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 127, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 128, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 129,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 130,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 131,          /* enumerator_list  */
  YYSYMBOL_enumerator = 132,               /* enumerator  */
  YYSYMBOL_type_qualifier = 133,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 134,       /* function_specifier  */
  YYSYMBOL_declarator = 135,               /* declarator  */
  YYSYMBOL_change_scope = 136,             /* change_scope  */
  YYSYMBOL_direct_declarator = 137,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 138,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 139,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 140,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 141,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 142,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 143,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 144,          /* identifier_list  */
  YYSYMBOL_type_name = 145,                /* type_name  */
  YYSYMBOL_initialiser = 146,              /* initialiser  */
  YYSYMBOL_initialiser_list = 147,         /* initialiser_list  */
  YYSYMBOL_designation_opt = 148,          /* designation_opt  */
  YYSYMBOL_designation = 149,              /* designation  */
  YYSYMBOL_designator_list = 150,          /* designator_list  */
  YYSYMBOL_designator = 151,               /* designator  */
  YYSYMBOL_statement = 152,                /* statement  */
  YYSYMBOL_labeled_statement = 153,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 154,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 155,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 156,          /* block_item_list  */
  YYSYMBOL_block_item = 157,               /* block_item  */
  YYSYMBOL_expression_statement = 158,     /* expression_statement  */
  YYSYMBOL_expression_opt = 159,           /* expression_opt  */
  YYSYMBOL_selection_statement = 160,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 161,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 162,           /* jump_statement  */
  YYSYMBOL_translation_unit = 163,         /* translation_unit  */
  YYSYMBOL_external_declaration = 164,     /* external_declaration  */
  YYSYMBOL_function_definition = 165,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 166,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 167          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1068

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  363

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   202,   202,   209,   216,   223,   230,   239,   247,   256,
     276,   285,   289,   293,   302,   311,   315,   324,   330,   338,
     345,   355,   360,   367,   374,   401,   405,   416,   421,   426,
     431,   436,   441,   449,   454,   463,   479,   502,   525,   551,
     556,   567,   581,   586,   597,   615,   620,   634,   648,   662,
     679,   684,   700,   719,   724,   737,   742,   755,   760,   780,
     787,   826,   831,   845,   850,   864,   869,   889,   894,   915,
     919,   923,   927,   931,   935,   939,   943,   947,   951,   955,
     962,   967,   974,   983,   990,   995,  1001,  1005,  1009,  1013,
    1020,  1025,  1031,  1035,  1042,  1047,  1057,  1061,  1065,  1069,
    1076,  1081,  1086,  1090,  1095,  1099,  1104,  1108,  1112,  1128,
    1135,  1139,  1146,  1151,  1157,  1161,  1165,  1172,  1177,  1183,
    1187,  1194,  1198,  1205,  1209,  1213,  1220,  1227,  1236,  1243,
    1259,  1265,  1270,  1274,  1278,  1296,  1315,  1319,  1323,  1327,
    1331,  1335,  1350,  1354,  1373,  1378,  1384,  1390,  1399,  1403,
    1410,  1414,  1421,  1425,  1432,  1438,  1445,  1449,  1456,  1463,
    1468,  1472,  1479,  1483,  1490,  1495,  1501,  1508,  1512,  1519,
    1523,  1532,  1536,  1541,  1547,  1552,  1557,  1565,  1569,  1573,
    1591,  1599,  1605,  1612,  1617,  1627,  1632,  1640,  1648,  1654,
    1673,  1681,  1690,  1716,  1726,  1735,  1746,  1753,  1757,  1761,
    1765,  1780,  1784,  1791,  1795,  1803,  1817,  1822,  1828,  1832
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR_TYPE", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "ENUM", "EXTERN", "FLOAT_TYPE", "FOR", "GOTO", "IF", "INLINE",
  "INT_TYPE", "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED",
  "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED",
  "VOID_TYPE", "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY",
  "IDENTIFIER", "INTEGER_CONST", "FLOAT_CONST", "CHAR_CONST",
  "STRING_LITERAL", "LEFT_SQUARE_BRACKET", "INCREMENT", "SLASH",
  "QUESTION_MARK", "ASSIGNMENT", "COMMA", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT",
  "ARROW", "ASTERISK", "PLUS", "MINUS", "TILDE", "EXCLAMATION", "MODULO",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL_THAN", "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON",
  "ELLIPSIS", "ASTERISK_ASSIGNMENT", "SLASH_ASSIGNMENT",
  "MODULO_ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT",
  "LEFT_SHIFT_ASSIGNMENT", "HASH", "DECREMENT", "RIGHT_PARENTHESES",
  "BITWISE_AND", "EQUALS", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND",
  "LOGICAL_OR", "RIGHT_SHIFT_ASSIGNMENT", "NOT_EQUALS",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_OR_ASSIGNMENT",
  "BITWISE_XOR_ASSIGNMENT", "INVALID_TOKEN", "THEN", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression", "M", "N",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "change_scope", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initialiser", "initialiser_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-295)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1008,  -295,  -295,  -295,  -295,   -20,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
      -1,  1008,  1008,  -295,  1008,  1008,   975,  -295,  -295,   -38,
     -18,  -295,    -1,    18,    55,    30,  -295,   938,    34,    15,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,     4,    67,  -295,
     109,    18,  -295,    -1,   749,  -295,    -1,  -295,  1008,   605,
     127,    34,   121,    10,  -295,  -295,  -295,  -295,  -295,   129,
     819,  -295,  -295,  -295,  -295,  -295,   847,   563,    58,  -295,
    -295,  -295,  -295,  -295,   847,  -295,  -295,    94,    85,   875,
    -295,    21,    52,    72,   117,    26,   113,   107,   122,   120,
     -36,  -295,  -295,  -295,   154,  -295,   689,  -295,   160,   162,
     647,  -295,   538,   -32,   875,   -21,  -295,   563,  -295,   563,
    -295,  -295,   -28,  1033,  -295,  1033,   135,   875,   176,    88,
     749,  -295,    27,  -295,  -295,   875,  -295,   875,   180,   182,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,   875,  -295,  -295,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,  -295,  -295,   177,   287,   181,   689,  -295,  -295,   875,
    -295,   183,   184,  -295,    -1,   148,   186,  -295,   191,  -295,
    -295,  -295,  -295,  -295,   157,   158,   875,  -295,  -295,  -295,
    -295,   791,   188,  -295,    62,  -295,  -295,  -295,  -295,    93,
     161,   192,  -295,  -295,  -295,  -295,  -295,  -295,  -295,    21,
      21,    52,    52,    72,    72,    72,    72,   117,   117,    26,
     113,   107,   875,   875,  -295,   174,   875,   175,   178,  -295,
     194,   209,   198,   875,   201,  -295,   185,   287,   206,  -295,
    -295,  -295,  -295,   203,   204,  -295,  -295,   189,  -295,  -295,
    -295,  -295,   211,   212,  -295,  -295,  -295,  -295,   752,  -295,
     207,   207,  -295,    58,  -295,  -295,  -295,   749,  -295,  -295,
     875,   122,   120,   875,  -295,   195,  -295,   475,   475,   429,
     197,   875,   199,   875,   216,   475,   218,  -295,   366,  -295,
    -295,  -295,  -295,  -295,    91,  -295,  -295,   206,   475,  -295,
    -295,   875,   200,  -295,   -26,  -295,   -14,   875,  -295,  -295,
    -295,    77,  -295,   208,  -295,   237,   205,  -295,  -295,   475,
     -10,  -295,  -295,   224,   875,   875,   475,  -295,  -295,   875,
     875,   202,   213,  -295,   475,  -295,    -3,   475,  -295,   266,
    -295,   214,  -295,   875,  -295,  -295,  -295,   475,   219,  -295,
    -295,   475,  -295
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   123,   106,   118,    96,   105,   126,   103,
     104,    99,   124,   102,   107,    97,   108,   100,   125,   204,
      85,    91,    91,   109,    91,    91,     0,   201,   203,   116,
       0,   130,     0,   145,     0,    84,    92,    94,   128,     0,
      90,    86,    87,    88,    89,     1,   202,     0,     0,   148,
     146,   144,    83,     0,     0,   208,    85,   129,   206,     0,
     129,   127,   121,     0,   119,   131,   147,   149,    93,    94,
       0,     2,     3,     4,     5,     6,     0,     0,   165,    28,
      29,    30,    31,    32,     0,    27,     8,    21,    33,     0,
      35,    39,    42,    45,    50,    53,    55,    57,    61,    63,
      65,    67,   159,    95,     0,   209,     0,   135,    28,     0,
       0,   156,     0,     0,     0,     0,   114,     0,    25,     0,
      22,    80,     0,   113,   158,   113,     0,     0,     0,     0,
       0,   164,     0,   167,    23,     0,    13,    18,     0,     0,
      14,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      79,    78,     0,    33,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    59,     0,   182,     0,     0,   140,   134,     0,
     133,    28,     0,   143,   155,     0,   150,   152,     0,   142,
      82,   122,   115,   120,     0,     0,     0,     7,   112,   110,
     111,     0,     0,   170,   165,   160,   162,   166,   168,     0,
       0,    17,    19,    11,    12,    68,    37,    36,    38,    40,
      41,    43,    44,    46,    47,    48,    49,    51,    52,    54,
      56,    58,     0,     0,    59,     0,     0,     0,     0,    59,
       0,     0,     0,   189,     0,    59,     2,   182,   188,   185,
     186,   171,   172,     0,    59,   183,   173,     0,   174,   175,
     176,   137,     0,     0,   139,   132,   154,   141,     0,   157,
      26,     0,    81,   165,    34,   169,   161,     0,     9,    10,
       0,    62,    64,     0,   199,     0,   198,   189,   189,   189,
       0,     0,     0,     0,     0,   189,     0,   205,   189,   187,
     136,   138,   151,   153,     0,   163,    20,    60,   189,   179,
      59,   189,     0,   197,     0,   200,     0,     0,   177,   180,
     184,   165,    15,     0,   178,     0,     0,    59,    59,   189,
       0,    16,    59,     0,   189,   189,   189,   192,    59,     0,
       0,     0,     0,    60,   189,    66,     0,   189,    59,   190,
     193,     0,   196,   189,    59,   194,    60,   189,     0,   191,
      59,   189,   195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -295,  -295,  -295,   -68,  -295,   -82,    -6,    40,
      24,    37,   111,   112,   115,    54,  -130,  -294,    83,  -295,
    -113,   -25,  -295,   -74,  -116,     0,  -295,     6,   171,  -295,
     234,  -295,   -54,     3,   163,  -295,  -295,  -295,   210,   104,
    -295,   -15,   258,   280,  -295,   274,   -49,  -295,  -295,    64,
    -295,    60,  -121,    53,  -200,  -295,  -295,   217,   -96,  -295,
    -295,    87,  -295,    38,  -295,  -205,  -295,  -295,  -295,  -295,
     309,  -295,  -295,  -295
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    86,    87,   210,   211,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   232,   173,    99,   100,
     101,   121,   152,   248,   191,   249,    34,    56,    41,    35,
      36,    21,    22,   124,   199,    23,    30,    63,    64,    24,
      25,    69,   104,    38,    50,    39,    51,   185,   186,   187,
     113,   126,   103,   129,   130,   131,   132,   133,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,    26,
      27,    28,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   190,   118,   122,   277,    37,    20,   154,   120,   206,
     110,   202,   -60,   323,   190,  -117,   134,    48,   188,    62,
      29,   153,   196,   123,   196,     3,    19,    40,    40,   102,
      40,    40,    20,   192,   109,    47,   196,    55,   292,    31,
     196,    12,   233,   122,    62,   122,   153,   196,   189,   349,
     172,    32,   197,    18,   328,    31,    33,   176,   105,   153,
     115,   209,   358,   123,   116,   123,   329,    32,   155,   123,
     338,   123,   127,   216,   217,   218,   207,   351,   156,    59,
      53,   175,   128,   157,   312,   182,    60,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   127,   283,   102,   326,   127,   166,   288,
     158,   159,   212,   128,   167,   294,   276,   128,   184,   274,
     285,   277,   127,   190,   298,    52,   198,   215,   198,   341,
     342,   331,   128,   153,   141,   160,   161,    49,   204,   135,
     136,   321,   205,   196,   278,   322,   137,    65,   356,   138,
     139,   262,   219,   220,   263,    67,   305,   142,   143,   144,
     145,   146,   147,    49,   153,   153,    33,   111,   153,   266,
     114,   272,   148,   140,   149,   150,   151,   194,    54,   195,
     325,   125,   162,   163,   164,   165,   223,   224,   225,   226,
     169,   309,   310,    42,   168,    43,    44,   335,   336,   318,
     221,   222,   339,   227,   228,   171,   170,   174,   344,   307,
      49,   177,   324,   178,    67,   201,   203,   314,   353,   316,
     213,   125,   214,   125,   357,   234,   345,   125,   267,   125,
     361,   269,   261,   337,   264,   265,   268,   270,   271,   275,
     343,   279,   280,   330,   284,   286,   289,   287,   350,   290,
     291,   352,   102,   293,   295,   306,   196,   297,  -181,   299,
     273,   359,   300,   301,   308,   362,   346,   313,   317,   315,
     327,   153,   319,   333,   184,   334,   340,   332,   354,   229,
      67,   230,   347,   348,   355,   231,   281,    68,   200,   311,
       1,   235,   236,     2,     3,   237,   238,   239,     4,   360,
       5,     6,     7,   240,   241,   242,     8,     9,    10,    11,
      12,   243,    13,    14,    70,    15,   282,   244,   112,    61,
      16,    17,    18,   245,    66,   193,   304,   246,    72,    73,
      74,    75,   303,    76,   296,    46,   320,     0,     0,    77,
     247,     0,     0,     0,    79,    80,    81,    82,    83,   208,
       0,     0,     0,     0,     0,     0,     0,  -189,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,    85,     1,
     235,   236,     2,     3,   237,   238,   239,     4,     0,     5,
       6,     7,   240,   241,   242,     8,     9,    10,    11,    12,
     243,    13,    14,    70,    15,     0,   244,     0,     0,    16,
      17,    18,   245,     0,     0,     0,   246,    72,    73,    74,
      75,     0,    76,     0,     0,     0,     0,     0,    77,   247,
       0,     0,     0,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,    84,     0,    85,     8,     9,
      10,    11,    12,     0,    13,    14,    70,    15,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,   235,
     236,    77,     0,   237,   238,   239,    79,    80,    81,    82,
      83,   240,   241,   242,     0,     0,     0,     0,     0,   243,
       0,     0,    70,     0,     0,   244,     0,     0,    84,     0,
      85,   245,     0,     0,     0,   246,    72,    73,    74,    75,
       0,    76,     0,     0,     0,     0,     0,    77,   247,     0,
       0,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    84,     0,    85,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     2,
       3,    16,    17,    18,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
      70,     0,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    71,    72,    73,    74,    75,     0,    76,
       0,     0,     3,     0,     0,    77,     0,     0,   183,     0,
      79,    80,    81,    82,    83,     0,     0,     0,    12,     0,
       0,     0,    70,   106,     0,     0,     0,     0,     0,     0,
      18,     0,    84,     0,    85,    71,    72,    73,    74,    75,
       0,    76,     0,     0,     3,     0,   107,    77,     0,     0,
       0,     0,   108,    80,    81,    82,    83,     0,     0,     0,
      12,     0,     0,     0,    70,   179,     0,     0,     0,     0,
       0,     0,    18,     0,    84,     0,    85,    71,    72,    73,
      74,    75,     0,    76,     0,     0,     3,     0,   180,    77,
       0,     0,     0,     0,   181,    80,    81,    82,    83,     0,
       0,     0,    12,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    84,     0,    85,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,    84,     0,
      85,     8,     9,    10,    11,    12,    70,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,     0,
       0,    77,    78,     0,     0,     0,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,   302,     0,     0,     0,     0,    84,     0,
      85,    71,    72,    73,    74,    75,     0,    76,     0,     0,
       0,     0,     0,    77,   273,     0,    70,     0,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,     0,
      84,   117,    85,     0,    70,     0,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,     0,    76,     0,     0,     0,     0,    84,   119,
      85,     0,    70,     0,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
       0,    76,     0,     0,     0,     0,    84,    77,    85,     0,
       0,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    84,     0,    85,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    45,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,    54,     5,     6,
       7,  -207,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     2,
       3,    16,    17,    18,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
       0,     0,     0,     0,     0,     0,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
       0,   114,    70,    77,   204,    20,     0,    89,    76,   130,
      59,   127,    48,   307,   127,    53,    84,    32,    50,    40,
      40,    89,    50,    77,    50,     7,    26,    21,    22,    54,
      24,    25,    26,    54,    59,    53,    50,    37,   243,    40,
      50,    23,   172,   117,    40,   119,   114,    50,    80,   343,
      86,    52,    80,    35,    80,    40,    57,   106,    58,   127,
      50,   135,   356,   117,    54,   119,    80,    52,    47,   123,
      80,   125,    45,   155,   156,   157,    49,    80,    57,    45,
      50,   106,    55,    62,   289,   110,    52,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,    45,   234,   130,   311,    45,    82,   239,
      58,    59,   137,    55,    88,   245,    54,    55,   112,   201,
     236,   321,    45,   236,   254,    70,   123,   152,   125,   334,
     335,    54,    55,   201,    49,    63,    64,    33,    50,    45,
      46,    50,    54,    50,    51,    54,    52,    80,   353,    55,
      56,   176,   158,   159,   179,    51,   277,    72,    73,    74,
      75,    76,    77,    59,   232,   233,    57,    40,   236,   184,
      49,   196,    87,    79,    89,    90,    91,   117,    49,   119,
     310,    77,    65,    66,    67,    68,   162,   163,   164,   165,
      83,   287,   288,    22,    81,    24,    25,   327,   328,   295,
     160,   161,   332,   166,   167,    85,    84,    53,   338,   283,
     106,    51,   308,    51,   110,    80,    40,   291,   348,   293,
      40,   117,    40,   119,   354,    48,   339,   123,    80,   125,
     360,    40,    51,   329,    51,    51,    50,    80,    80,    51,
     336,    80,    50,   317,    70,    70,    52,    69,   344,    40,
      52,   347,   277,    52,    69,   280,    50,    54,    54,    70,
      53,   357,    51,    51,    69,   361,   340,    70,    52,    70,
      70,   339,    54,    36,   268,    70,    52,    69,    12,   168,
     176,   169,    80,    70,    70,   170,   232,    53,   125,   289,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    80,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   233,    30,    60,    39,
      33,    34,    35,    36,    50,   115,   273,    40,    41,    42,
      43,    44,   268,    46,   247,    26,   298,    -1,    -1,    52,
      53,    -1,    -1,    -1,    57,    58,    59,    60,    61,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    79,    -1,    81,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,     4,
       5,    52,    -1,     8,     9,    10,    57,    58,    59,    60,
      61,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    79,    -1,
      81,    36,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    79,    -1,    81,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,     6,
       7,    33,    34,    35,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,     7,    -1,    -1,    52,    -1,    -1,    80,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    79,    -1,    81,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,     7,    -1,    51,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    79,    -1,    81,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,     7,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    79,    -1,    81,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    79,    -1,
      81,    19,    20,    21,    22,    23,    27,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    79,    -1,
      81,    40,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    27,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      79,    52,    81,    -1,    27,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    79,    52,
      81,    -1,    27,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    79,    52,    81,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    79,    -1,    81,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,     0,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    49,    13,    14,
      15,    53,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,     6,
       7,    33,    34,    35,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,   119,
     121,   125,   126,   129,   133,   134,   163,   164,   165,    40,
     130,    40,    52,    57,   120,   123,   124,   135,   137,   139,
     121,   122,   122,   122,   122,     0,   164,    53,   135,   133,
     138,   140,    70,    50,    49,   119,   121,   166,   167,    45,
      52,   137,    40,   131,   132,    80,   139,   133,   124,   135,
      27,    40,    41,    42,    43,    44,    46,    52,    53,    57,
      58,    59,    60,    61,    79,    81,    95,    96,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   112,
     113,   114,   115,   146,   136,   119,    28,    51,    57,   115,
     140,    40,   136,   144,    49,    50,    54,    52,    99,    52,
      99,   115,   117,   126,   127,   133,   145,    45,    55,   147,
     148,   149,   150,   151,    99,    45,    46,    52,    55,    56,
      79,    49,    72,    73,    74,    75,    76,    77,    87,    89,
      90,    91,   116,    99,   101,    47,    57,    62,    58,    59,
      63,    64,    65,    66,    67,    68,    82,    88,    81,    83,
      84,    85,    86,   111,    53,   115,   140,    51,    51,    28,
      51,    57,   115,    80,   121,   141,   142,   143,    50,    80,
     114,   118,    54,   132,   145,   145,    50,    80,   127,   128,
     128,    80,   118,    40,    50,    54,   146,    49,   151,   117,
      97,    98,   115,    40,    40,   115,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     107,   108,   110,   110,    48,     4,     5,     8,     9,    10,
      16,    17,    18,    24,    30,    36,    40,    53,   117,   119,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    51,   115,   115,    51,    51,   135,    80,    50,    40,
      80,    80,   115,    53,   101,    51,    54,   148,    51,    80,
      50,   109,   112,   110,    70,   118,    70,    69,   110,    52,
      40,    52,   159,    52,   110,    69,   155,    54,   110,    70,
      51,    51,    71,   143,   147,   146,   115,   117,    69,   152,
     152,   119,   159,    70,   117,    70,   117,    52,   152,    54,
     157,    50,    54,   111,   152,   110,   159,    70,    80,    80,
     117,    54,    69,    36,    70,   110,   110,   152,    80,   110,
      52,   159,   159,   152,   110,   114,   117,    80,    70,   111,
     152,    80,   152,   110,    12,    70,   159,   110,   111,   152,
      80,   110,   152
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   133,   134,   135,   135,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   146,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   162,   162,   162,
     162,   163,   163,   164,   164,   165,   166,   166,   167,   167
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     0,     5,     6,     2,     1,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     0,
       1,     3,     5,     4,     4,     3,     6,     5,     6,     5,
       4,     5,     4,     4,     1,     0,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     0,     1,     3,     1,     1,     2,     1,     0,
       7,    10,     5,     7,     9,    13,     8,     3,     2,     2,
       3,     1,     2,     1,     1,     7,     1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 203 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("primary_expression => IDENTIFIER");
            (yyval.expression) = new Expression();
            (yyval.expression)->symbol = (yyvsp[0].symbol);
            (yyval.expression)->type = Expression::NONBOOLEAN; 
        }
#line 1918 "y.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONST  */
#line 210 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("primary_expression => INTEGER_CONST"); 
            (yyval.expression) = new Expression();
            (yyval.expression)->symbol = gentemp(SymbolType::INT, toString((yyvsp[0].int_val)));
            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].int_val));
        }
#line 1929 "y.tab.c"
    break;

  case 4: /* primary_expression: FLOAT_CONST  */
#line 217 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("primary_expression => FLOAT_CONST"); 
            (yyval.expression) = new Expression();
            (yyval.expression)->symbol = gentemp(SymbolType::FLOAT, (yyvsp[0].float_val));
            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].float_val));
        }
#line 1940 "y.tab.c"
    break;

  case 5: /* primary_expression: CHAR_CONST  */
#line 224 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("primary_expression => CHAR_CONST"); 
            (yyval.expression) = new Expression();
            (yyval.expression)->symbol = gentemp(SymbolType::CHAR, (yyvsp[0].char_val));
            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].char_val));
        }
#line 1951 "y.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 231 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("primary_expression => STRING_LITERAL"); 
            (yyval.expression) = new Expression();
            (yyval.expression)->symbol = gentemp(SymbolType::POINTER, (yyvsp[0].string_val));
            (yyval.expression)->symbol->type->arrayType = new SymbolType(SymbolType::CHAR);
            emit("=str", (yyval.expression)->symbol->name, stringLiterals.size());
            stringLiterals.push_back((yyvsp[0].string_val));
        }
#line 1964 "y.tab.c"
    break;

  case 7: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 240 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("primary_expression => ( expression )"); 
            (yyval.expression) = (yyvsp[-1].expression);
        }
#line 1973 "y.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 248 "asgn6_20CS30030_20CS30024.y"
        { 
            // create new array with the same symbol as the primary expression
            yyinfo("postfix_expression => primary_expression"); 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[0].expression)->symbol;
            (yyval.array)->temp = (yyval.array)->symbol;
            (yyval.array)->subArrayType = (yyvsp[0].expression)->symbol->type;
        }
#line 1986 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 257 "asgn6_20CS30030_20CS30024.y"
        { 
            // this is an array expression, create a new array
            yyinfo("postfix_expression => postfix_expression [ expression ]"); 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[-3].array)->symbol;
            (yyval.array)->subArrayType = (yyvsp[-3].array)->subArrayType->arrayType; // as we are indexing we go one level deeper
            (yyval.array)->temp = gentemp(SymbolType::INT); // temporary to compute location
            (yyval.array)->type = Array::ARRAY;

            if((yyvsp[-3].array)->type == Array::ARRAY) {
                // postfix_expression is already array so multiply size of subarray with expression and add
                Symbol *sym = gentemp(SymbolType::INT);
                emit("*", sym->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                emit("+", (yyval.array)->temp->name, (yyvsp[-3].array)->temp->name, sym->name);
            } else {
                emit("*", (yyval.array)->temp->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
            }

        }
#line 2010 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARENTHESES  */
#line 277 "asgn6_20CS30030_20CS30024.y"
        { 
            // function call, number of parameters stored in argument_expression_list_opt
            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
            (yyval.array) = new Array();
            (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);
            (yyval.array)->symbol->type->arrayType = (yyvsp[-3].array)->symbol->type->arrayType;
            emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, toString((yyvsp[-1].parameter_count)));
        }
#line 2023 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 286 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("postfix_expression => postfix_expression . IDENTIFIER"); 
        }
#line 2031 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 290 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); 
        }
#line 2039 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression INCREMENT  */
#line 294 "asgn6_20CS30030_20CS30024.y"
        { 
            // post increment, first generate temporary with old value, then add 1
            yyinfo("postfix_expression => postfix_expression ++");
            (yyval.array) = new Array();
            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
            emit("+", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1)); 
        }
#line 2052 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DECREMENT  */
#line 303 "asgn6_20CS30030_20CS30024.y"
        { 
            // post decrement, first generate temporary with old value, then subtract 1
            yyinfo("postfix_expression => postfix_expression --"); 
            (yyval.array) = new Array();
            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
            emit("-", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1));
        }
#line 2065 "y.tab.c"
    break;

  case 15: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initialiser_list RIGHT_CURLY_BRACKET  */
#line 312 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); 
        }
#line 2073 "y.tab.c"
    break;

  case 16: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initialiser_list COMMA RIGHT_CURLY_BRACKET  */
#line 316 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); 
        }
#line 2081 "y.tab.c"
    break;

  case 17: /* argument_expression_list_opt: argument_expression_list  */
#line 325 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("argument_expression_list_opt => argument_expression_list"); 
            (yyval.parameter_count) = (yyvsp[0].parameter_count);
        }
#line 2090 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 330 "asgn6_20CS30030_20CS30024.y"
        { 
            // empty so 0 params
            yyinfo("argument_expression_list_opt => epsilon");
            (yyval.parameter_count) = 0;
        }
#line 2100 "y.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 339 "asgn6_20CS30030_20CS30024.y"
        { 
            // first param, initialise param count to 1
            yyinfo("argument_expression_list => assignment_expression"); 
            emit("param", (yyvsp[0].expression)->symbol->name);
            (yyval.parameter_count) = 1;
        }
#line 2111 "y.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 346 "asgn6_20CS30030_20CS30024.y"
        { 
            // one new param, add 1 to param count
            yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
            emit("param", (yyvsp[0].expression)->symbol->name);
            (yyval.parameter_count) = (yyvsp[-2].parameter_count) + 1; 
        }
#line 2122 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 356 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_expression => postfix_expression"); 
            (yyval.array) = (yyvsp[0].array);
        }
#line 2131 "y.tab.c"
    break;

  case 22: /* unary_expression: INCREMENT unary_expression  */
#line 361 "asgn6_20CS30030_20CS30024.y"
        { 
            // pre increment, no new temporary simply add 1
            yyinfo("unary_expression => ++ unary_expression"); 
            (yyval.array) = (yyvsp[0].array);
            emit("+", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
        }
#line 2142 "y.tab.c"
    break;

  case 23: /* unary_expression: DECREMENT unary_expression  */
#line 368 "asgn6_20CS30030_20CS30024.y"
        { 
            // pre decrement, no new temporary simply subtract 1
            yyinfo("unary_expression => -- unary_expression"); 
            (yyval.array) = (yyvsp[0].array);
            emit("-", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
        }
#line 2153 "y.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 375 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_expression => unary_operator cast_expression");
            if(strcmp((yyvsp[-1].unary_operator), "&") == 0) {
                // addressing, this generates a pointer, the subArray type will thus be the symbol type of the cast_expression
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp(SymbolType::POINTER);
                (yyval.array)->symbol->type->arrayType = (yyvsp[0].array)->symbol->type;
                emit("=&", (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
            } else if(strcmp((yyvsp[-1].unary_operator), "*") == 0) {
                // dereferncing, this generates a pointer, a new temporary generated with type as the subarray type of the cast_expression
                // the subArray type will thus be one level deeper that of the cast_expression
                (yyval.array) = new Array();
                (yyval.array)->symbol = (yyvsp[0].array)->symbol;
                (yyval.array)->temp = gentemp((yyvsp[0].array)->temp->type->arrayType->type);
                (yyval.array)->temp->type->arrayType = (yyvsp[0].array)->temp->type->arrayType->arrayType;
                (yyval.array)->type = Array::POINTER;
                emit("=*", (yyval.array)->temp->name, (yyvsp[0].array)->temp->name);
            } else if(strcmp((yyvsp[-1].unary_operator), "+") == 0) {
                (yyval.array) = (yyvsp[0].array);
            } else { // for -, ~ and !
                // simply apply the operator on cast_expression
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp((yyvsp[0].array)->symbol->type->type);
                emit((yyvsp[-1].unary_operator), (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
            }
        }
#line 2184 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 402 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_expression => sizeof unary_expression"); 
        }
#line 2192 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF LEFT_PARENTHESES type_name RIGHT_PARENTHESES  */
#line 406 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_expression => sizeof ( type_name )"); 
        }
#line 2200 "y.tab.c"
    break;

  case 27: /* unary_operator: BITWISE_AND  */
#line 417 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_operator => &"); 
            (yyval.unary_operator) = strdup("&"); 
        }
#line 2209 "y.tab.c"
    break;

  case 28: /* unary_operator: ASTERISK  */
#line 422 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_operator => *"); 
            (yyval.unary_operator) = strdup("*"); 
        }
#line 2218 "y.tab.c"
    break;

  case 29: /* unary_operator: PLUS  */
#line 427 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_operator => +"); 
            (yyval.unary_operator) = strdup("+"); 
        }
#line 2227 "y.tab.c"
    break;

  case 30: /* unary_operator: MINUS  */
#line 432 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_operator => -"); 
            (yyval.unary_operator) = strdup("=-"); 
        }
#line 2236 "y.tab.c"
    break;

  case 31: /* unary_operator: TILDE  */
#line 437 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_operator => ~"); 
            (yyval.unary_operator) = strdup("~"); 
        }
#line 2245 "y.tab.c"
    break;

  case 32: /* unary_operator: EXCLAMATION  */
#line 442 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("unary_operator => !"); 
            (yyval.unary_operator) = strdup("!"); 
        }
#line 2254 "y.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 450 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("cast_expression => unary_expression"); 
            (yyval.array) = (yyvsp[0].array);
        }
#line 2263 "y.tab.c"
    break;

  case 34: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 455 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("cast_expression => ( type_name ) cast_expression"); 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[0].array)->symbol->convert(currentType);
        }
#line 2273 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: cast_expression  */
#line 464 "asgn6_20CS30030_20CS30024.y"
        { 
            SymbolType *baseType = (yyvsp[0].array)->symbol->type;
            while(baseType->arrayType)
                baseType = baseType->arrayType;
            yyinfo("multiplicative_expression => cast_expression"); 
            (yyval.expression) = new Expression();
            if((yyvsp[0].array)->type == Array::ARRAY) {
                (yyval.expression)->symbol = gentemp(baseType->type);
                emit("=[]", (yyval.expression)->symbol->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
            } else if((yyvsp[0].array)->type == Array::POINTER) {
                (yyval.expression)->symbol = (yyvsp[0].array)->temp;
            } else {
                (yyval.expression)->symbol = (yyvsp[0].array)->symbol;
            }
        }
#line 2293 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 480 "asgn6_20CS30030_20CS30024.y"
        { 
            SymbolType *baseType = (yyvsp[0].array)->symbol->type;
            while(baseType->arrayType)
                baseType = baseType->arrayType;
            Symbol *temp;
            if((yyvsp[0].array)->type == Array::ARRAY) {
                temp = gentemp(baseType->type);
                emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
            } else if((yyvsp[0].array)->type == Array::POINTER) {
                temp = (yyvsp[0].array)->temp;
            } else {
                temp = (yyvsp[0].array)->symbol;
            }
            yyinfo("multiplicative_expression => multiplicative_expression * cast_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                emit("*", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2320 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 503 "asgn6_20CS30030_20CS30024.y"
        { 
            SymbolType *baseType = (yyvsp[0].array)->symbol->type;
            while(baseType->arrayType)
                baseType = baseType->arrayType;
            Symbol *temp;
            if((yyvsp[0].array)->type == Array::ARRAY) {
                temp = gentemp(baseType->type);
                emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
            } else if((yyvsp[0].array)->type == Array::POINTER) {
                temp = (yyvsp[0].array)->temp;
            } else {
                temp = (yyvsp[0].array)->symbol;
            }
            yyinfo("multiplicative_expression => multiplicative_expression / cast_expression");
            if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                emit("/", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2347 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 526 "asgn6_20CS30030_20CS30024.y"
        { 
            SymbolType *baseType = (yyvsp[0].array)->symbol->type;
            while(baseType->arrayType)
                baseType = baseType->arrayType;
            Symbol *temp;
            if((yyvsp[0].array)->type == Array::ARRAY) {
                temp = gentemp(baseType->type);
                emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
            } else if((yyvsp[0].array)->type == Array::POINTER) {
                temp = (yyvsp[0].array)->temp;
            } else {
                temp = (yyvsp[0].array)->symbol;
            }
            yyinfo("multiplicative_expression => multiplicative_expression % cast_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                emit("%", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2374 "y.tab.c"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 552 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("additive_expression => multiplicative_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2383 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 557 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("additive_expression => additive_expression + multiplicative_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                emit("+", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2398 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 568 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("additive_expression => additive_expression - multiplicative_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                emit("-", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2413 "y.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 582 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("shift_expression => additive_expression");
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2422 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 587 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("shift_expression => shift_expression << additive_expression"); 
            if((yyvsp[0].expression)->symbol->type->type == SymbolType::INT) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                emit("<<", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2437 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 598 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("shift_expression => shift_expression >> additive_expression"); 
            if((yyvsp[0].expression)->symbol->type->type == SymbolType::INT) {
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                emit(">>", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            } else {
                yyerror("Type error.");
            }
        }
#line 2452 "y.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 616 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("relational_expression => shift_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2461 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 621 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("relational_expression => relational_expression < shift_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                (yyval.expression)->trueList = makeList(nextInstruction());
                (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                emit("<", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                emit("goto", "");
            } else {
                yyerror("Type error.");
            }
        }
#line 2479 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 635 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("relational_expression => relational_expression > shift_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                (yyval.expression)->trueList = makeList(nextInstruction());
                (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                emit(">", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                emit("goto", "");
            } else {
                yyerror("Type error.");
            }
        }
#line 2497 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESS_EQUAL_THAN shift_expression  */
#line 649 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("relational_expression => relational_expression <= shift_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                (yyval.expression)->trueList = makeList(nextInstruction());
                (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                emit("<=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                emit("goto", "");
            } else {
                yyerror("Type error.");
            }
        }
#line 2515 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATER_EQUAL_THAN shift_expression  */
#line 663 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("relational_expression => relational_expression >= shift_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                (yyval.expression)->trueList = makeList(nextInstruction());
                (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                emit(">=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                emit("goto", "");
            } else {
                yyerror("Type error.");
            }
        }
#line 2533 "y.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 680 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("equality_expression => relational_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2542 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression EQUALS relational_expression  */
#line 685 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("equality_expression => equality_expression == relational_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyvsp[-2].expression)->toInt();
                (yyvsp[0].expression)->toInt();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                (yyval.expression)->trueList = makeList(nextInstruction());
                (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                emit("==", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                emit("goto", "");
            } else {
                yyerror("Type error.");
            }
        }
#line 2562 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression NOT_EQUALS relational_expression  */
#line 701 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("equality_expression => equality_expression != relational_expression"); 
            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                (yyvsp[-2].expression)->toInt();
                (yyvsp[0].expression)->toInt();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                (yyval.expression)->trueList = makeList(nextInstruction());
                (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                emit("!=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                emit("goto", "");
            } else {
                yyerror("Type error.");
            }
        }
#line 2582 "y.tab.c"
    break;

  case 53: /* AND_expression: equality_expression  */
#line 720 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("AND_expression => equality_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2591 "y.tab.c"
    break;

  case 54: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 725 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("AND_expression => AND_expression & equality_expression"); 
            (yyvsp[-2].expression)->toInt();
            (yyvsp[0].expression)->toInt();
            (yyval.expression) = new Expression();
            (yyval.expression)->type = Expression::NONBOOLEAN;
            (yyval.expression)->symbol = gentemp(SymbolType::INT);
            emit("&", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
        }
#line 2605 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: AND_expression  */
#line 738 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("exclusive_OR_expression => AND_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2614 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 743 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression"); 
            (yyvsp[-2].expression)->toInt();
            (yyvsp[0].expression)->toInt();
            (yyval.expression) = new Expression();
            (yyval.expression)->type = Expression::NONBOOLEAN;
            (yyval.expression)->symbol = gentemp(SymbolType::INT);
            emit("^", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
        }
#line 2628 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 756 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("inclusive_OR_expression => exclusive_OR_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2637 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 761 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression"); 
            (yyvsp[-2].expression)->toInt();
            (yyvsp[0].expression)->toInt();
            (yyval.expression) = new Expression();
            (yyval.expression)->type = Expression::NONBOOLEAN;
            (yyval.expression)->symbol = gentemp(SymbolType::INT);
            emit("|", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
        }
#line 2651 "y.tab.c"
    break;

  case 59: /* M: %empty  */
#line 780 "asgn6_20CS30030_20CS30024.y"
        {
            yyinfo("M => epsilon");
            (yyval.instruction_number) = nextInstruction();
        }
#line 2660 "y.tab.c"
    break;

  case 60: /* N: %empty  */
#line 787 "asgn6_20CS30030_20CS30024.y"
        {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makeList(nextInstruction());
            emit("goto", "");
        }
#line 2671 "y.tab.c"
    break;

  case 61: /* logical_AND_expression: inclusive_OR_expression  */
#line 827 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("logical_AND_expression => inclusive_OR_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2680 "y.tab.c"
    break;

  case 62: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 832 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");
            (yyvsp[-3].expression)->toBool();
            (yyvsp[0].expression)->toBool();
            (yyval.expression) = new Expression();
            (yyval.expression)->type = Expression::BOOLEAN;
            backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instruction_number));
            (yyval.expression)->trueList = (yyvsp[0].expression)->trueList;
            (yyval.expression)->falseList = merge((yyvsp[-3].expression)->falseList, (yyvsp[0].expression)->falseList);
        }
#line 2695 "y.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_AND_expression  */
#line 846 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("logical_OR_expression => logical_AND_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2704 "y.tab.c"
    break;

  case 64: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 851 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("logical_OR_expression => logical_OR_expression || logical_AND_expression"); 
            (yyvsp[-3].expression)->toBool();
            (yyvsp[0].expression)->toBool();
            (yyval.expression) = new Expression();
            (yyval.expression)->type = Expression::BOOLEAN;
            backpatch((yyvsp[-3].expression)->falseList, (yyvsp[-1].instruction_number));
            (yyval.expression)->trueList = merge((yyvsp[-3].expression)->trueList, (yyvsp[0].expression)->trueList);
            (yyval.expression)->falseList = (yyvsp[0].expression)->falseList;
        }
#line 2719 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression  */
#line 865 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("conditional_expression => logical_OR_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2728 "y.tab.c"
    break;

  case 66: /* conditional_expression: logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 870 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("conditional_expression => logical_OR_expression ? expression : conditional_expression"); 
            (yyval.expression)->symbol = gentemp((yyvsp[-4].expression)->symbol->type->type);
            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            list<int> l = makeList(nextInstruction());
            emit("goto", "");
            backpatch((yyvsp[-3].statement)->nextList, nextInstruction());
            emit("=", (yyval.expression)->symbol->name, (yyvsp[-4].expression)->symbol->name);
            l = merge(l, makeList(nextInstruction()));
            emit("goto", "");
            backpatch((yyvsp[-7].statement)->nextList, nextInstruction());
            (yyvsp[-8].expression)->toBool();
            backpatch((yyvsp[-8].expression)->trueList, (yyvsp[-5].instruction_number));
            backpatch((yyvsp[-8].expression)->falseList, (yyvsp[-1].instruction_number));
            backpatch(l, nextInstruction());
        }
#line 2749 "y.tab.c"
    break;

  case 67: /* assignment_expression: conditional_expression  */
#line 890 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_expression => conditional_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2758 "y.tab.c"
    break;

  case 68: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 895 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_expression => unary_expression assignment_operator assignment_expression"); 
            if((yyvsp[-2].array)->type == Array::ARRAY) {
                // assignment to array
                (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->subArrayType->type);
                emit("[]=", (yyvsp[-2].array)->symbol->name, (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
            } else if((yyvsp[-2].array)->type == Array::POINTER) {
                // assignment to pointer
                (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->temp->type->type);
                emit("*=", (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
            } else {
                // assignment to other
                (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->symbol->type->type);
                emit("=", (yyvsp[-2].array)->symbol->name, (yyvsp[0].expression)->symbol->name);
            }
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2780 "y.tab.c"
    break;

  case 69: /* assignment_operator: ASSIGNMENT  */
#line 916 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => ="); 
        }
#line 2788 "y.tab.c"
    break;

  case 70: /* assignment_operator: ASTERISK_ASSIGNMENT  */
#line 920 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => *="); 
        }
#line 2796 "y.tab.c"
    break;

  case 71: /* assignment_operator: SLASH_ASSIGNMENT  */
#line 924 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => /="); 
        }
#line 2804 "y.tab.c"
    break;

  case 72: /* assignment_operator: MODULO_ASSIGNMENT  */
#line 928 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => %="); 
        }
#line 2812 "y.tab.c"
    break;

  case 73: /* assignment_operator: PLUS_ASSIGNMENT  */
#line 932 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => += "); 
        }
#line 2820 "y.tab.c"
    break;

  case 74: /* assignment_operator: MINUS_ASSIGNMENT  */
#line 936 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => -= "); 
        }
#line 2828 "y.tab.c"
    break;

  case 75: /* assignment_operator: LEFT_SHIFT_ASSIGNMENT  */
#line 940 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => <<="); 
        }
#line 2836 "y.tab.c"
    break;

  case 76: /* assignment_operator: RIGHT_SHIFT_ASSIGNMENT  */
#line 944 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => >>="); 
        }
#line 2844 "y.tab.c"
    break;

  case 77: /* assignment_operator: BITWISE_AND_ASSIGNMENT  */
#line 948 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => &="); 
        }
#line 2852 "y.tab.c"
    break;

  case 78: /* assignment_operator: BITWISE_XOR_ASSIGNMENT  */
#line 952 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => ^="); 
        }
#line 2860 "y.tab.c"
    break;

  case 79: /* assignment_operator: BITWISE_OR_ASSIGNMENT  */
#line 956 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("assignment_operator => |="); 
        }
#line 2868 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 963 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("expression => assignment_expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 2877 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 968 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("expression => expression , assignment_expression"); 
        }
#line 2885 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 975 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("constant_expression => conditional_expression"); 
        }
#line 2893 "y.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list_opt SEMI_COLON  */
#line 984 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); 
        }
#line 2901 "y.tab.c"
    break;

  case 84: /* init_declarator_list_opt: init_declarator_list  */
#line 991 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("init_declarator_list_opt => init_declarator_list"); 
        }
#line 2909 "y.tab.c"
    break;

  case 85: /* init_declarator_list_opt: %empty  */
#line 995 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("init_declarator_list_opt => epsilon"); 
        }
#line 2917 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 1002 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration_specifiers => storage_class_specifier declaration_specifiers_opt"); 
        }
#line 2925 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 1006 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); 
        }
#line 2933 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 1010 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration_specifiers => type_qualifier declaration_specifiers_opt"); 
        }
#line 2941 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 1014 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); 
        }
#line 2949 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: declaration_specifiers  */
#line 1021 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration_specifiers_opt => declaration_specifiers"); 
        }
#line 2957 "y.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 1025 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("declaration_specifiers_opt => epsilon "); 
        }
#line 2965 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 1032 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("init_declarator_list => init_declarator"); 
        }
#line 2973 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 1036 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("init_declarator_list => init_declarator_list , init_declarator"); 
        }
#line 2981 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator  */
#line 1043 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("init_declarator => declarator"); 
            (yyval.symbol) = (yyvsp[0].symbol);
        }
#line 2990 "y.tab.c"
    break;

  case 95: /* init_declarator: declarator ASSIGNMENT initialiser  */
#line 1048 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("init_declarator => declarator = initialiser");
            if((yyvsp[0].symbol)->initialValue != "") 
                (yyvsp[-2].symbol)->initialValue = (yyvsp[0].symbol)->initialValue;
            emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
        }
#line 3001 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 1058 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("storage_class_specifier => extern"); 
        }
#line 3009 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: STATIC  */
#line 1062 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("storage_class_specifier => static"); 
        }
#line 3017 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: AUTO  */
#line 1066 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("storage_class_specifier => auto"); 
        }
#line 3025 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: REGISTER  */
#line 1070 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("storage_class_specifier => register"); 
        }
#line 3033 "y.tab.c"
    break;

  case 100: /* type_specifier: VOID_TYPE  */
#line 1077 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_specifier => void");
            currentType = SymbolType::VOID;
        }
#line 3042 "y.tab.c"
    break;

  case 101: /* type_specifier: CHAR_TYPE  */
#line 1082 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_specifier => char"); 
            currentType = SymbolType::CHAR;
        }
#line 3051 "y.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 1087 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("type_specifier => short"); 
        }
#line 3059 "y.tab.c"
    break;

  case 103: /* type_specifier: INT_TYPE  */
#line 1091 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_specifier => int"); 
            currentType = SymbolType::INT;
        }
#line 3068 "y.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 1096 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("type_specifier => long"); 
        }
#line 3076 "y.tab.c"
    break;

  case 105: /* type_specifier: FLOAT_TYPE  */
#line 1100 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_specifier => float"); 
            currentType = SymbolType::FLOAT;
        }
#line 3085 "y.tab.c"
    break;

  case 106: /* type_specifier: DOUBLE  */
#line 1105 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("type_specifier => double"); 
        }
#line 3093 "y.tab.c"
    break;

  case 107: /* type_specifier: SIGNED  */
#line 1109 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("type_specifier => signed"); 
        }
#line 3101 "y.tab.c"
    break;

  case 108: /* type_specifier: UNSIGNED  */
#line 1113 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("type_specifier => unsigned"); 
        }
#line 3109 "y.tab.c"
    break;

  case 109: /* type_specifier: enum_specifier  */
#line 1129 "asgn6_20CS30030_20CS30024.y"
        {
                yyinfo("type_specifier => enum_specifier"); 
        }
#line 3117 "y.tab.c"
    break;

  case 110: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 1136 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); 
        }
#line 3125 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 1140 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt"); 
        }
#line 3133 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 1147 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); 
        }
#line 3141 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list_opt: %empty  */
#line 1151 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("specifier_qualifier_list_opt => epsilon"); 
        }
#line 3149 "y.tab.c"
    break;

  case 114: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACKET enumerator_list RIGHT_CURLY_BRACKET  */
#line 1158 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enum_specifier => enum identifier_opt { enumerator_list }"); 
        }
#line 3157 "y.tab.c"
    break;

  case 115: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACKET enumerator_list COMMA RIGHT_CURLY_BRACKET  */
#line 1162 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enum_specifier => enum identifier_opt { enumerator_list , }"); 
        }
#line 3165 "y.tab.c"
    break;

  case 116: /* enum_specifier: ENUM IDENTIFIER  */
#line 1166 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enum_specifier => enum IDENTIFIER"); 
        }
#line 3173 "y.tab.c"
    break;

  case 117: /* identifier_opt: IDENTIFIER  */
#line 1173 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("identifier_opt => IDENTIFIER"); 
        }
#line 3181 "y.tab.c"
    break;

  case 118: /* identifier_opt: %empty  */
#line 1177 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("identifier_opt => epsilon"); 
        }
#line 3189 "y.tab.c"
    break;

  case 119: /* enumerator_list: enumerator  */
#line 1184 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enumerator_list => enumerator"); 
        }
#line 3197 "y.tab.c"
    break;

  case 120: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 1188 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enumerator_list => enumerator_list , enumerator"); 
        }
#line 3205 "y.tab.c"
    break;

  case 121: /* enumerator: IDENTIFIER  */
#line 1195 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enumerator => ENUMERATION_CONSTANT"); 
        }
#line 3213 "y.tab.c"
    break;

  case 122: /* enumerator: IDENTIFIER ASSIGNMENT constant_expression  */
#line 1199 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("enumerator => ENUMERATION_CONSTANT = constant_expression"); 
        }
#line 3221 "y.tab.c"
    break;

  case 123: /* type_qualifier: CONST  */
#line 1206 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier => const"); 
        }
#line 3229 "y.tab.c"
    break;

  case 124: /* type_qualifier: RESTRICT  */
#line 1210 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier => restrict"); 
        }
#line 3237 "y.tab.c"
    break;

  case 125: /* type_qualifier: VOLATILE  */
#line 1214 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier => volatile"); 
        }
#line 3245 "y.tab.c"
    break;

  case 126: /* function_specifier: INLINE  */
#line 1221 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("function_specifier => inline"); 
        }
#line 3253 "y.tab.c"
    break;

  case 127: /* declarator: pointer direct_declarator  */
#line 1228 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("declarator => pointer direct_declarator"); 
            SymbolType *it = (yyvsp[-1].symbolType);
            while(it->arrayType != NULL) 
                it = it->arrayType;
            it->arrayType = (yyvsp[0].symbol)->type;
            (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].symbolType));
        }
#line 3266 "y.tab.c"
    break;

  case 128: /* declarator: direct_declarator  */
#line 1237 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("declarator => direct_declarator"); 
        }
#line 3274 "y.tab.c"
    break;

  case 129: /* change_scope: %empty  */
#line 1243 "asgn6_20CS30030_20CS30024.y"
        {
            if(currentSymbol->nestedTable == NULL) {
                changeTable(new SymbolTable(""));
            }
            else {
                changeTable(currentSymbol->nestedTable);
                emit("label", currentTable->name);
            }
        }
#line 3288 "y.tab.c"
    break;

  case 130: /* direct_declarator: IDENTIFIER  */
#line 1260 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => IDENTIFIER"); 
            (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType)); // update type to the last type seen
            currentSymbol = (yyval.symbol);
        }
#line 3298 "y.tab.c"
    break;

  case 131: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 1266 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => ( declarator )"); 
            (yyval.symbol) = (yyvsp[-1].symbol);
        }
#line 3307 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1271 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
        }
#line 3315 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list RIGHT_SQUARE_BRACKET  */
#line 1275 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
        }
#line 3323 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1279 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
            SymbolType *it1 = (yyvsp[-3].symbol)->type, *it2 = NULL;
            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                it2 = it1;
                it1 = it1->arrayType;
            }
            if(it2 != NULL) {
                // another level of nesting with base as it1 and width the value of assignment_expression
                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, atoi((yyvsp[-1].expression)->symbol->initialValue.c_str()));	
                (yyval.symbol) = (yyvsp[-3].symbol)->update((yyvsp[-3].symbol)->type);
            }
            else {
                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                (yyval.symbol) = (yyvsp[-3].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-3].symbol)->type, atoi((yyvsp[-1].expression)->symbol->initialValue.c_str())));
            }
        }
#line 3345 "y.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 1297 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ ]"); 
            // same as the previous rule, just we dont know the size so put it as 0
            SymbolType *it1 = (yyvsp[-2].symbol)->type, *it2 = NULL;
            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                it2 = it1;
                it1 = it1->arrayType;
            }
            if(it2 != NULL) {
                // another level of nesting with base as it1 and width the value of assignment_expression
                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, 0);	
                (yyval.symbol) = (yyvsp[-2].symbol)->update((yyvsp[-2].symbol)->type);
            }
            else {
                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                (yyval.symbol) = (yyvsp[-2].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-2].symbol)->type, 0));
            }
        }
#line 3368 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1316 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
        }
#line 3376 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1320 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
        }
#line 3384 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1324 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
        }
#line 3392 "y.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list ASTERISK RIGHT_SQUARE_BRACKET  */
#line 1328 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
        }
#line 3400 "y.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET ASTERISK RIGHT_SQUARE_BRACKET  */
#line 1332 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator [ * ]"); 
        }
#line 3408 "y.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope parameter_type_list RIGHT_PARENTHESES  */
#line 1336 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator ( parameter_type_list )"); 
            // function declaration
            currentTable->name = (yyvsp[-4].symbol)->name;
            if((yyvsp[-4].symbol)->type->type != SymbolType::VOID) {
                currentTable->lookup("return")->update((yyvsp[-4].symbol)->type);
            }
            // move back to the global table and set the nested table for the function
            (yyvsp[-4].symbol)->nestedTable = currentTable;
            (yyvsp[-4].symbol)->category = Symbol::FUNCTION;
            currentTable->parent = globalTable;
            changeTable(globalTable);
            currentSymbol = (yyval.symbol);
        }
#line 3427 "y.tab.c"
    break;

  case 142: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 1351 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
        }
#line 3435 "y.tab.c"
    break;

  case 143: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope RIGHT_PARENTHESES  */
#line 1355 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("direct_declarator => direct_declarator ( )"); 
            // same as the previous rule
            currentTable->name = (yyvsp[-3].symbol)->name;
            if((yyvsp[-3].symbol)->type->type != SymbolType::VOID) {
                // set type of return value
                currentTable->lookup("return")->update((yyvsp[-3].symbol)->type);
            }
            // move back to the global table and set the nested table for the function
            (yyvsp[-3].symbol)->nestedTable = currentTable;
            (yyvsp[-3].symbol)->category = Symbol::FUNCTION;
            currentTable->parent = globalTable;
            changeTable(globalTable);
            currentSymbol = (yyval.symbol);
        }
#line 3455 "y.tab.c"
    break;

  case 144: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1374 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier_list_opt => type_qualifier_list"); 
        }
#line 3463 "y.tab.c"
    break;

  case 145: /* type_qualifier_list_opt: %empty  */
#line 1378 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier_list_opt => epsilon"); 
        }
#line 3471 "y.tab.c"
    break;

  case 146: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 1385 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("pointer => * type_qualifier_list_opt"); 
            // fresh pointer
            (yyval.symbolType) = new SymbolType(SymbolType::POINTER);
        }
#line 3481 "y.tab.c"
    break;

  case 147: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 1391 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("pointer => * type_qualifier_list_opt pointer"); 
            // nested pointer
            (yyval.symbolType) = new SymbolType(SymbolType::POINTER, (yyvsp[0].symbolType));
        }
#line 3491 "y.tab.c"
    break;

  case 148: /* type_qualifier_list: type_qualifier  */
#line 1400 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier_list => type_qualifier"); 
        }
#line 3499 "y.tab.c"
    break;

  case 149: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1404 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_qualifier_list => type_qualifier_list type_qualifier"); 
        }
#line 3507 "y.tab.c"
    break;

  case 150: /* parameter_type_list: parameter_list  */
#line 1411 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("parameter_type_list => parameter_list"); 
        }
#line 3515 "y.tab.c"
    break;

  case 151: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1415 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("parameter_type_list => parameter_list , ..."); 
        }
#line 3523 "y.tab.c"
    break;

  case 152: /* parameter_list: parameter_declaration  */
#line 1422 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("parameter_list => parameter_declaration"); 
        }
#line 3531 "y.tab.c"
    break;

  case 153: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1426 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("parameter_list => parameter_list , parameter_declaration"); 
        }
#line 3539 "y.tab.c"
    break;

  case 154: /* parameter_declaration: declaration_specifiers declarator  */
#line 1433 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("parameter_declaration => declaration_specifiers declarator");
            (yyvsp[0].symbol)->category = Symbol::PARAMETER; 
            currentTable->parameters.push_back((yyvsp[0].symbol)->name);
        }
#line 3549 "y.tab.c"
    break;

  case 155: /* parameter_declaration: declaration_specifiers  */
#line 1439 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("parameter_declaration => declaration_specifiers"); 
        }
#line 3557 "y.tab.c"
    break;

  case 156: /* identifier_list: IDENTIFIER  */
#line 1446 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("identifier_list => IDENTIFIER"); 
        }
#line 3565 "y.tab.c"
    break;

  case 157: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1450 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("identifier_list => identifier_list , IDENTIFIER"); 
        }
#line 3573 "y.tab.c"
    break;

  case 158: /* type_name: specifier_qualifier_list  */
#line 1457 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("type_name => specifier_qualifier_list"); 
        }
#line 3581 "y.tab.c"
    break;

  case 159: /* initialiser: assignment_expression  */
#line 1464 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("initialiser => assignment_expression"); 
            (yyval.symbol) = (yyvsp[0].expression)->symbol;
        }
#line 3590 "y.tab.c"
    break;

  case 160: /* initialiser: LEFT_CURLY_BRACKET initialiser_list RIGHT_CURLY_BRACKET  */
#line 1469 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("initialiser => { initialiser_list }"); 
        }
#line 3598 "y.tab.c"
    break;

  case 161: /* initialiser: LEFT_CURLY_BRACKET initialiser_list COMMA RIGHT_CURLY_BRACKET  */
#line 1473 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("initialiser => { initialiser_list , }"); 
        }
#line 3606 "y.tab.c"
    break;

  case 162: /* initialiser_list: designation_opt initialiser  */
#line 1480 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("initialiser_list => designation_opt initialiser"); 
        }
#line 3614 "y.tab.c"
    break;

  case 163: /* initialiser_list: initialiser_list COMMA designation_opt initialiser  */
#line 1484 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); 
        }
#line 3622 "y.tab.c"
    break;

  case 164: /* designation_opt: designation  */
#line 1491 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designation_opt => designation"); 
        }
#line 3630 "y.tab.c"
    break;

  case 165: /* designation_opt: %empty  */
#line 1495 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designation_opt => epsilon"); 
        }
#line 3638 "y.tab.c"
    break;

  case 166: /* designation: designator_list ASSIGNMENT  */
#line 1502 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designation => designator_list ="); 
        }
#line 3646 "y.tab.c"
    break;

  case 167: /* designator_list: designator  */
#line 1509 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designator_list => designator"); 
        }
#line 3654 "y.tab.c"
    break;

  case 168: /* designator_list: designator_list designator  */
#line 1513 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designator_list => designator_list designator"); 
        }
#line 3662 "y.tab.c"
    break;

  case 169: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 1520 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designator => [ constant_expression ]"); 
        }
#line 3670 "y.tab.c"
    break;

  case 170: /* designator: DOT IDENTIFIER  */
#line 1524 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("designator => . IDENTIFIER"); 
        }
#line 3678 "y.tab.c"
    break;

  case 171: /* statement: labeled_statement  */
#line 1533 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("statement => labeled_statement"); 
        }
#line 3686 "y.tab.c"
    break;

  case 172: /* statement: compound_statement  */
#line 1537 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("statement => compound_statement");
            (yyval.statement) = (yyvsp[0].statement); 
        }
#line 3695 "y.tab.c"
    break;

  case 173: /* statement: expression_statement  */
#line 1542 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("statement => expression_statement"); 
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = (yyvsp[0].expression)->nextList;
        }
#line 3705 "y.tab.c"
    break;

  case 174: /* statement: selection_statement  */
#line 1548 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("statement => selection_statement"); 
            (yyval.statement) = (yyvsp[0].statement);
        }
#line 3714 "y.tab.c"
    break;

  case 175: /* statement: iteration_statement  */
#line 1553 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("statement => iteration_statement"); 
            (yyval.statement) = (yyvsp[0].statement);
        }
#line 3723 "y.tab.c"
    break;

  case 176: /* statement: jump_statement  */
#line 1558 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("statement => jump_statement"); 
            (yyval.statement) = (yyvsp[0].statement);
        }
#line 3732 "y.tab.c"
    break;

  case 177: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1566 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("labeled_statement => IDENTIFIER : statement"); 
        }
#line 3740 "y.tab.c"
    break;

  case 178: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1570 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("labeled_statement => case constant_expression : statement"); 
        }
#line 3748 "y.tab.c"
    break;

  case 179: /* labeled_statement: DEFAULT COLON statement  */
#line 1574 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("labeled_statement => default : statement"); 
        }
#line 3756 "y.tab.c"
    break;

  case 180: /* compound_statement: LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1592 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("compound_statement => { block_item_list_opt }"); 
            (yyval.statement) = (yyvsp[-1].statement);
         }
#line 3765 "y.tab.c"
    break;

  case 181: /* block_item_list_opt: block_item_list  */
#line 1600 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("block_item_list_opt => block_item_list"); 
            (yyval.statement) = (yyvsp[0].statement);
        }
#line 3774 "y.tab.c"
    break;

  case 182: /* block_item_list_opt: %empty  */
#line 1605 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("block_item_list_opt => epsilon"); 
            (yyval.statement) = new Statement();
        }
#line 3783 "y.tab.c"
    break;

  case 183: /* block_item_list: block_item  */
#line 1613 "asgn6_20CS30030_20CS30024.y"
        {
            yyinfo("block_item_list => block_item"); 
            (yyval.statement) = (yyvsp[0].statement);
        }
#line 3792 "y.tab.c"
    break;

  case 184: /* block_item_list: block_item_list M block_item  */
#line 1618 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("block_item_list => block_item_list block_item"); 
            (yyval.statement) = (yyvsp[0].statement);
            // after completion of block_item_list(1) we move to block_item(3)
            backpatch((yyvsp[-2].statement)->nextList,(yyvsp[-1].instruction_number));
        }
#line 3803 "y.tab.c"
    break;

  case 185: /* block_item: declaration  */
#line 1628 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("block_item => declaration"); 
            (yyval.statement) = new Statement();
        }
#line 3812 "y.tab.c"
    break;

  case 186: /* block_item: statement  */
#line 1633 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("block_item => statement"); 
            (yyval.statement) = (yyvsp[0].statement);
        }
#line 3821 "y.tab.c"
    break;

  case 187: /* expression_statement: expression_opt SEMI_COLON  */
#line 1641 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("expression_statement => expression_opt ;"); 
            (yyval.expression) = (yyvsp[-1].expression);
        }
#line 3830 "y.tab.c"
    break;

  case 188: /* expression_opt: expression  */
#line 1649 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("expression_opt => expression"); 
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 3839 "y.tab.c"
    break;

  case 189: /* expression_opt: %empty  */
#line 1654 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("expression_opt => epsilon"); 
            (yyval.expression) = new Expression();
        }
#line 3848 "y.tab.c"
    break;

  case 190: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N  */
#line 1674 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("selection_statement => if ( expression ) statement"); 
            (yyval.statement) = new Statement();
            (yyvsp[-4].expression)->toBool();
            backpatch((yyvsp[-4].expression)->trueList, (yyvsp[-2].instruction_number)); // if true go to M
            (yyval.statement)->nextList = merge((yyvsp[-4].expression)->falseList, merge((yyvsp[-1].statement)->nextList, (yyvsp[0].statement)->nextList)); // exits
        }
#line 3860 "y.tab.c"
    break;

  case 191: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N ELSE M statement  */
#line 1682 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("selection_statement => if ( expression ) statement else statement"); 
            (yyval.statement) = new Statement();
            (yyvsp[-7].expression)->toBool();
            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-5].instruction_number)); // if true go to M
            backpatch((yyvsp[-7].expression)->falseList, (yyvsp[-1].instruction_number)); // if false go to else
            (yyval.statement)->nextList = merge((yyvsp[0].statement)->nextList, merge((yyvsp[-4].statement)->nextList, (yyvsp[-3].statement)->nextList)); // exits
        }
#line 3873 "y.tab.c"
    break;

  case 192: /* selection_statement: SWITCH LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 1691 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("selection_statement => switch ( expression ) statement"); 
        }
#line 3881 "y.tab.c"
    break;

  case 193: /* iteration_statement: WHILE M LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement  */
#line 1717 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("iteration_statement => while ( expression ) statement"); 
            (yyval.statement) = new Statement();
            (yyvsp[-3].expression)->toBool();
            backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instruction_number)); // after statement go back to M1
            backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instruction_number)); // if true go to M2
            (yyval.statement)->nextList = (yyvsp[-3].expression)->falseList; // exit if false
            emit("goto", toString((yyvsp[-5].instruction_number)));
        }
#line 3895 "y.tab.c"
    break;

  case 194: /* iteration_statement: DO M statement M WHILE LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMI_COLON  */
#line 1727 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("iteration_statement => do statement while ( expression ) ;"); 
            (yyval.statement) = new Statement();
            (yyvsp[-2].expression)->toBool();
            backpatch((yyvsp[-2].expression)->trueList, (yyvsp[-7].instruction_number)); // if true go back to M1
            backpatch((yyvsp[-6].statement)->nextList, (yyvsp[-5].instruction_number)); // after statement is executed go to M2
            (yyval.statement)->nextList = (yyvsp[-2].expression)->falseList; // exit if false
        }
#line 3908 "y.tab.c"
    break;

  case 195: /* iteration_statement: FOR LEFT_PARENTHESES expression_opt SEMI_COLON M expression_opt SEMI_COLON M expression_opt N RIGHT_PARENTHESES M statement  */
#line 1736 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement"); 
            (yyval.statement) = new Statement();
            (yyvsp[-7].expression)->toBool();
            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-1].instruction_number)); // if true go to M3 (loop body)
            backpatch((yyvsp[-3].statement)->nextList, (yyvsp[-8].instruction_number)); // after N go to M1 (condition check)
            backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instruction_number)); // after S1 (loop body) go to M2 (increment/decrement/any other operation)
            emit("goto", toString((yyvsp[-5].instruction_number)));
            (yyval.statement)->nextList = (yyvsp[-7].expression)->falseList; // exit if false
        }
#line 3923 "y.tab.c"
    break;

  case 196: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_opt SEMI_COLON expression_opt RIGHT_PARENTHESES statement  */
#line 1747 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); 
        }
#line 3931 "y.tab.c"
    break;

  case 197: /* jump_statement: GOTO IDENTIFIER SEMI_COLON  */
#line 1754 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("jump_statement => goto IDENTIFIER ;"); 
        }
#line 3939 "y.tab.c"
    break;

  case 198: /* jump_statement: CONTINUE SEMI_COLON  */
#line 1758 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("jump_statement => continue ;"); 
        }
#line 3947 "y.tab.c"
    break;

  case 199: /* jump_statement: BREAK SEMI_COLON  */
#line 1762 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("jump_statement => break ;"); 
        }
#line 3955 "y.tab.c"
    break;

  case 200: /* jump_statement: RETURN expression_opt SEMI_COLON  */
#line 1766 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("jump_statement => return expression_opt ;"); 
            (yyval.statement) = new Statement();
            if((yyvsp[-1].expression)->symbol != NULL) {
                emit("return", (yyvsp[-1].expression)->symbol->name); 
            } else {
                emit("return", "");
            }
        }
#line 3969 "y.tab.c"
    break;

  case 201: /* translation_unit: external_declaration  */
#line 1781 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("translation_unit => external_declaration"); 
        }
#line 3977 "y.tab.c"
    break;

  case 202: /* translation_unit: translation_unit external_declaration  */
#line 1785 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("translation_unit => translation_unit external_declaration"); 
        }
#line 3985 "y.tab.c"
    break;

  case 203: /* external_declaration: function_definition  */
#line 1792 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("external_declaration => function_definition"); 
        }
#line 3993 "y.tab.c"
    break;

  case 204: /* external_declaration: declaration  */
#line 1796 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("external_declaration => declaration"); 
        }
#line 4001 "y.tab.c"
    break;

  case 205: /* function_definition: declaration_specifiers declarator declaration_list_opt change_scope LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1804 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); 
            tableCount = 0;
            emit("labelend", (yyvsp[-5].symbol)->name);
            if((yyvsp[-5].symbol)->type->type != SymbolType::VOID) {
                // set type of return value
                currentTable->lookup("return")->update((yyvsp[-5].symbol)->type);
            }
           changeTable(globalTable);
        }
#line 4016 "y.tab.c"
    break;

  case 206: /* declaration_list_opt: declaration_list  */
#line 1818 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("declaration_list_opt => declaration_list"); 
        }
#line 4024 "y.tab.c"
    break;

  case 207: /* declaration_list_opt: %empty  */
#line 1822 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("declaration_list_opt => epsilon"); 
        }
#line 4032 "y.tab.c"
    break;

  case 208: /* declaration_list: declaration  */
#line 1829 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("declaration_list => declaration"); 
        }
#line 4040 "y.tab.c"
    break;

  case 209: /* declaration_list: declaration_list declaration  */
#line 1833 "asgn6_20CS30030_20CS30024.y"
        { 
            yyinfo("declaration_list => declaration_list declaration"); 
        }
#line 4048 "y.tab.c"
    break;


#line 4052 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1838 "asgn6_20CS30030_20CS30024.y"


void yyerror(string s) {
    printf("error occured at line #%d : %s\n", yylineno, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("line #%d : %s\n", yylineno, s.c_str());
    #endif
}
