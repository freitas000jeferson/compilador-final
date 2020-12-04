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
PRINT "print"
IN "in"
STR ["][^"]*["]
ENDL "endl::"
DI "[i::]"
DF "[f::]"
DS "[s::]"
CONCAT "concat"
COPY "copy"

COMENTARIO "//"
IGNORE [\s\t\n" "]


%%
{INI} { 	return INI;			}
{FIM} {		return FIM;			}
{IF} {		return IF;			}
{ELSE} {	return ELSE;		}
{WHILE} {	return WHILE;		}
{PRINT} {	return PRINTT;		}
{IN} {		return IN;			}
{CONCAT} {  return CONCAT;     	}
{COPY} {  return COPY;     	}

{DECL} {	return DECL;		}
{STRING} {	return STRING;		}
{INT} {		return INT;			}
{FLOAT} {	return FLOAT;		}
{SQRT} {    return SQRT;     	}
{ENDL} {    return ENDL;     	}
{DI} {    	return DI;    	 	}
{DF} {    	return DF;    	 	}
{DS} {    	return DS;    	 	}
{VARS} {
	strcpy(yylval.str,yytext);
	return VARS;
	}

{STR} {
    char aux[50];
    strncpy ( aux, &yytext[1], strlen(yytext)-2);
    aux[strlen(yytext)-2]='\0';
    strcpy (yylval.str, aux);
	// printf("\n___________LEU_____________%s",yytext);
	return STR;  
}


{NUM} {
	yylval.flo = atof(yytext);
	return NUM;
	}

[-+()=%/*^,{};:\[\]] {return *yytext;
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