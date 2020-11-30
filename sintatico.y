%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>	
#include "structs.h"


int yylex();
void yyerror (char *s){
	printf("%s\n", s);
}

%}

%union{
	float flo;
	int fn;
	int inter;
	char str[50];
	Ast *a;
	}

%token <flo>NUM
%token <str>VARS
%token <str>STR
%token INI FIM IF ELSE WHILE OUT DECL STRING INT FLOAT IN PRINTT SCANS
%token <fn> CMP

%right '='
%left '+' '-'
%left '*' '/'
%right '^' SQRT
%left CMP

%type <a> exp list stmt prog exp1

%nonassoc IFX VARPREC DECLPREC NEG VET PRECFLOAT

%%

val: INI prog FIM
	;

prog: stmt 		{eval($1);}  /*Inicia e execução da árvore de derivação*/
	| prog stmt {eval($2);}	 /*Inicia e execução da árvore de derivação*/
	;
	
/*Funções para análise sintática e criação dos nós na AST*/	
/*Verifique q nenhuma operação é realizada na ação semântica, apenas são criados nós na árvore de derivação com suas respectivas operações*/
	
stmt: IF '(' exp ')' '{' list '}' %prec IFX {$$ = newflow('I', $3, $6, NULL);}
	| IF '(' exp ')' '{' list '}' ELSE '{' list '}' {$$ = newflow('I', $3, $6, $10);}
	| WHILE '(' exp ')' '{' list '}' {$$ = newflow('W', $3, $6, NULL);}

	| VARS '=' exp ';' %prec VARPREC { $$ = newasgn($1,$3);}
	| VARS '['NUM']' '=' exp ';' {$$ = newasgn_a($1,$6,$3);}

	| FLOAT VARS ';' %prec DECLPREC { $$ = newvari('V',$2);}
	| FLOAT VARS '['NUM']' ';'	{ $$ = newarray('a',$2,$4);}
	
	| OUT '(' exp ')' ';'	{$$ = newast('P',$3,NULL);}
	| PRINTT '(' exp1 ')' ';' 	{$$ = newast('Y',$3,NULL);}
	| IN '('VARS')'	';'	{$$ = newvari('S',$3);}
	| SCANS '('VARS')' ';'		{$$ = newvari('T',$3);}
	;

list: stmt {$$ = $1;}
		| list stmt { $$ = newast('L', $1, $2);	}
		;
	
exp: 
	 exp '+' exp {$$ = newast('+',$1,$3);}		/*Expressões matemáticas*/
	|exp '-' exp {$$ = newast('-',$1,$3);}
	|exp '*' exp {$$ = newast('*',$1,$3);}
	|exp '/' exp {$$ = newast('/',$1,$3);}
	|'(' exp ')' {$$ = $2;}
    |exp '^' exp { $$ = newast('^', $1, $3);  }
    |SQRT '(' exp ',' exp ')' { $$ = newast('~', $3, $5); }
	|exp CMP exp {$$ = newcmp($2,$1,$3);}		/*Testes condicionais*/
	|'-' exp %prec NEG {$$ = newast('M',$2,NULL);}
	|NUM 	{$$ = newnum($1);}						/*token de um número*/
	|VARS 	%prec VET {$$ = newValorVal($1);}		/*token de uma variável*/
	|VARS '['NUM']' {$$ = newValorVal_a($1,$3);}				/*token de uma variável*/

	;

exp1: 
	VARS {$$ = newValorValS($1);}				
	;
%%

#include "lex.yy.c"

int main(){
	yyin=fopen("entrada.ok","r");
	yyparse();
	yylex();
	fclose(yyin);
return 0;
}
