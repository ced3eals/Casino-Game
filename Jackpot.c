#include <termios.h> 
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define RED my_putstr("\033[31m")
#define BLUE my_putstr("\033[34m")
#define CYAN my_putstr("\033[36m")
#define GREEN my_putstr("\033[32m")
#define YELLOW my_putstr("\033[33m")
#define CANCEL my_putstr("\033[00m") 

void my_delay(double i)    /*Pause l'application pour i seconds*/
{
	clock_t start,end;
	start=clock();
	while(((end=clock())-start)<=i*CLOCKS_PER_SEC);
}

void pouce1()
{
	int i;
	FILE * file;
	file = fopen ( "pouss1.txt" , "r" );

	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{

			//my_delay(0.009);
			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}

void pouce2()
{
	int i;
	FILE * file;
	file = fopen ( "pouss2.txt" , "r" );

	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{

			//my_delay(0.009);
			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}

void pouce3()
{
	int i;
	FILE * file;
	file = fopen ( "pouss3.txt" , "r" );

	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{

			//my_delay(0.009);
			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}


void remplacer(char *string){
	int i;
	for(i= 0 ; i < 100 ; i++){
		if(*(string+i) == '\n') *(string+i) = '\0';
	}
}




void clearScreen() {

	printf("%c[2J", 0x1B);
	printf("%c[%d;%dH", 0x1B, 1, 1);
}


int main()
{
	int i;

	clearScreen(0);

	FILE * fic;
	FILE * fic1;
	FILE * fic2;
	int n = 100;
	char l[100];
	fic = fopen("w.txt", "r");
	fic1 = fopen("w.txt", "r");


	fic2 = fopen("w.txt", "r");


	do{
		printf("\033[31m");	
		printf("\t\t\t\t");

		fgets(l, n ,fic);
		remplacer(&l[0]);
		printf("%s",l);
		memset(l, 0, sizeof(l));


		printf("\033[00m");
		fgets(l, n ,fic1);
		remplacer(&l[0]);
		printf("%s", l);
		memset(l, 0, sizeof(l));


		printf("\033[33m");
		fgets(l, n ,fic2);
		remplacer(&l[0]);
		printf("%s", l);
		memset(l, 0, sizeof(l));
		printf("\033[00m");

		printf("\n");

	} while (fgetc(fic) != EOF && fgetc(fic1) != EOF && fgetc(fic2) != EOF);
	my_delay(0.45);
	for(i=0; i<5; i++)
	{
		clearScreen(0);
		printf("\033[33m");
		pouce1();
		my_delay(0.45);
		clearScreen(0);
		printf("\033[31m");
		pouce2();
		my_delay(0.45);
		clearScreen(0);
		printf("\033[35m");
		pouce3();
		my_delay(0.45);
		printf("\033[00m");
	}
	return 0;
}
