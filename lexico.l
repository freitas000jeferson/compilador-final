%{
#include <string.h>
#include <stdio.h>
// flex -i analisador02.l
// bison analisador02.y
// gcc analisador02.tab.c -o analisador -lfl
// ./analisador
// flex -i lexico.l && bison sintatico.y && gcc sintatico.tab.c -o analisador && analisador
// flex -i lexico.l | bison sintatico.y | gcc sintatico.tab.c -o analisador | cls | ./analisador
%}

NUM [0-9]+\.?[0-9]*
VARS [a-zA-Z_]+[a-zA-z0-9_]*
INI "BEGIN::"
FIM "END::"

DECL "var"	
STRING "string"
INT "int"
FLOAT "float"
SQRT "sqrt"
IF "IF"
ELSE "ELSE"
WHILE "WHILE"
OUT "out"
PRINTT "outs"
IN "in"
SCANS "ins"
STR ["][^"]*["]
COMENTARIO "//"
IGNORE [\s\t\n" "]


%%
{INI} { 	return INI;			}
{FIM} {		return FIM;			}
{IF} {		return IF;			}
{ELSE} {	return ELSE;		}
{WHILE} {	return WHILE;		}
{PRINTT} {	return PRINTT;		}
{OUT} {		return OUT;			}
{IN} {		return IN;			}
{SCANS} {	return SCANS;		}
{DECL} {	return DECL;		}
{STRING} {	return STRING;		}
{INT} {		return INT;			}
{FLOAT} {	return FLOAT;		}
{SQRT} {    return SQRT;     	}

{VARS} {
	strcpy(yylval.str,yytext);
	return VARS;
	}

{STR} {
    char aux[50];
    strncpy ( aux, &yytext[1], strlen(yytext)-2);
    aux[strlen(yytext)-2]='\0';
    strcpy (yylval.str, aux);
	return STR;  
}


{NUM} {
	yylval.flo = atof(yytext);
	return NUM;
	}

[-+()=/*^,{};:"\[\]] {return *yytext;
			}
{COMENTARIO}..*|"/**"(..*|{IGNORE})*"*/" { ; }

">" {yylval.fn = 1; return CMP; }
"<" {yylval.fn = 2; return CMP; }
"!=" {yylval.fn = 3; return CMP; }
"==" {yylval.fn = 4; return CMP; }
">=" {yylval.fn = 5; return CMP; }
"<=" {yylval.fn = 6; return CMP; }
{IGNORE} {;}
. {
	// printf("(%s) Ingonrado\n",yytext);
}

%%

int yywrap() {
   return 1;
}