%{
#include <string.h>
#include <stdio.h>
// flex -i analisador02.l
// bison analisador02.y
// gcc analisador02.tab.c -o analisador -lfl
// ./analisador
// flex -i analisador04.l && bison analisador04.y && gcc analisador04.tab.c -o analisador && analisador

%}

NUM [0-9]+\.?[0-9]*
VARS [a-zA-Z_]+[a-zA-z0-9_]*
INI "BEGIN::"
FIM "END::"
IF "IF"
ELSE "ELSE"
WHILE "WHILE"
PRINT "out"
PRINTT "outs"
SCAN "in"
SCANS "ins"
DECL "var"	
TEXTO [a-zA-Z]
COMENTARIO "//"
IGNORE [\s\t\n" "]


%%
{INI} { return INI;}
{FIM} {return FIM;}
{IF} {return IF;}
{ELSE} {return ELSE;}
{WHILE} {return WHILE;}
{PRINTT} {return PRINTT;}
{PRINT} {return PRINT;}
{SCAN} {return SCAN;}
{SCANS} {return SCANS;}
{DECL} {return DECL;}

{VARS} {
	strcpy(yylval.str,yytext);
	return VARS;
	}

{TEXTO} {
	strcpy(yylval.str,yytext);
	return TEXTO;
	}

{NUM} {
	yylval.flo = atof(yytext);
	return NUM;
	}

[-+()=/*^{};"\[\]] {return *yytext;
			}
{COMENTARIO}..*|"/**"(..*|{IGNORE})*"*/" { ; }

">" {yylval.fn = 1; return CMP; }
"<" {yylval.fn = 2; return CMP; }
"!=" {yylval.fn = 3; return CMP; }
"==" {yylval.fn = 4; return CMP; }
">=" {yylval.fn = 5; return CMP; }
"<=" {yylval.fn = 6; return CMP; }
{IGNORE} {;}
[\ \n\t]*	{;}
. {printf("(%s) Ingonrado\n",yytext);}

%%

int yywrap() {
   return 1;
}