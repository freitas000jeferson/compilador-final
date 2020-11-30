%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>	

typedef struct vars { //estrutura de uma variável
    char name[50];
    double valor;
    char valors[50];
    struct vars *prox;
} VARI;

//insere uma nova variável na lista de variáveis
VARI *ins(VARI *l, char n[]) {
    VARI *new = (VARI *)malloc(sizeof(VARI));
    strcpy(new->name, n);
    new->prox = l;
    return new;
}

//busca uma variável na lista de variáveis
VARI *srch(VARI *l, char n[]) {
    VARI *aux = l;
    while (aux != NULL)
    {
        if (strcmp(n, aux->name) == 0)
            return aux;
        aux = aux->prox;
    }
    return aux;
}

/*O node type serve para indicar o tipo de nó que está na árvore. Isso serve para a função eval() entender o que realizar naquele nó*/
typedef struct ast { /*Estrutura de um nó*/
    int nodetype;
    struct ast *l; /*Esquerda*/
    struct ast *r; /*Direita*/
} Ast;

typedef struct numval { /*Estrutura de um número*/
    int nodetype;
    double number;
} Numval;

typedef struct varval { /*Estrutura de um nome de variável, nesse exemplo uma variável é um número no vetor var[26]*/
    int nodetype;
    char var[50];
} Varval;

typedef struct texto
{ /*Estrutura de um texto*/
    int nodetype;
    char txt[50];
} TXT;

typedef struct flow
{ /*Estrutura de um desvio (if/else/while)*/
    int nodetype;
    Ast *cond; /*condição*/
    Ast *tl;   /*then, ou seja, verdade*/
    Ast *el;   /*else*/
} Flow;

typedef struct symasgn
{ /*Estrutura para um nó de atribuição. Para atrubior o valor de v em s*/
    int nodetype;
    char s[50];
    Ast *v;
} Symasgn;


VARI *l1; /*Variáveis*/
VARI *aux;

Ast *newast(int nodetype, Ast *l, Ast *r)
{ /*Função para criar um nó*/

    Ast *a = (Ast *)malloc(sizeof(Ast));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = nodetype;
    a->l = l;
    a->r = r;
    return a;
}

Ast *newvari(int nodetype, char nome[50])
{ /*Função de que cria uma nova variável*/
    Varval *a = (Varval *)malloc(sizeof(Varval));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = nodetype;
    ;
    strcpy(a->var, nome);
    return (Ast *)a;
}

Ast *newtext(int nodetype, char txt[500])
{ /*Função de que cria uma nova variável*/
    TXT *a = (TXT *)malloc(sizeof(TXT));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = nodetype;
    strcpy(a->txt, txt);
    return (Ast *)a;
}

Ast *newnum(double d)
{ /*Função de que cria um novo número*/
    Numval *a = (Numval *)malloc(sizeof(Numval));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = 'K';
    a->number = d;
    return (Ast *)a;
}

Ast *newflow(int nodetype, Ast *cond, Ast *tl, Ast *el)
{ /*Função que cria um nó de if/else/while*/
    Flow *a = (Flow *)malloc(sizeof(Flow));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = nodetype;
    a->cond = cond;
    a->tl = tl;
    a->el = el;
    return (Ast *)a;
}

Ast *newcmp(int cmptype, Ast *l, Ast *r)
{ /*Função que cria um nó para testes*/
    Ast *a = (Ast *)malloc(sizeof(Ast));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = '0' + cmptype; /*Para pegar o tipe de teste, definido no arquivo.l e utilizar na função eval()*/
    a->l = l;
    a->r = r;
    return a;
}

Ast *newasgn(char s[50], Ast *v)
{ /*Função para um nó de atribuição*/
    Symasgn *a = (Symasgn *)malloc(sizeof(Symasgn));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = '=';
    strcpy(a->s, s);
    //a->s = s; /*Símbolo/variável*/
    a->v = v; /*Valor*/
    return (Ast *)a;
}

Ast *newValorVal(char s[])
{ /*Função que recupera o nome/referência de uma variável, neste caso o número*/

    Varval *a = (Varval *)malloc(sizeof(Varval));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = 'N';
    strcpy(a->var, s);
    return (Ast *)a;
}

Ast *newValorValS(char s[50])
{ /*Função que recupera o nome/referência de uma variável, neste caso o número*/

    Varval *a = (Varval *)malloc(sizeof(Varval));
    if (!a)
    {
        printf("out of space");
        exit(0);
    }
    a->nodetype = 'Q';
    strcpy(a->var, s);
    return (Ast *)a;
}

char *eval2(Ast *a)
{ /*Função que executa operações a partir de um nó*/
    VARI *aux1;
    char *v2;

    switch (a->nodetype)
    {

    case 'Q':
        aux1 = srch(l1, ((Varval *)a)->var);
        return aux1->valors;
        break;

    default:
        printf("internal error: bad node %c\n", a->nodetype);
        break;
    }

    return v2;
}

