all : aulaAST.l aulaAST.y
	clear
	flex -i sintatico.l
	bison semantico.y
	gcc semantico.tab.c -o analisador -lfl -lm
	./analisador
