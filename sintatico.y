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
%token INI FIM IF ELSE WHILE OUT DECL STRING INT FLOAT IN PRINTT SCANS CONCAT COPY
%token DI DF DS ENDL
%token <fn> CMP

%right '='
%left '+' '-'
%left '*' '/' '%'
%right '^' SQRT
%left CMP

%type <a> exp list stmt prog  multvarf multvari multvars multout parsestr leitura

%nonassoc IFX VARPREC DECLPREC NEG VET PRECFLOAT PRINT MULTIPRINT

%%

val: INI prog FIM
	;

prog: stmt 		{eval($1);}  /*Inicia e execução da árvore de derivação*/
	| prog stmt {eval($2);}	 /*Inicia e execução da árvore de derivação*/
	;
	
/*Funções para análise sintática e criação dos nós na AST*/	
/*Verifique q nenhuma operação é realizada na ação semântica, apenas são criados nós na árvore de
 derivação com suas respectivas operações*/
	
stmt: IF '(' exp ')' '{' list '}' %prec IFX {$$ = newflow('I', $3, $6, NULL);}
	| IF '(' exp ')' '{' list '}' ELSE '{' list '}' {$$ = newflow('I', $3, $6, $10);}
	| WHILE '(' exp ')' '{' list '}' {$$ = newflow('W', $3, $6, NULL);}

	| VARS '=' exp ';' %prec VARPREC { $$ = newasgn($1,$3);}
	| VARS '[' exp ']' '=' exp ';' { $$ = newasgn_a($1,$6,$3);}
    | CONCAT '(' VARS ',' parsestr ')' ';' { $$ = newasgn_concat($3,$5);}
    | COPY '(' VARS ',' parsestr ')' ';' { $$ = newasgn_copy($3,$5);}

	// | FLOAT VARS ';' %prec DECLPREC { $$ = newvari('V',$2);}
    | FLOAT multvarf ';' %prec DECLPREC {  $$ =  $2; }
    | INT multvari ';'  %prec DECLPREC {  $$ =  $2; }
    | STRING multvars ';'  {  $$ =  $2; }

    | FLOAT VARS '[' exp ']' ';'	{ $$ = newarray('A',$2,$4);}
	
    | INT VARS '=' exp ';' { $$ = newast('G', newvari('U',$2) , $4); }
    | FLOAT VARS '=' exp ';' { $$ = newast('D', newvari('V',$2) , $4); }
    | STRING VARS '=' STR ';' { $$ = newast('H', newvari('X',$2) , newValorValS($4)); }

	// | OUT '(' exp ')' ';' %prec PRINT {$$ = newast('P',$3,NULL);}
	| PRINTT '(' multout ')' ';' 	{ $$ = $3; }
	// | PRINTT '(' exp1 ')' ';' 	{$$ = newast('Y',$3,NULL);}

	| IN '(' leitura ')'	';'	{  $$ = $3; }
	// | SCANS '('VARS')' ';'		{$$ = newvari('T',$3);}
    | ';' {;} //para nao bugar quando ler um ';'
    | { ;} //para poder rodar um prog sem nada
	;

list: stmt {$$ = $1;}
		| list stmt { $$ = newast('L', $1, $2);	}
		;
	
exp: 
	 exp '+' exp {$$ = newast('+',$1,$3);}		/*Expressões matemáticas*/
	|exp '-' exp {$$ = newast('-',$1,$3);}
	|exp '*' exp {$$ = newast('*',$1,$3);}
	|exp '/' exp {$$ = newast('/',$1,$3);}
    |exp '%' exp {$$ = newast('%',$1,$3);}
	|'(' exp ')' {$$ = $2;}
    |exp '^' exp { $$ = newast('^', $1, $3);  }
    |SQRT '(' exp ',' exp ')' { $$ = newast('~', $3, $5); }
	|exp CMP exp {$$ = newcmp($2,$1,$3);}		/*Testes condicionais*/
	|'-' exp %prec NEG {$$ = newast('M',$2,NULL);}
	|NUM 	{$$ = newnum($1);}						/*token de um número*/
	|VARS 	%prec VET {$$ = newValorVal($1);}		/*token de uma variável*/
	|VARS '[' exp ']' {$$ = newValorVal_a($1, $3);}				/*token de uma variável*/

	;


// exp1: 
// 	VARS {$$ = newValorValS($1);}				
// 	;
leitura: DI VARS {$$ = newvari('S',$2);}
    | DF VARS {$$ = newvari('S',$2);}
    | DS VARS {$$ = newvari('T',$2);}
;
parsestr: STR  {  $$ = newast('$', newValorValS($1), NULL);}
        | DF exp { $$ = newast('7',$2,NULL);}
        | DI exp { $$ = newast('8',$2,NULL);}
        | DS VARS { $$ = newast('9', newValorValS($2), NULL);}
        ;


multvarf: VARS { $$ = newvari('V',$1); }
        | multvarf ',' VARS {  $$ = newast('d', newvari('V',$3) , $1); }
        ;
multvari: VARS { $$ = newvari('U',$1); }
        | multvari ',' VARS {  $$ = newast('g', newvari('U',$3) , $1); }
        ;
multvars: VARS { $$ = newvari('X',$1); }
        | multvars ',' VARS { $$ = newast('h', newvari('X',$3) , $1); }
        ;



multout:  STR  {  $$ = newast('s', newValorValS($1), NULL);}
        | DF exp { $$ = newast('p',$2,NULL);}
        | DI exp { $$ = newast('u',$2,NULL);}
        | DS VARS { $$ = searchVar('z', $2); }
        | ENDL { $$ = newast('e', newendl('e'), NULL); }

        | multout ',' STR { $$ = newast('r', newValorValS($3), $1); }
        | multout ',' DF exp { $$ = newast('q', newast('p', $4,NULL), $1); }
        | multout ',' DI exp { $$ = newast('v', newast('u', $4,NULL), $1); }
        | multout ',' DS VARS { $$ = newast('y', searchVar('z', $4), $1); }
        | multout ',' ENDL { $$ = newast('f', newendl('e'), $1);  }
        ;
%%

#include "lex.yy.c"

int main(){
	// yyin=fopen("entrada.ok","r");
	//yyin=fopen("juros.ok","r");
    //yyin=fopen("fibonacci.ok","r");
	yyin=fopen("media.ok","r");
	yyparse();
	yylex();
	fclose(yyin);
return 0;
}