double eval(Ast *a)
{ /*Função que executa operações a partir de um nó*/
    double v;
    char v1[50];
    char *v2;
    VARI *aux1;
    if (!a)
    {
        printf("internal error, null eval");
        return 0.0;
    }
    switch (a->nodetype)
    {
    case 'K':
        v = ((Numval *)a)->number;
        break; /*Recupera um número*/
    case 'N':
        aux1 = srch(l1, ((Varval *)a)->var);
        v = aux1->valor;
        break;
    case '+':
        v = eval(a->l) + eval(a->r);
        break; /*Operações "árv esq   +   árv dir"*/
    case '-':
        v = eval(a->l) - eval(a->r);
        break; /*Operações*/
    case '*':
        v = eval(a->l) * eval(a->r);
        break; /*Operações*/
    case '/':
        v = eval(a->l) / eval(a->r);
        break; /*Operações*/
    case 'M':
        v = -eval(a->l);
        break; /*Operações, número negativo*/

    case '1':
        v = (eval(a->l) > eval(a->r)) ? 1 : 0;
        break; /*Operações lógicas. "árv esq   >   árv dir"  Se verdade 1, falso 0*/
    case '2':
        v = (eval(a->l) < eval(a->r)) ? 1 : 0;
        break;
    case '3':
        v = (eval(a->l) != eval(a->r)) ? 1 : 0;
        break;
    case '4':
        v = (eval(a->l) == eval(a->r)) ? 1 : 0;
        break;
    case '5':
        v = (eval(a->l) >= eval(a->r)) ? 1 : 0;
        break;
    case '6':
        v = (eval(a->l) <= eval(a->r)) ? 1 : 0;
        break;

    case '=':
        v = eval(((Symasgn *)a)->v); /*Recupera o valor*/
        aux = srch(l1, ((Symasgn *)a)->s);
        aux->valor = v;

        break;

    case 'I': /*CASO IF*/
        if (eval(((Flow *)a)->cond) != 0)
        {                                  /*executa a condição / teste*/
            if (((Flow *)a)->tl)           /*Se existir árvore*/
                v = eval(((Flow *)a)->tl); /*Verdade*/
            else
                v = 0.0;
        }
        else
        {
            if (((Flow *)a)->el)
            {
                v = eval(((Flow *)a)->el); /*Falso*/
            }
            else
                v = 0.0;
        }
        break;

    case 'W':
        //printf ("WHILE\n");
        v = 0.0;
        if (((Flow *)a)->tl)
        {
            while (eval(((Flow *)a)->cond) != 0)
            {
                //printf ("VERDADE\n");
                v = eval(((Flow *)a)->tl);
            }
        }
        break;

    case 'L':
        eval(a->l);
        v = eval(a->r);
        break; /*Lista de operções em um bloco IF/ELSE/WHILE. Assim o analisador não se perde entre os blocos*/

    case 'P':
        v = eval(a->l); /*Recupera um valor*/
        printf("%.2f\n", v);
        break; /*Função que imprime um valor*/

    case 'S':
        scanf("%lf", &v);
        aux1 = srch(l1, ((Varval *)a)->var);
        aux1->valor = v;
        break;

    case 'T':
        scanf("%s", v1);
        aux1 = srch(l1, ((Varval *)a)->var);
        strcpy(aux1->valors, v1);
        break;

    case 'Y':
        v2 = eval2(a->l); /*Recupera um valor STR*/
        printf("%s\n", v2);
        break; /*Função que imprime um valor (string)*/
        printf("imprimiu\n");
        break;

    case 'V':
        l1 = ins(l1, ((Varval *)a)->var);
        break;

    default:
        printf("internal error: bad node %c\n", a->nodetype);
        break;
    }
    return v;
}



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
%token <str>TEXTO
%token FIM INI IF ELSE WHILE PRINT DECL SCAN PRINTT SCANS
%token <fn> CMP

%right '='
%left '+' '-'
%left '*' '/'
%left CMP

%type <a> exp list stmt prog exp1

%nonassoc IFX NEG

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
	| VARS '=' exp {$$ = newasgn($1,$3);}
	| DECL VARS	{ $$ = newvari('V',$2);}
	| PRINT '(' exp ')' { $$ = newast('P',$3,NULL);}
	| PRINTT '(' exp1 ')' {$$ = newast('Y',$3,NULL);}
	| SCAN '('VARS')'	{ $$ = newvari('S',$3);}
	| SCANS '('VARS')'	{ $$ = newvari('T',$3);}

	
	;

list:	  stmt{$$ = $1;}
		| list stmt { $$ = newast('L', $1, $2);	}
		;
	
exp: 
	 exp '+' exp {$$ = newast('+',$1,$3);}		/*Expressões matemáticas*/
	|exp '-' exp {$$ = newast('-',$1,$3);}
	|exp '*' exp {$$ = newast('*',$1,$3);}
	|exp '/' exp {$$ = newast('/',$1,$3);}
	|exp CMP exp {$$ = newcmp($2,$1,$3);}		/*Testes condicionais*/
	|'(' exp ')' {$$ = $2;}
	|'-' exp %prec NEG {$$ = newast('M',$2,NULL);}
	|NUM {$$ = newnum($1);}						/*token de um número*/
	|VARS {$$ = newValorVal($1);}				/*token de uma variável*/

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
