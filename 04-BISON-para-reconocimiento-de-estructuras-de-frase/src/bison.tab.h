
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INCLUDE = 258,
     DEFINE = 259,
     AUTO = 260,
     REGISTER = 261,
     STATIC = 262,
     EXTERN = 263,
     TYPEDEF = 264,
     VOID = 265,
     CHAR = 266,
     SHORT = 267,
     INT = 268,
     LONG = 269,
     FLOAT = 270,
     DOUBLE = 271,
     SIGNED = 272,
     UNSIGNED = 273,
     CONST = 274,
     VOLATILE = 275,
     ENUM = 276,
     CASE = 277,
     DEFAULT = 278,
     IF = 279,
     SWITCH = 280,
     ELSE = 281,
     FOR = 282,
     DO = 283,
     WHILE = 284,
     GOTO = 285,
     CONTINUE = 286,
     BREAK = 287,
     STRUCT = 288,
     UNION = 289,
     RETURN = 290,
     SIZEOF = 291,
     CTE_OR = 292,
     CTE_AND = 293,
     ELIPSIS = 294,
     IGUAL_IGUAL = 295,
     DISTINTO = 296,
     MENOR_IGUAL = 297,
     MAYOR_IGUAL = 298,
     CORR_DER = 299,
     CORR_IZQ = 300,
     MAS_MAS = 301,
     MENOS_MENOS = 302,
     FLECHA = 303,
     POR_IGUAL = 304,
     DIV_IGUAL = 305,
     MAS_IGUAL = 306,
     MENOS_IGUAL = 307,
     MOD_IGUAL = 308,
     CORR_DER_IGUAL = 309,
     CORR_IZQ_IGUAL = 310,
     Y_IGUAL = 311,
     POT_IGUAL = 312,
     O_IGUAL = 313,
     IDENTIFICADOR = 314,
     LITERAL_CADENA = 315,
     CONST_OCTAL = 316,
     CONST_HEXADECIMAL = 317,
     CONST_DECIMAL = 318,
     CONST_PTOFLOTANTE = 319,
     CONST_CARACTER = 320,
     IFX = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 21 "bison.y"

   int ival;
   double dval;
   char* cval;



/* Line 1676 of yacc.c  */
#line 126 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


