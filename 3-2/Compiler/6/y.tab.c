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
#line 1 "calc.y"

#include <stdio.h>
#include <stdlib.h>
#include "type.h"	

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;	

extern int line_no, syntax_err, semantic_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;
FILE *fout;

int yylex();
void yyerror(char *s);

#line 90 "y.tab.c"

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
# define YYDEBUG 0
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 261,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 262,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 263,          /* STRING_LITERAL  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    PLUSPLUS = 266,                /* PLUSPLUS  */
    MINUSMINUS = 267,              /* MINUSMINUS  */
    BAR = 268,                     /* BAR  */
    AMP = 269,                     /* AMP  */
    BARBAR = 270,                  /* BARBAR  */
    AMPAMP = 271,                  /* AMPAMP  */
    ARROW = 272,                   /* ARROW  */
    SEMICOLON = 273,               /* SEMICOLON  */
    LSS = 274,                     /* LSS  */
    GTR = 275,                     /* GTR  */
    LEQ = 276,                     /* LEQ  */
    GEQ = 277,                     /* GEQ  */
    EQL = 278,                     /* EQL  */
    NEQ = 279,                     /* NEQ  */
    DOTDOTDOT = 280,               /* DOTDOTDOT  */
    LP = 281,                      /* LP  */
    RP = 282,                      /* RP  */
    LB = 283,                      /* LB  */
    RB = 284,                      /* RB  */
    LR = 285,                      /* LR  */
    RR = 286,                      /* RR  */
    PERIOD = 287,                  /* PERIOD  */
    COMMA = 288,                   /* COMMA  */
    EXCL = 289,                    /* EXCL  */
    STAR = 290,                    /* STAR  */
    SLASH = 291,                   /* SLASH  */
    PERCENT = 292,                 /* PERCENT  */
    ASSIGN = 293,                  /* ASSIGN  */
    COLON = 294,                   /* COLON  */
    AUTO_SYM = 295,                /* AUTO_SYM  */
    STATIC_SYM = 296,              /* STATIC_SYM  */
    TYPEDEF_SYM = 297,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 298,              /* STRUCT_SYM  */
    ENUM_SYM = 299,                /* ENUM_SYM  */
    SIZEOF_SYM = 300,              /* SIZEOF_SYM  */
    UNION_SYM = 301,               /* UNION_SYM  */
    IF_SYM = 302,                  /* IF_SYM  */
    ELSE_SYM = 303,                /* ELSE_SYM  */
    WHILE_SYM = 304,               /* WHILE_SYM  */
    DO_SYM = 305,                  /* DO_SYM  */
    FOR_SYM = 306,                 /* FOR_SYM  */
    CONTINUE_SYM = 307,            /* CONTINUE_SYM  */
    BREAK_SYM = 308,               /* BREAK_SYM  */
    RETURN_SYM = 309,              /* RETURN_SYM  */
    SWITCH_SYM = 310,              /* SWITCH_SYM  */
    CASE_SYM = 311,                /* CASE_SYM  */
    DEFAULT_SYM = 312              /* DEFAULT_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define BAR 268
#define AMP 269
#define BARBAR 270
#define AMPAMP 271
#define ARROW 272
#define SEMICOLON 273
#define LSS 274
#define GTR 275
#define LEQ 276
#define GEQ 277
#define EQL 278
#define NEQ 279
#define DOTDOTDOT 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LR 285
#define RR 286
#define PERIOD 287
#define COMMA 288
#define EXCL 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define COLON 294
#define AUTO_SYM 295
#define STATIC_SYM 296
#define TYPEDEF_SYM 297
#define STRUCT_SYM 298
#define ENUM_SYM 299
#define SIZEOF_SYM 300
#define UNION_SYM 301
#define IF_SYM 302
#define ELSE_SYM 303
#define WHILE_SYM 304
#define DO_SYM 305
#define FOR_SYM 306
#define CONTINUE_SYM 307
#define BREAK_SYM 308
#define RETURN_SYM 309
#define SWITCH_SYM 310
#define CASE_SYM 311
#define DEFAULT_SYM 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 6,           /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_PLUSPLUS = 11,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 12,                /* MINUSMINUS  */
  YYSYMBOL_BAR = 13,                       /* BAR  */
  YYSYMBOL_AMP = 14,                       /* AMP  */
  YYSYMBOL_BARBAR = 15,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 16,                    /* AMPAMP  */
  YYSYMBOL_ARROW = 17,                     /* ARROW  */
  YYSYMBOL_SEMICOLON = 18,                 /* SEMICOLON  */
  YYSYMBOL_LSS = 19,                       /* LSS  */
  YYSYMBOL_GTR = 20,                       /* GTR  */
  YYSYMBOL_LEQ = 21,                       /* LEQ  */
  YYSYMBOL_GEQ = 22,                       /* GEQ  */
  YYSYMBOL_EQL = 23,                       /* EQL  */
  YYSYMBOL_NEQ = 24,                       /* NEQ  */
  YYSYMBOL_DOTDOTDOT = 25,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 26,                        /* LP  */
  YYSYMBOL_RP = 27,                        /* RP  */
  YYSYMBOL_LB = 28,                        /* LB  */
  YYSYMBOL_RB = 29,                        /* RB  */
  YYSYMBOL_LR = 30,                        /* LR  */
  YYSYMBOL_RR = 31,                        /* RR  */
  YYSYMBOL_PERIOD = 32,                    /* PERIOD  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_EXCL = 34,                      /* EXCL  */
  YYSYMBOL_STAR = 35,                      /* STAR  */
  YYSYMBOL_SLASH = 36,                     /* SLASH  */
  YYSYMBOL_PERCENT = 37,                   /* PERCENT  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_COLON = 39,                     /* COLON  */
  YYSYMBOL_AUTO_SYM = 40,                  /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 41,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 42,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 43,                /* STRUCT_SYM  */
  YYSYMBOL_ENUM_SYM = 44,                  /* ENUM_SYM  */
  YYSYMBOL_SIZEOF_SYM = 45,                /* SIZEOF_SYM  */
  YYSYMBOL_UNION_SYM = 46,                 /* UNION_SYM  */
  YYSYMBOL_IF_SYM = 47,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 48,                  /* ELSE_SYM  */
  YYSYMBOL_WHILE_SYM = 49,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 50,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 51,                   /* FOR_SYM  */
  YYSYMBOL_CONTINUE_SYM = 52,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 53,                 /* BREAK_SYM  */
  YYSYMBOL_RETURN_SYM = 54,                /* RETURN_SYM  */
  YYSYMBOL_SWITCH_SYM = 55,                /* SWITCH_SYM  */
  YYSYMBOL_CASE_SYM = 56,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 57,               /* DEFAULT_SYM  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_translation_unit = 60,          /* translation_unit  */
  YYSYMBOL_external_declaration = 61,      /* external_declaration  */
  YYSYMBOL_function_definition = 62,       /* function_definition  */
  YYSYMBOL_63_1 = 63,                      /* @1  */
  YYSYMBOL_64_2 = 64,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 65,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 66,          /* declaration_list  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 68,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 69,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 70,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 71,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 72,           /* init_declarator  */
  YYSYMBOL_initializer = 73,               /* initializer  */
  YYSYMBOL_initializer_list = 74,          /* initializer_list  */
  YYSYMBOL_type_specifier = 75,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 76,     /* struct_type_specifier  */
  YYSYMBOL_77_3 = 77,                      /* @3  */
  YYSYMBOL_78_4 = 78,                      /* @4  */
  YYSYMBOL_79_5 = 79,                      /* @5  */
  YYSYMBOL_80_6 = 80,                      /* @6  */
  YYSYMBOL_struct_or_union = 81,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 82,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 83,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 84,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 85,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 86,       /* enum_type_specifier  */
  YYSYMBOL_87_7 = 87,                      /* @7  */
  YYSYMBOL_88_8 = 88,                      /* @8  */
  YYSYMBOL_enumerator_list = 89,           /* enumerator_list  */
  YYSYMBOL_enumerator = 90,                /* enumerator  */
  YYSYMBOL_91_9 = 91,                      /* @9  */
  YYSYMBOL_declarator = 92,                /* declarator  */
  YYSYMBOL_pointer = 93,                   /* pointer  */
  YYSYMBOL_direct_declarator = 94,         /* direct_declarator  */
  YYSYMBOL_95_10 = 95,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 96,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 97,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 98,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 99,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 100,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 101,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 102, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 103,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 104,           /* statement_list  */
  YYSYMBOL_statement = 105,                /* statement  */
  YYSYMBOL_labeled_statement = 106,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 107,       /* compound_statement  */
  YYSYMBOL_108_11 = 108,                   /* @11  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_selection_statement = 110,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 111,      /* iteration_statement  */
  YYSYMBOL_for_expression = 112,           /* for_expression  */
  YYSYMBOL_expression_opt = 113,           /* expression_opt  */
  YYSYMBOL_jump_statement = 114,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 115,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 116,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 117,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 118,      /* constant_expression  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_comma_expression = 120,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 121,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 122,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 124,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 125,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 126,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 127,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 128,      /* equality_expression  */
  YYSYMBOL_relational_expression = 129,    /* relational_expression  */
  YYSYMBOL_shift_expression = 130,         /* shift_expression  */
  YYSYMBOL_additive_expression = 131,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 132, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 133,          /* cast_expression  */
  YYSYMBOL_unary_expression = 134,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 135,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 136,       /* primary_expression  */
  YYSYMBOL_137_12 = 137,                   /* @12  */
  YYSYMBOL_type_name = 138                 /* type_name  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    26,    26,    29,    30,    33,    34,    37,    37,    39,
      39,    43,    44,    47,    48,    51,    54,    55,    56,    57,
      60,    61,    62,    65,    66,    69,    70,    73,    74,    77,
      78,    81,    82,    85,    86,    87,    90,    90,    90,    92,
      92,    92,    94,    97,    98,   101,   102,   105,   108,   109,
     112,   115,   115,   117,   117,   119,   122,   123,   126,   127,
     127,   131,   132,   135,   136,   139,   140,   141,   142,   142,
     147,   148,   151,   152,   155,   156,   159,   160,   164,   165,
     168,   169,   170,   173,   174,   175,   176,   178,   181,   182,
     185,   186,   189,   190,   191,   192,   193,   194,   197,   198,
     201,   201,   205,   206,   209,   210,   211,   214,   215,   216,
     219,   222,   223,   226,   227,   228,   231,   232,   235,   236,
     239,   240,   243,   246,   249,   252,   253,   256,   259,   260,
     263,   264,   267,   270,   273,   276,   277,   278,   281,   282,
     283,   284,   285,   288,   291,   292,   293,   296,   297,   298,
     299,   302,   303,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   318,   319,   320,   321,   322,   323,   324,
     327,   328,   329,   330,   331,   331,   335
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "@12", "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-233)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     201,  -233,  -233,    38,    -2,  -233,  -233,  -233,  -233,    39,
    -233,    75,   201,  -233,  -233,  -233,    38,    90,    90,  -233,
     102,  -233,  -233,    31,    34,    84,  -233,   107,   116,  -233,
    -233,   132,   131,  -233,     6,  -233,  -233,   146,   162,   168,
      34,  -233,   272,  -233,   169,   117,  -233,    38,   259,   168,
     172,  -233,  -233,  -233,    90,  -233,  -233,  -233,  -233,  -233,
     272,   272,   326,   326,   272,    90,   272,   272,   313,   141,
    -233,  -233,  -233,  -233,  -233,   178,   190,  -233,  -233,  -233,
      25,   123,  -233,    82,   121,  -233,   179,   361,  -233,   117,
     182,    92,  -233,  -233,   194,   259,  -233,  -233,  -233,  -233,
      52,    90,   193,   206,  -233,   213,  -233,   224,  -233,  -233,
    -233,  -233,  -233,  -233,   100,   225,  -233,  -233,    90,  -233,
    -233,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,  -233,  -233,   260,   272,   272,
     269,   129,   236,  -233,   117,  -233,   140,    52,    38,   144,
    -233,   204,    90,  -233,    38,   137,   272,  -233,    87,  -233,
    -233,   163,  -233,    26,   272,   324,   203,  -233,   272,   249,
     190,  -233,   123,   123,  -233,  -233,  -233,  -233,   121,   121,
    -233,  -233,  -233,  -233,  -233,   261,   254,  -233,   262,  -233,
    -233,   272,  -233,  -233,   259,   151,    10,  -233,  -233,  -233,
    -233,  -233,   264,   266,   204,   270,   277,   279,   272,   273,
     272,   263,   274,   204,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,   282,  -233,   276,   281,   280,   163,    90,   272,  -233,
    -233,   283,  -233,  -233,  -233,   272,  -233,  -233,  -233,  -233,
    -233,    38,   272,   272,   252,   272,  -233,  -233,   293,  -233,
     272,   275,   204,  -233,  -233,  -233,  -233,  -233,  -233,   285,
     284,  -233,  -233,  -233,   288,   299,   304,   314,   325,  -233,
     315,   204,  -233,  -233,  -233,   204,   204,   272,   204,   272,
     204,  -233,   296,  -233,   318,  -233,   328,  -233,   204,   331,
     272,  -233,  -233,  -233
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,     0,   160,   151,
     159,   154,   155,   156,    78,     0,   158,   157,     0,   161,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,     0,   116,     0,
       0,     0,     0,    54,     0,    31,     0,     0,     0,     0,
      45,    88,    12,    13,    23,    70,   120,    76,    81,    77,
      79,    80,    69,     0,     0,    70,    81,   176,     0,     0,
     129,   131,   136,   137,   139,   140,   141,   142,   145,   146,
     148,   149,   150,   126,   167,     0,   117,   118,     0,   166,
      52,     0,    57,    30,     0,     0,     0,    48,    50,    41,
      46,   102,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,    89,    90,    92,    93,    94,    95,    96,
      97,     0,    14,     0,     0,     0,    82,    70,   120,    73,
      75,     0,   152,   162,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,   112,
       0,     0,     0,   101,    91,   103,    85,    83,    84,     0,
       0,   175,   119,    49,     0,     0,     0,     0,     0,   113,
       0,     0,    99,    87,    86,     0,     0,     0,     0,   111,
       0,    98,   104,   107,     0,   109,     0,   106,     0,     0,
     111,   105,   108,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,  -233,   339,  -233,  -233,  -233,  -233,  -233,   -87,
       9,  -233,  -233,  -233,   306,   -85,  -233,   -88,  -233,  -233,
    -233,  -233,  -233,  -233,   207,  -124,  -233,   114,  -233,  -233,
    -233,   267,   218,  -233,    -1,     4,   -20,  -233,   -53,  -233,
    -233,   200,   243,  -126,  -103,  -233,  -233,  -159,  -233,     1,
    -233,  -233,  -233,  -233,  -233,  -232,  -233,  -233,  -233,  -152,
     -43,   -42,  -233,  -127,  -233,  -233,   248,   253,  -233,  -233,
    -233,   -24,    98,  -233,    55,   -29,   -44,  -233,  -233,  -233,
     256
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   151,   152,    15,
     102,    17,    31,    32,    33,    96,   146,    18,    19,    50,
     147,    38,   100,    20,   149,   150,   196,   197,    21,    44,
      28,    91,    92,   142,    22,    23,    24,    54,   223,   104,
     105,   106,   159,   160,   161,   212,   213,   214,   215,   216,
     101,   217,   218,   219,   267,   248,   220,   185,   186,    69,
      70,   221,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   107,
     115
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    25,    40,   225,    97,    71,   183,    26,    16,
     145,   187,   148,   268,   153,    34,   109,   109,   111,   112,
     109,    16,   109,   109,   119,   200,    35,    36,   240,   224,
       2,   108,   110,     4,     1,   113,    -7,   116,   117,   224,
      53,     1,    27,   241,    48,   244,    94,   286,   123,   124,
      98,   229,    97,    71,   254,   226,     2,     3,   293,   148,
      41,   148,    42,   226,     3,   222,     5,     6,     7,     8,
       9,   200,    10,     4,   114,    29,   260,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
       1,   129,   130,   272,     2,     8,     9,   188,    10,   172,
     173,   157,   180,   181,   182,    37,   158,   148,   262,   238,
     154,    43,   281,   155,    71,   156,   282,   283,   166,   285,
      90,   287,   231,   143,   109,   144,   165,   114,   156,   291,
       5,     6,     7,     8,     9,     4,    10,   -51,    40,   232,
       1,     2,   125,   126,   127,   128,    45,   198,     2,   237,
      46,    97,    71,    94,    25,     2,   131,   132,   133,   158,
     190,   154,   144,   155,    47,   156,   249,   251,    71,   166,
     120,   193,     4,   194,   259,   199,   -36,     5,     6,     7,
       8,     9,   239,    10,   178,   179,    71,     8,     9,   227,
      10,   228,    51,   121,     8,     9,     1,    10,    52,    89,
     264,   265,    99,   249,     1,     2,   122,    55,   270,    56,
      57,    58,    59,    60,    61,    62,    63,   134,    64,   155,
     -59,   156,   201,   174,   175,   176,   177,     3,     4,   165,
      65,   156,    48,   162,    52,   284,     4,   249,    66,    67,
     198,     5,     6,     7,     8,     9,   163,    10,   249,    68,
     164,   202,   168,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    55,   184,    56,    57,    58,    59,    60,    61,
      62,    63,   189,    64,   191,    55,   233,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,   235,   234,    95,
     242,   236,   243,    66,    67,   246,   245,   247,    65,   250,
     255,   266,   252,   256,    68,   253,    66,    67,   257,   258,
     261,   269,   273,   274,   271,   275,    55,    68,    56,    57,
      58,    59,    60,    61,    62,    63,   276,    64,     2,    55,
     277,    56,    57,    58,    59,    60,    61,    62,    63,   118,
      64,   278,   280,   279,   288,   289,   290,    66,    67,   292,
     165,    30,   156,    93,   195,   263,   141,   167,    68,     4,
      66,    67,   192,   230,     5,     6,     7,     8,     9,   170,
      10,    68,   135,   136,   169,   171,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,   138,     0,   139,
       0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,   156,    48,    48,   134,     4,     0,
      95,   138,   100,   245,   101,    16,    60,    61,    62,    63,
      64,    12,    66,    67,    68,   149,    17,    18,    18,   155,
       4,    60,    61,    35,     3,    64,    30,    66,    67,   165,
      39,     3,     3,    33,    38,   204,    47,   279,    23,    24,
      49,    25,    95,    95,   213,   158,     4,    26,   290,   147,
      26,   149,    28,   166,    26,   152,    40,    41,    42,    43,
      44,   195,    46,    35,    65,     0,   228,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       3,     9,    10,   252,     4,    43,    44,   139,    46,   123,
     124,   102,   131,   132,   133,     3,   102,   195,   235,   194,
     101,    27,   271,    26,   156,    28,   275,   276,   114,   278,
       3,   280,   164,    31,   168,    33,    26,   118,    28,   288,
      40,    41,    42,    43,    44,    35,    46,    30,   158,   168,
       3,     4,    19,    20,    21,    22,    30,   148,     4,   191,
      18,   194,   194,   154,   155,     4,    35,    36,    37,   155,
      31,   152,    33,    26,    33,    28,   208,   210,   210,   165,
      29,    31,    35,    33,   227,    31,    30,    40,    41,    42,
      43,    44,    31,    46,   129,   130,   228,    43,    44,    26,
      46,    28,    30,    15,    43,    44,     3,    46,    30,    30,
     242,   243,    30,   245,     3,     4,    16,     3,   250,     5,
       6,     7,     8,     9,    10,    11,    12,    38,    14,    26,
      38,    28,    18,   125,   126,   127,   128,    26,    35,    26,
      26,    28,    38,    27,    30,   277,    35,   279,    34,    35,
     241,    40,    41,    42,    43,    44,    33,    46,   290,    45,
      26,    47,    27,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     3,     3,     5,     6,     7,     8,     9,    10,
      11,    12,     3,    14,    38,     3,    27,     5,     6,     7,
       8,     9,    10,    11,    12,    26,    14,    33,    27,    30,
      26,    29,    26,    34,    35,    18,    26,    18,    26,    26,
      18,    49,    39,    27,    45,    31,    34,    35,    27,    29,
      27,    18,    27,    29,    39,    27,     3,    45,     5,     6,
       7,     8,     9,    10,    11,    12,    27,    14,     4,     3,
      26,     5,     6,     7,     8,     9,    10,    11,    12,    26,
      14,    27,    27,    18,    48,    27,    18,    34,    35,    18,
      26,    12,    28,    47,   147,   241,    89,   114,    45,    35,
      34,    35,   144,   163,    40,    41,    42,    43,    44,   121,
      46,    45,    11,    12,   118,   122,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    26,    35,    40,    41,    42,    43,    44,
      46,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,    92,    93,     3,    88,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    26,    28,    27,    87,    30,    18,    33,    38,    63,
      77,    30,    30,   107,    95,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    26,    34,    35,    45,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    30,
       3,    89,    90,    72,    92,    30,    73,   118,   107,    30,
      80,   108,    68,    96,    97,    98,    99,   137,   133,   134,
     133,   134,   134,   133,    68,   138,   133,   133,    26,   134,
      29,    15,    16,    23,    24,    19,    20,    21,    22,     9,
      10,    35,    36,    37,    38,    11,    12,    17,    26,    28,
      32,    89,    91,    31,    33,    73,    74,    78,    75,    82,
      83,    65,    66,    67,    68,    26,    28,    92,    93,   100,
     101,   102,    27,    33,    26,    26,    93,   100,    27,   138,
     124,   125,   129,   129,   130,   130,   130,   130,   132,   132,
     133,   133,   133,   121,     3,   115,   116,   121,   119,     3,
      31,    38,    90,    31,    33,    82,    84,    85,    92,    31,
      83,    18,    47,    49,    50,    51,    52,    53,    54,    55,
      56,    57,   103,   104,   105,   106,   107,   109,   110,   111,
     114,   119,    67,    96,   101,   117,   102,    26,    28,    25,
      99,   119,   133,    27,    27,    33,    29,   119,    73,    31,
      18,    33,    26,    26,   105,    26,    18,    18,   113,   119,
      26,   118,    39,    31,   105,    18,    27,    27,    29,    96,
     117,    27,   121,    85,   119,   119,    49,   112,   113,    18,
     119,    39,   105,    27,    29,    27,    27,    26,    27,    18,
      27,   105,   105,   105,   119,   105,   113,   105,    48,    27,
      18,   105,    18,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   137,   136,   138
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     3,     4,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     0,     5,     2
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
  case 2: /* program: translation_unit  */
