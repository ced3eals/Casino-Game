all : CASINO EXECUTION

fonction.o : fonction.c fonctions.h
	    gcc -c -Wall fonction.c
main.o : main.c fonctions.h
	gcc -c -Wall main.c
CASINO : fonction.o main.o
	gcc -o PROJET fonction.o main.o

EXECUTION :
	./PROJET

