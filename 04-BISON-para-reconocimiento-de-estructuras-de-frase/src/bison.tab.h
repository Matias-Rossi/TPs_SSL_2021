
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
     DIRECTIVAS_PREPROCESAMIENTO = 258,
     PALABRAS_RESERVADAS_TIPOS_DE_DATOS = 259,
     CALIFICADOR_TIPO = 260,
     LITERAL_CADENA = 261,
     PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL = 262,
     PALABRAS_RESERVADAS_OTHERS = 263,
     TIPO_STRUCT = 264,
     ENUM = 265,
     CASE = 266,
     DEFAULT = 267,
     SWITCH = 268,
     IF = 269,
     ELSE = 270,
     DO = 271,
     WHILE = 272,
     GOTO = 273,
     retornar = 274,
     CONTINUE = 275,
     BREAK = 276,
     IDENTIFICADOR = 277,
     OP_CARACT_DE_PUNTUACION = 278,
     OP_ASIGNACION = 279,
     EXPR_ASIGNACION = 280,
     EXPR_RELACION = 281,
     EXPR_CORRIMIENTO = 282,
     OP_BASICA = 283,
     EXPR_MULTIPLICATIVA = 284,
     OP_INCREMENTO = 285,
     SIZEOF = 286,
     FLECHA = 287,
     OP_UNARIO = 288,
     COMENTARIOS_LINEAL = 289,
     COMENTARIOS_MULTILINEAL = 290,
     CONST_OCTAL = 291,
     CONST_HEXADECIMAL = 292,
     CONST_DECIMAL = 293,
     CONST_PTOFLOTANTE = 294,
     CONST_CARACTER = 295,
     CONST_ENUMERACION = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 23 "bison.y"

   int ival;
   double dval;
   char* cval;



/* Line 1676 of yacc.c  */
#line 101 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