#line 26 "calc.y"
                                  {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1626 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 29 "calc.y"
                                        {yyval=yyvsp[0];}
#line 1632 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 30 "calc.y"
                                                       {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1638 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 33 "calc.y"
                                     {yyval=yyvsp[0];}
#line 1644 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 34 "calc.y"
                             {yyval=yyvsp[0];}
#line 1650 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 37 "calc.y"
                                                   {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1656 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 38 "calc.y"
                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1662 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 39 "calc.y"
                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1668 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 40 "calc.y"
                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1674 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 43 "calc.y"
                  {yyval=NIL;}
#line 1680 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 44 "calc.y"
                                  {yyval=yyvsp[0];}
#line 1686 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 47 "calc.y"
                             {yyval=yyvsp[0];}
#line 1692 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 48 "calc.y"
                                              {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1698 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 51 "calc.y"
                                                                           {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1704 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 54 "calc.y"
                                {yyval=makeSpecifier(yyvsp[0],0);}
#line 1710 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 55 "calc.y"
                                         {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1716 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 56 "calc.y"
                                                       {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1722 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 57 "calc.y"
                                                                {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1728 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 60 "calc.y"
                          {yyval=S_AUTO;}
#line 1734 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 61 "calc.y"
                            {yyval=S_STATIC;}
#line 1740 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 62 "calc.y"
                             {yyval=S_TYPEDEF;}
#line 1746 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 65 "calc.y"
                  {yyval=makeDummyIdentifier();}
#line 1752 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 66 "calc.y"
                                      {yyval=yyvsp[0];}
#line 1758 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 69 "calc.y"
                                 {yyval=yyvsp[0];}
#line 1764 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 70 "calc.y"
                                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1770 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 73 "calc.y"
                            {yyval=yyvsp[0];}
#line 1776 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 74 "calc.y"
                                               {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1782 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 77 "calc.y"
                                     {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1788 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 78 "calc.y"
                                        {yyval=yyvsp[-1];}
#line 1794 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 81 "calc.y"
                             {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1800 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 82 "calc.y"
                                                    {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1806 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 85 "calc.y"
                                       {yyval=yyvsp[0];}
#line 1812 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 86 "calc.y"
                                     {yyval=yyvsp[0];}
#line 1818 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 87 "calc.y"
                                {yyval=yyvsp[0];}
#line 1824 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 90 "calc.y"
                                            {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1830 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 90 "calc.y"
                                                                                                    {yyval=current_id;current_level++;}
#line 1836 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 91 "calc.y"
                                           {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--;current_id=yyvsp[-2];}
#line 1842 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 92 "calc.y"
                                 {yyval=makeType(yyvsp[0]);}
#line 1848 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 92 "calc.y"
                                                       {yyval=current_id;current_level++;}
#line 1854 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 93 "calc.y"
                                           {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--;current_id=yyvsp[-2];}
#line 1860 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 94 "calc.y"
                                            {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1866 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 97 "calc.y"
                            {yyval=T_STRUCT;}
#line 1872 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 98 "calc.y"
                           {yyval+T_UNION;}
#line 1878 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 101 "calc.y"
                                    {yyval=yyvsp[0];}
#line 1884 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 102 "calc.y"
                                                            {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1890 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 105 "calc.y"
                                                                 {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1896 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 108 "calc.y"
                                   {yyval=yyvsp[0];}
#line 1902 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 109 "calc.y"
                                                                {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1908 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 112 "calc.y"
                            {yyval=yyvsp[0];}
#line 1914 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 115 "calc.y"
                                     {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1920 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 116 "calc.y"
                                      {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1926 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 117 "calc.y"
                          {yyval=makeType(T_ENUM);}
#line 1932 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 118 "calc.y"
                                      {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1938 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 119 "calc.y"
                                     {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1944 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 122 "calc.y"
                            {yyval=yyvsp[0];}
#line 1950 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 123 "calc.y"
                                                  {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1956 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 126 "calc.y"
                            {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1962 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 127 "calc.y"
                            {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1968 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 128 "calc.y"
                                  {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1974 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 131 "calc.y"
                                           {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 1980 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 132 "calc.y"
                                   {yyval=yyvsp[0];}
#line 1986 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 135 "calc.y"
                      {yyval=makeType(T_POINTER);}
#line 1992 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 136 "calc.y"
                              {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 1998 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 139 "calc.y"
                                {yyval=makeIdentifier(yyvsp[0]);}
#line 2004 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 140 "calc.y"
                                  {yyval=yyvsp[-1];}
#line 2010 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 141 "calc.y"
                                                                 {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2016 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 142 "calc.y"
                                      {yyval=current_id;current_level++;}
#line 2022 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 143 "calc.y"
                                           {checkForwardReference();current_id=yyvsp[-2];current_level--;
		yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 2029 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 147 "calc.y"
                  {yyval=NIL;}
#line 2035 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 148 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2041 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 151 "calc.y"
                                {yyval=yyvsp[0];}
#line 2047 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 152 "calc.y"
                                                {yyval=linkDeclaratorList(yyvsp[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2053 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 155 "calc.y"
                                       {yyval=yyvsp[0];}
#line 2059 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 156 "calc.y"
                                                            {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2065 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 159 "calc.y"
                                                   {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2071 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 161 "calc.y"
                {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2077 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 164 "calc.y"
                  {yyval=NIL;}
#line 2083 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 165 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2089 "y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 168 "calc.y"
                                            {yyval=yyvsp[0];}
#line 2095 "y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 169 "calc.y"
                         {yyval=makeType(T_POINTER);}
#line 2101 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 170 "calc.y"
                                                    {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2107 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 173 "calc.y"
                                           {yyval=yyvsp[-1];}
#line 2113 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 174 "calc.y"
                                               {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2119 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 175 "calc.y"
                                               {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2125 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 177 "calc.y"
                {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2131 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 178 "calc.y"
                                                                          {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2137 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 181 "calc.y"
                  {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2143 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 182 "calc.y"
                                {yyval=yyvsp[0];}
#line 2149 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 185 "calc.y"
                           {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2155 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 186 "calc.y"
                                          {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2161 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 189 "calc.y"
                                   {yyval=yyvsp[0];}
#line 2167 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 190 "calc.y"
                                    {yyval=yyvsp[0];}
#line 2173 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 191 "calc.y"
                                      {yyval=yyvsp[0];}
#line 2179 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 192 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2185 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 193 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2191 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 194 "calc.y"
                                {yyval=yyvsp[0];}
#line 2197 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 197 "calc.y"
                                                              {yyval=makeNode(N_STMT_LABEL_CASE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2203 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 198 "calc.y"
                                             {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2209 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 201 "calc.y"
                    {yyval=current_id;current_level++;}
#line 2215 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 202 "calc.y"
                {checkForwardReference();yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]);current_id=yyvsp[-3];current_level--;}
#line 2221 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 205 "calc.y"
                           {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2227 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 206 "calc.y"
                                      {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2233 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 209 "calc.y"
                                                   {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2239 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 210 "calc.y"
                                                                      {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2245 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 211 "calc.y"
                                                       {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2251 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 214 "calc.y"
                                                      {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2257 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 215 "calc.y"
                                                                       {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2263 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 216 "calc.y"
                                                        {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2269 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 219 "calc.y"
                                                                                  {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2275 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 222 "calc.y"
                  {yyval=NIL;}
#line 2281 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 223 "calc.y"
                            {yyval=yyvsp[0];}
#line 2287 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 226 "calc.y"
                                                     {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2293 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 227 "calc.y"
                                        {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2299 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 228 "calc.y"
                                     {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2305 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 231 "calc.y"
                  {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2311 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 232 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2317 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 235 "calc.y"
                                       {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2323 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 236 "calc.y"
                                                                 {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2329 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 239 "calc.y"
                  {yyval=NIL;}
#line 2335 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 240 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2341 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 243 "calc.y"
                            {yyval=yyvsp[0];}
#line 2347 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 246 "calc.y"
                                  {yyval=yyvsp[0];}
#line 2353 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 249 "calc.y"
                                       {yyval=yyvsp[0];}
#line 2359 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 252 "calc.y"
                                        {yyval=yyvsp[0];}
#line 2365 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 253 "calc.y"
                                                               {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2371 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 256 "calc.y"
                                       {yyval=yyvsp[0];}
#line 2377 "y.tab.c"
    break;

  case 128: /* logical_or_expression: logical_and_expression  */
#line 259 "calc.y"
                                        {yyval=yyvsp[0];}
#line 2383 "y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 260 "calc.y"
                                                                     {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2389 "y.tab.c"
    break;

  case 130: /* logical_and_expression: bitwise_or_expression  */
#line 263 "calc.y"
                                       {yyval=yyvsp[0];}
#line 2395 "y.tab.c"
    break;

  case 131: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 264 "calc.y"
                                                                     {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2401 "y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 267 "calc.y"
                                        {yyval=yyvsp[0];}
#line 2407 "y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 270 "calc.y"
                                        {yyval=yyvsp[0];}
#line 2413 "y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 273 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2419 "y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 276 "calc.y"
                                       {yyval=yyvsp[0];}
#line 2425 "y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 277 "calc.y"
                                                               {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2431 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 278 "calc.y"
                                                               {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2437 "y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 281 "calc.y"
                                  {yyval=yyvsp[0];}
#line 2443 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS shift_expression  */
#line 282 "calc.y"
                                                            {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2449 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR shift_expression  */
#line 283 "calc.y"
                                                            {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2455 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ shift_expression  */
#line 284 "calc.y"
                                                            {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2461 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ shift_expression  */
#line 285 "calc.y"
                                                            {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2467 "y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 288 "calc.y"
                                     {yyval=yyvsp[0];}
#line 2473 "y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 291 "calc.y"
                                           {yyval=yyvsp[0];}
#line 2479 "y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 292 "calc.y"
                                                                    {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2485 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 293 "calc.y"
                                                                     {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2491 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 296 "calc.y"
                                 {yyval=yyvsp[0];}
#line 2497 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 297 "calc.y"
                                                                {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2503 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 298 "calc.y"
                                                                 {yyval=makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2509 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 299 "calc.y"
                                                                   {yyval=makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2515 "y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 302 "calc.y"
                                  {yyval=yyvsp[0];}
#line 2521 "y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 303 "calc.y"
                                                 {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2527 "y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 306 "calc.y"
                                    {yyval=yyvsp[0];}
#line 2533 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 307 "calc.y"
                                           {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2539 "y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 308 "calc.y"
                                             {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2545 "y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 309 "calc.y"
                                     {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2551 "y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 310 "calc.y"
                                      {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2557 "y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 311 "calc.y"
                                      {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2563 "y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 312 "calc.y"
                                       {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2569 "y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 313 "calc.y"
                                      {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2575 "y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 314 "calc.y"
                                             {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2581 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 315 "calc.y"
                                            {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2587 "y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 318 "calc.y"
                                    {yyval=yyvsp[0];}
#line 2593 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 319 "calc.y"
                                                     {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2599 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 320 "calc.y"
                                                                  {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2605 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 321 "calc.y"
                                                      {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2611 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 322 "calc.y"
                                                     {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2617 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 323 "calc.y"
                                             {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2623 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 324 "calc.y"
                                               {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2629 "y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 327 "calc.y"
                            {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2635 "y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 328 "calc.y"
                                  {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2641 "y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 329 "calc.y"
                                {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2647 "y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 330 "calc.y"
                                    {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2653 "y.tab.c"
    break;

  case 174: /* @12: %empty  */
#line 331 "calc.y"
                                {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2659 "y.tab.c"
    break;

  case 175: /* primary_expression: STRING_LITERAL @12 LP expression RP  */
#line 332 "calc.y"
                                 {yyval=yyvsp[-3];}
#line 2665 "y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 335 "calc.y"
                                                                {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2671 "y.tab.c"
    break;


#line 2675 "y.tab.c"

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

#line 337 "calc.y"


extern char *yytext;

// Error Print
void yyerror(char *s) 
{
	syntax_err++;
	printf("line %d: %s near %s\n", line_no, s, yytext);
}

// main
void main(int argc, char *argv[])
{
	if ((fout = fopen("a.asm", "w")) == NULL){
		printf("can not open output file: a.asm\n");
		exit(1);
	}
	printf("*** Compiler Start ***\n");
  initialize();
  yyparse();
  if (syntax_err)
    exit(1);
  //print_ast(root);

	semantic_analysis(root); // adding semantic function
	if (semantic_err)
		exit(1);
	//print_sem_ast(root); // checking semantic function
  
	code_generation(root);
	exit(0);
} 
