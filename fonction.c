#include "fonctions.h"



void pouce()
{

	printf("\033[30m%s","\t\t\t\t\t\t.......................MMMMN............\n");
	printf("\t\t\t\t\t\t......................MMMMMMM... ... . .\n");
	printf("\t\t\t\t\t\t.....................MMMMMMMMM.... .....\n");
	printf("\t\t\t\t\t\t..................MMMMMMMMMMM.......... \n");
	printf("\t\t\t\t\t\t.................MMMMMMMMMMM........... \n");
	printf("\t\t\t\t\t\t................MMMMMMMMMMMMMMMMMMMMM . \n");
	printf("\t\t\t\t\t\t..............MMMMMMMMMMMMMMMMMMMMMMMMM.\n");
	printf("\t\t\t\t\t\tMMMMMMMMMM..MMMMMMMMMMMMMMMMMMMMMMMMMMM,\n");
	printf("\t\t\t\t\t\tMMMMMMMMMM.+MMMMMMMMMMMMMMMMMMMMMMMMMM..\n");
	printf("\t\t\t\t\t\tMMM.. MMMM.+MMMMMMMMMMMMMMMMMMMMMMMMM...\n");
	printf("\t\t\t\t\t\tMMM...MMMM.+MMMMMMMMMMMMMMMMMMMMMMMMM ..\n");
	printf("\t\t\t\t\t\tMMMMMMMMMM +MMMMMMMMMMMMMMMMMMMMMMMM.. .\n");
	printf("\t\t\t\t\t\tMMMMMMMMMM .MMMMMMMMMMMMMMMMMMMMMMMM    \n");
	printf("\t\t\t\t\t\t     . .      ..MMMMMMMMMMMMMMMMMMM   . \n");
	printf("\t\t\t\t\t\t....... .  .. . .... MMMMMMMMMMMM7.   . \n");
	printf("\t\t\t\t\t\t.... ......... ................. ...   .\n");
	printf("\033[00m");
}


void cadre_gain(int gain, int azar, int credit)
{
	printf("\033[32m%s","\t\t\t\t\t\t╔══════════╦══════════╦══════════╗\n");
	printf("\t\t\t\t\t\t║   GAINS  ║  CREDIT  ║   MISE   ║\n");
	printf("\t\t\t\t\t\t║%10d║%10d║%10d║\n",gain , azar, credit); 
	printf("\t\t\t\t\t\t║          ║          ║          ║\n");   
	printf("\t\t\t\t\t\t╚══════════╩══════════╩══════════╝\n");
	printf("\033[00m");
}


void clearScreen() {

	printf("%c[2J", 0x1B);
	printf("%c[%d;%dH", 0x1B, 1, 1);
}

int cred3(int azar, int var, int var1, int var2)
{
	int gain;
	
	if(var == 0 && var1 == 0 && var2 == 0){
		azar = azar + 5000;
		gain = 5000;
		printf("\t\t\t\t\t\tTu as gagné + 5000 € FELICITATIONS !!!\n");
		my_delay(0.45);
		
			system("play -q 'Sound slot machine (Maquina tragaperras).mp3' &");
			clearScreen();			
			jack();
			lettre_jack1();
		
	}
	else if(var == 0 && var1 == 1 && var2 == 2){
		azar = azar + 1000;
		gain = 1000;
		printf("\t\t\t\t\t\tTu as gagné + 1000 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 5){
		azar = azar + 500;
		gain = 500;
		printf("\t\t\t\tTu as gagné + 500 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 4 && var2 == 2){
		azar = azar + 400;
		gain = 400;
		printf("\t\t\t\t\t\tTu as gagné + 400 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 0){
		azar = azar + 300;
		gain = 300;
		printf("\t\t\t\t\t\tTu as gagné + 300 €  FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 1 && var2 == 5){
		azar = azar + 250;
		gain = 250;
		printf("\t\t\t\t\t\tTu as gagné + 250 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 2 && var2 == 3){
		azar = azar + 200;
		gain = 200;
		printf("\t\t\t\t\t\tTu as gagné + 200 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 5){
		azar = azar + 150;
		gain = 150;
		printf("\t\t\t\t\t\tTu as gagné + 150 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 3){
		azar = azar + 100;
		gain = 100;
		printf("\t\t\t\t\t\tTu as gagné + 100 €  FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 1 && var2 == 1){
		azar = azar + 80;
		gain = 80;
		printf("\t\t\t\t\t\tTu as gagné + 80 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 3 && var2 == 2){
		azar = azar + 70;
		gain = 70;
		printf("\t\t\t\t\t\tTu as gagné + 70 €  FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 3){
		azar = azar + 60;
		gain = 60;
		printf("\t\t\t\t\t\tTu as gagné + 60 €  FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 4 && var2 == 3){
		azar = azar + 50;
		gain = 50;
		printf("\t\t\t\t\t\tTu as gagné + 50 €  FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 4 && var2 == 0){
		azar = azar + 40;
		gain = 40;
		printf("\t\t\t\t\t\tTu as gagné + 40 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 4 && var2 == 2){
		azar = azar + 30;
		gain = 30;
		printf("\t\t\t\t\t\tTu as gagné + 30 € FELICITATIONS !!!\n");
	}
	else{ gain=0;}
	return gain;
}

int cred2(int azar, int var, int var1, int var2)
{
	int gain;
	if(var == 0 && var1 == 0 && var2 == 0){
		azar = azar + 1100;
		gain = 1100;
		printf("\t\t\t\t\t\tTu as gagné + 1100€ FELICITATIONS !!!\n");
		pouce();
	}
	else if(var == 0 && var1 == 1 && var2 == 2){
		azar = azar + 800;
		gain = 800;
		printf("\t\t\t\t\t\tTu as gagné + 800 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 5){
		azar = azar + 400;
		gain = 400;		
		printf("\t\t\t\t\t\tTu as gagné + 400 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 4 && var2 == 2){
		azar = azar + 200;
		gain = 200;		
		printf("\t\t\t\t\t\tTu as gagné + 200 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 0){
		azar = azar + 80;
		gain = 80;
		printf("\t\t\t\t\t\tTu as gagné + 80 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 5){
		azar = azar + 60;
		gain = 60;
		printf("\t\t\t\t\t\tTu as gagné + 60 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 2 && var2 == 3){
		azar = azar + 50;
		gain = 50;
		printf("\t\t\t\t\t\tTu as gagné + 50 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 5){
		azar = azar + 40;
		gain = 40;
		printf("\t\t\t\t\t\tTu as gagné + 40 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 3){
		azar = azar + 30;
		gain = 30;
		printf("Tu as gagné + 30 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 1 && var2 == 1){
		azar = azar + 25;
		gain = 25;
		printf("\t\t\t\t\t\tTu as gagné + 25 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 2 && var2 == 2){
		azar = azar + 20;
		gain = 20;
		printf("\t\t\t\t\t\tTu as gagné + 20 €  FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 3){
		azar = azar + 16;
		gain = 16;
		printf("\t\t\t\t\t\tTu as gagné + 16 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 4 && var2 == 3){
		azar = azar + 13;
		gain = 13;
		printf("\t\t\t\t\t\tTu as gagné + 13 €  FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 4 && var2 == 0){
		azar = azar + 9;
		gain = 9;
		printf("\t\t\t\t\t\tTu as gagné + 9 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 4 && var2 == 2){
		azar = azar + 5;
		gain = 5;
		printf("\t\t\t\t\t\tTu as gagné + 5 € FELICITATIONS !!!\n");
	}
	else{gain =0;}	

	return gain;
}

int cred1(int azar, int var, int var1, int var2)
{
	int gain;
	if(var == 0 && var1 == 0 &&var2==0){
		azar = azar + 800;
		gain = 800;
		printf("\t\t\t\t\t\tTu as gagné + 800€ FELICITATIONS !!!\n");
		pouce();
	}
	else if(var == 0 && var1 == 1 &&var2==2){
		azar = azar + 600;
		gain = 600;
		printf("\t\t\t\t\t\tTu as gagné + 600€ FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 &&var2 == 5){
		azar = azar + 300;
		gain = 300;
		printf("\t\t\t\t\t\tTu as gagné + 300€ FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 4 && var2 == 2){
		azar = azar + 150;
		gain = 150;
		printf("\t\t\t\t\t\tTu as gagné + 150€ FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 0){
		azar = azar + 60;
		gain = 60;
		printf("\t\t\t\t\t\tTu as gagné + 60 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 5){
		azar = azar + 40;
		gain = 40;
		printf("\t\t\t\t\t\tTu as gagné + 40 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 2 && var2 == 3){
		azar = azar + 32;
		gain = 32;
		printf("\t\t\t\t\t\tTu as gagné + 32 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 5){
		azar = azar + 25;
		gain = 25;
		printf("\t\t\t\t\t\tTu as gagné + 25 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 4 && var2 == 3){
		azar = azar + 20;
		gain = 20;
		printf("\t\t\t\t\t\tTu as gagné + 20 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 1 && var2 == 1){
		azar = azar + 19;
		gain = 19;
		printf("\t\t\t\t\t\tTu as gagné + 19 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 2 && var2 == 2){
		azar = azar + 17;
		gain = 17;
		printf("\t\t\t\t\t\tTu as gagné + 17 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 3){
		azar = azar + 14;
		gain = 14;
		printf("\t\t\t\t\t\tTu as gagné + 14 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 4 && var2 == 3){
		azar = azar + 9;
		gain = 9;
		printf("\t\t\t\t\t\tTu as gagné + 9 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 4 && var2 == 0){
		azar = azar + 6;
		gain = 6;
		printf("\t\t\t\t\t\tTu as gagné + 6 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 4 && var2 == 2){
		azar = azar + 1;
		gain = 1;
		printf("\t\t\t\t\t\tTu as gagné + 1 € FELICITATIONS !!!\n");
	}
	else{gain=0;}
	return gain;
}

//========================+FOR NUMBERS+============================================

int numb3(int azar, int var, int var1, int var2)
{
	int gain;

	if(var == 0 && var1 == 1 && var2 == 2){
		azar = azar + 5000;
		gain = 5000;
		printf("\t\t\t\t\t\tTu as gagné + 5000 € FELICITATIONS !!!\n");
		system("play -q 'Sound slot machine (Maquina tragaperras).mp3' &");
		jack_nu();
	}
	else if(var == 5 && var1 == 5 && var2 == 4){
		azar = azar + 1000;
		gain = 1000;
		printf("\t\t\t\t\t\tTu as gagné + 1000 € FELICITATIONS !!!\n");
	}
	else if(var == 4 && var1 == 4 && var2 == 4){
		azar = azar + 500;
		gain = 500;
		printf("\t\t\t\tTu as gagné + 500 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 3 && var2 == 3){
		azar = azar + 400;
		gain = 400;
		printf("\t\t\t\t\t\tTu as gagné + 400 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 2 && var2 == 2){
		azar = azar + 300;
		gain = 300;
		printf("\t\t\t\t\t\tTu as gagné + 300 €  FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 1 && var2 == 1){
		azar = azar + 250;
		gain = 250;
		printf("\t\t\t\t\t\tTu as gagné + 250 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 0 && var2 == 0){
		azar = azar + 200;
		gain = 200;
		printf("\t\t\t\t\t\tTu as gagné + 200 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 5){
		azar = azar + 150;
		gain = 150;
		printf("\t\t\t\t\t\tTu as gagné + 150 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 3 && var2 == 5){
		azar = azar + 100;
		gain = 100;
		printf("\t\t\t\t\t\tTu as gagné + 100 €  FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 2 && var2 == 5){
		azar = azar + 80;
		gain = 80;
		printf("\t\t\t\t\t\tTu as gagné + 80 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 1 && var2 == 5){
		azar = azar + 70;
		gain = 70;
		printf("\t\t\t\t\t\tTu as gagné + 70 €  FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 0 && var2 == 5){
		azar = azar + 60;
		gain = 60;
		printf("\t\t\t\t\t\tTu as gagné + 60 €  FELICITATIONS !!!\n");
	}
	else if(var == 4 && var1 == 0 && var2 == 4){
		azar = azar + 50;
		gain = 50;
		printf("\t\t\t\t\t\tTu as gagné + 50 €  FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 0 && var2 == 3){
		azar = azar + 40;
		gain = 40;
		printf("\t\t\t\t\t\tTu as gagné + 40 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 1 && var2 == 2){
		azar = azar + 30;
		gain = 30;
		printf("\t\t\t\t\t\tTu as gagné + 30 € FELICITATIONS !!!\n");
	}
	else{ gain=0;}
	return gain;
}

int numb2(int azar, int var, int var1, int var2)
{
	int gain;
	if(var == 0 && var1 == 1 && var2 == 2){
		azar = azar + 1100;
		gain = 1100;
		printf("\t\t\t\t\t\tTu as gagné + 1100€ FELICITATIONS !!!\n");
		pouce();
	}
	else if(var == 5 && var1 == 5 && var2 == 4){
		azar = azar + 800;
		gain = 800;
		printf("\t\t\t\t\t\tTu as gagné + 800 € FELICITATIONS !!!\n");
	}
	else if(var == 4 && var1 == 4 && var2 == 4){
		azar = azar + 400;
		gain = 400;		
		printf("\t\t\t\t\t\tTu as gagné + 400 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 3 && var2 == 3){
		azar = azar + 200;
		gain = 200;		
		printf("\t\t\t\t\t\tTu as gagné + 200 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 2 && var2 == 2){
		azar = azar + 80;
		gain = 80;
		printf("\t\t\t\t\t\tTu as gagné + 80 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 1 && var2 == 1){
		azar = azar + 60;
		gain = 60;
		printf("\t\t\t\t\t\tTu as gagné + 60 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 0 && var2 == 0){
		azar = azar + 50;
		gain = 50;
		printf("\t\t\t\t\t\tTu as gagné + 50 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 5){
		azar = azar + 40;
		gain = 40;
		printf("\t\t\t\t\t\tTu as gagné + 40 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 3 && var2 == 5){
		azar = azar + 30;
		gain = 30;
		printf("Tu as gagné + 30 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 2 && var2 == 5){
		azar = azar + 25;
		gain = 25;
		printf("\t\t\t\t\t\tTu as gagné + 25 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 1 && var2 == 5){
		azar = azar + 20;
		gain = 20;
		printf("\t\t\t\t\t\tTu as gagné + 20 €  FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 0 && var2 == 5){
		azar = azar + 16;
		gain = 16;
		printf("\t\t\t\t\t\tTu as gagné + 16 € FELICITATIONS !!!\n");
	}
	else if(var == 4 && var1 == 0 && var2 == 4){
		azar = azar + 13;
		gain = 13;
		printf("\t\t\t\t\t\tTu as gagné + 13 €  FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 0 && var2 == 3){
		azar = azar + 9;
		gain = 9;
		printf("\t\t\t\t\t\tTu as gagné + 9 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 1 && var2 == 2){
		azar = azar + 5;
		gain = 5;
		printf("\t\t\t\t\t\tTu as gagné + 5 € FELICITATIONS !!!\n");
	}
	else{gain =0;}	

	return gain;
}

int numb1(int azar, int var, int var1, int var2)
{
	int gain;
	if(var == 0 && var1 == 1 && var2 == 2){
		azar = azar + 800;
		gain = 800;
		printf("\t\t\t\t\t\tTu as gagné + 800€ FELICITATIONS !!!\n");
		pouce();
	}
	else if(var == 5 && var1 == 5 && var2 == 4){
		azar = azar + 600;
		gain = 600;
		printf("\t\t\t\t\t\tTu as gagné + 600€ FELICITATIONS !!!\n");
	}
	else if(var == 4 && var1 == 4 && var2 == 4){
		azar = azar + 300;
		gain = 300;
		printf("\t\t\t\t\t\tTu as gagné + 300€ FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 3 && var2 == 3){
		azar = azar + 150;
		gain = 150;
		printf("\t\t\t\t\t\tTu as gagné + 150€ FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 2 && var2 == 2){
		azar = azar + 60;
		gain = 60;
		printf("\t\t\t\t\t\tTu as gagné + 60 € FELICITATIONS !!!\n");
	}
	else if(var == 1 && var1 == 1 && var2 == 1){
		azar = azar + 40;
		gain = 40;
		printf("\t\t\t\t\t\tTu as gagné + 40 € FELICITATIONS !!!\n");
	}
	else if(var == 0 && var1 == 0 && var2 == 0){
		azar = azar + 32;
		gain = 32;
		printf("\t\t\t\t\t\tTu as gagné + 32 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 4 && var2 == 5){
		azar = azar + 25;
		gain = 25;
		printf("\t\t\t\t\t\tTu as gagné + 25 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 3 && var2 == 5){
		azar = azar + 20;
		gain = 20;
		printf("\t\t\t\t\t\tTu as gagné + 20 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 2 && var2 == 5){
		azar = azar + 19;
		gain = 19;
		printf("\t\t\t\t\t\tTu as gagné + 19 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 1 && var2 == 5){
		azar = azar + 17;
		gain = 17;
		printf("\t\t\t\t\t\tTu as gagné + 17 € FELICITATIONS !!!\n");
	}
	else if(var == 5 && var1 == 0 && var2 == 5){
		azar = azar + 14;
		gain = 14;
		printf("\t\t\t\t\t\tTu as gagné + 14 € FELICITATIONS !!!\n");
	}
	else if(var ==4 && var1 == 0 && var2 == 4){
		azar = azar + 9;
		gain = 9;
		printf("\t\t\t\t\t\tTu as gagné + 9 € FELICITATIONS !!!\n");
	}
	else if(var == 3 && var1 == 0 && var2 == 3){
		azar = azar + 6;
		gain = 6;
		printf("\t\t\t\t\t\tTu as gagné + 6 € FELICITATIONS !!!\n");
	}
	else if(var == 2 && var1 == 1 && var2 == 2){
		azar = azar + 1;
		gain = 1;
		printf("\t\t\t\t\t\tTu as gagné + 1 € FELICITATIONS !!!\n");
	}
	else{gain=0;}
	return gain;
}


void privacy()
{
	printf("\t\t\t\t\t\t\t\t╔═══════════════════════════╗\n");
	printf("\t\t\t\t\t\t\t\t║                           ║\n");
	printf("\t\t\t\t\t\t\t\t║      PRIVACY POLICY       ║\n");
	printf("\t\t\t\t\t\t\t\t║                           ║\n");
	printf("\t\t\t\t\t\t\t\t╚═══════════════════════════╝\n");
	printf("\033[33m");
	printf("\t\t\t\t     __ __  ______         __     _         _____ __________  ____  __________ \n");
	printf("\t\t\t\t  __/ // /_/ ____/__  ____/ /____(_)____   / ___// ____/ __ )/ __ \\/ ____/ __ \\\n");
	printf("\t\t\t\t /_  _  __/ /   / _ \\/ __  / ___/ / ___/   \\__ \\/ __/ / __  / / / / / __/ / / /\n");
	printf("\t\t\t\t/_  _  __/ /___/  __/ /_/ / /  / / /__    ___/ / /___/ /_/ / /_/ / /_/ / /_/ / \n");
	printf("\t\t\t\t /_//_/  \\____/\\___/\\__,_/_/  /_/\\___/   /____/_____/_____/\\____/\\____/\\____/\n");
	printf("\n\n\n\n");
	printf("\033[35m");
	printf("\t\t\t\t     __ __  ____        ____           __   ____  ____  ____  ___    _   __\n");
	printf("\t\t\t\t  __/ // /_/ __ \\____ _/ __/___ ____  / /  / __ )/ __ \\/ __ )/   |  / | / /\n");
	printf("\t\t\t\t /_  _  __/ /_/ / __ `/ /_/ __ `/ _ \\/ /  / __  / / / / __  / /| | /  |/ / \n");
	printf("\t\t\t\t/_  _  __/ _, _/ /_/ / __/ /_/ /  __/ /  / /_/ / /_/ / /_/ / ___ |/ /|  / \n");
	printf("\t\t\t\t /_//_/ /_/ |_|\\__,_/_/  \\__,_/\\___/_/  /_____/\\____/_____/_/  |_/_/ |_/  \n");
	printf("\033[00m");
}



int print_cadre()
{
	int choix;

	printf("\t\t\t\t\t\t╔═══════════════════════════════════════════════╗\n");
	printf("\t\t\t\t\t\t║      ");
	printf("\033[30m%s\033[00m","__      _____ _  _ _____ ___  ___        ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║      ");
	printf("\033[33m%s\033[00m","\\ \\    / /_ _| \\| |_   _/ _ \\| _ \\       ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║       ");
	printf("\033[31m%s\033[00m","\\ \\/\\/ / | || .` | | || (_) |  _/       ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║        ");
	printf("\033[35m%s\033[00m","\\_/\\_/ |___|_|\\_| |_| \\___/|_|  	");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║        ");
	printf("\033[30m%s\033[00m","___   _   ___ ___ _  _  ___            ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║       ");
	printf("\033[33m%s\033[00m","/ __| /_\\ / __|_ _| \\| |/ _ \\           ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║      ");
	printf("\033[31m%s\033[00m","| (__ / _ \\\\__ \\| || .` | (_) |          ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║       ");
	printf("\033[35m%s\033[00m","\\___/_/ \\_\\___/___|_|\\_|\\___/  ®        ");
	printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║ 						║\n");
	printf("\t\t\t\t\t\t║              	    ");printf("\033[3m%s\033[00m","WELCOME 	                ");printf("\033[00m%s\033[00m","║\n");
	printf("\t\t\t\t\t\t║                                               ║\n");
	printf("\t\t\t\t\t\t║      ♥	♦	 ♣       ♠         ♦    ║\n"); 
	printf("\t\t\t\t\t\t║♣          ♠       ♥        ♣        ♠        ♦║\n");
	printf("\t\t\t\t\t\t║      ♥	♠        ♥       ♦         ♣    ║\n");
	printf("\t\t\t\t\t\t║ ♥	    ♦	    ♣        ♠        ♥        ♦║\n");
	printf("\t\t\t\t\t\t║					    	║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░1-Jouer░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");  
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓2-Règles▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░3-Conditions de victoire░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓4-Privacy policy▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
        printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░5-Mode Jackpot░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓6-Exit▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("\t\t\t\t\t\t╚═══════════════════════════════════════════════╝\n\n");

	do
	{
	printf("\t\t\t\t\t\t\t    Veillez entrer un chiffre:");

	scanf("%d", &choix);
} while(choix<1 && choix>6);
	return choix;

}

void regles()
{

	int i;
	FILE * file;
	file = fopen ( "règles.txt" , "r" );
	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{

			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	

}

void conditions()
{
	printf("╔══════════════════════════════════════════════════════════════════╗\n");
	printf("║    ♦	██╗    ██╗ ██╗ ███╗   ██╗ ████████╗ ██████╗  ██████╗ ♥     ║\n");
	printf("║♥      ██║    ██║ ██║ ████╗  ██║ ╚══██╔══╝██╔═══██╗ ██╔══██╗    ♣ ║\n");
	printf("║    ♠  ██║ █╗ ██║ ██║ ██╔██╗ ██║    ██║   ██║   ██║ ██████╔╝♣     ║\n");
	printf("║♣      ██║███╗██║ ██║ ██║╚██╗██║    ██║   ██║   ██║ ██╔═══╝     ♠ ║\n");
	printf("║    ♦  ╚███╔███╔╝ ██║ ██║ ╚████║    ██║   ╚██████╔╝ ██║     ♦     ║\n");
	printf("║♠       ╚══╝╚══╝  ╚═╝ ╚═╝  ╚═══╝    ╚═╝    ╚═════╝  ╚═╝ ♥       ♠ ║\n");
	printf("║    ♥       ♦       ♣       ♠       ♦       ♦       ♥       ♦     ║\n");
	printf("║♣       ♠       ♥       ♣       ♠       ♦       ♠       ♣       ♥ ║\n");
	printf("╚══════════════════════════════════════════════════════════════════╝");
	printf("\n");
	printf("╔═══════════════╦════════════════════════════════════════════════════╗\n");
	printf("║               ║ ♣      ♣      ♣       Mise	    ♣	    ♣      ♣ ║\n");
	printf("║ Combinaisons  ╠════════════════╦═════════════════╦═════════════════╣\n");	
	printf("║               ║   1er crédit   ║   2ème crédit   ║   3ème crédit   ║\n");
	printf("╠═══════╦═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  WWW  ║  123  ║      800       ║      1100       ║      5000       ║\n");  
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  WIN  ║  665  ║      600       ║       800	   ║      1000       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");                   
	printf("║  TOP  ║  555  ║      300       ║       400       ║       500       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  WON  ║  444  ║      150       ║       200       ║       400       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  POW  ║  333  ║       60       ║        80       ║       300       ║\n");	
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");      
	printf("║  TIP  ║  222  ║       40       ║	  60       ║       250       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  INT  ║  111  ║       32       ║	  50       ║	   200	     ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  POP  ║  656  ║       25       ║	  40       ║       150       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  TOT  ║  646  ║       20       ║	  30       ║       100       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n"); 	 	 	 
	printf("║  III  ║  636  ║       19       ║        25       ║        80       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n"); 	 	 	 
	printf("║  WTN  ║  626  ║       17       ║	  20       ║	    70 	     ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  POT  ║  616  ║       14       ║        16       ║        60       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  WOT  ║  515  ║        9       ║        13       ║	    50	     ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  NOW  ║  414  ║        6       ║         9       ║        40       ║\n");
	printf("╠═══════╬═══════╬════════════════╬═════════════════╬═════════════════╣\n");
	printf("║  NON  ║  313  ║        1       ║         5       ║        30       ║\n");
	printf("╚═══════╩═══════╩════════════════╩═════════════════╩═════════════════╝\n");

}

void remplacer(char *string){
	int i;
	for(i= 0 ; i < 100 ; i++){
		if(*(string+i) == '\n') *(string+i) = '\0';
	}
}


void my_delay(double i)    /*Pause l'application pour i seconds*/
{
	clock_t start,end;
	start=clock();
	while(((end=clock())-start)<=i*CLOCKS_PER_SEC);
}


void end()
{
	int i;
	FILE * file;
	file = fopen ( "end_message.txt" , "r" );
	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{
			my_delay(0.03);
			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}

void welcome()
{
	int i;
	FILE * file;
	file = fopen ( "welcome.txt" , "r" );
	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<1;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{


			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}

void gameOver()
{
	int i;
	FILE * file;
	file = fopen ( "GameOver.txt" , "r" );

	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{
			my_delay(0.11);
			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}

void message_bvn()
{		
	printf("\033[30m");
	clearScreen(0);
	welcome();
	my_delay(0.7);
	printf("\033[33m");

	clearScreen(0);
	welcome();
	my_delay(0.7);
	printf("\033[35m");

	clearScreen(0);
	welcome();
	my_delay(0.7);
	printf("\033[31m");

	clearScreen(0);
	welcome();
	my_delay(0.7);
	printf("\033[32m");

	clearScreen(0);
	welcome();
	my_delay(0.7);
	printf("\033[00m");
}



int mode_jeu()
{
	int i;
	printf("\t\t\t\t\t\tAvec quelle version du jeu voulez vous jouer ?\n");
	printf("\n");
	printf("\n");
	printf("   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");	  
	printf("   ▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒\n");
	printf("   ▒░░░░░██╗ ██╗     ███╗   ███╗ ██████╗ ██████╗ ███████╗    ██╗     ███████╗████████╗████████╗██████╗ ███████╗███████╗░░░░░░░░░▒\n");    
	printf("   ▒░░░░███║ ╚██╗    ████╗ ████║██╔═══██╗██╔══██╗██╔════╝    ██║     ██╔════╝╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝██╔════╝░░░░░░░░░▒\n");      
	printf("   ▒░►░░╚██║  ██║    ██╔████╔██║██║   ██║██║  ██║█████╗      ██║     █████╗     ██║      ██║   ██████╔╝█████╗  ███████╗░░░░░░░░░▒\n");      
	printf("   ▒░░░░░██║  ██║    ██║╚██╔╝██║██║   ██║██║  ██║██╔══╝      ██║     ██╔══╝     ██║      ██║   ██╔══██╗██╔══╝  ╚════██║░░░░░░░░░▒\n");      
	printf("   ▒░░░░░██║ ██╔╝    ██║ ╚═╝ ██║╚██████╔╝██████╔╝███████╗    ███████╗███████╗   ██║      ██║   ██║  ██║███████╗███████║░░░░░░░░░▒\n");      
	printf("   ▒░░░░░╚═╝ ╚═╝     ╚═╝     ╚═╝ ╚═════╝ ╚═════╝ ╚══════╝    ╚══════╝╚══════╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝╚══════╝░░░░░░░░░▒\n");      
	printf("   ▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒\n");
	printf("   ▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒\n");
	printf("   ▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒\n");
	printf("   ▒░░░░██████╗ ██╗     ███╗   ███╗ ██████╗ ██████╗ ███████╗    ███╗   ██╗ ██████╗ ███╗   ███╗██████╗ ██████╗ ███████╗███████╗░░▒\n"); 
	printf("   ▒░░░░╚════██╗╚██╗    ████╗ ████║██╔═══██╗██╔══██╗██╔════╝    ████╗  ██║██╔═══██╗████╗ ████║██╔══██╗██╔══██╗██╔════╝██╔════╝░░▒\n"); 
	printf("   ▒░►░░░█████╔╝ ██║    ██╔████╔██║██║   ██║██║  ██║█████╗      ██╔██╗ ██║██║   ██║██╔████╔██║██████╔╝██████╔╝█████╗  ███████╗░░▒\n"); 
	printf("   ▒░░░░██╔═══╝  ██║    ██║╚██╔╝██║██║   ██║██║  ██║██╔══╝      ██║╚██╗██║██║   ██║██║╚██╔╝██║██╔══██╗██╔══██╗██╔══╝  ╚════██║░░▒\n"); 
	printf("   ▒░░░░███████╗██╔╝    ██║ ╚═╝ ██║╚██████╔╝██████╔╝███████╗    ██║ ╚████║╚██████╔╝██║ ╚═╝ ██║██████╔╝██║  ██║███████╗███████║░░▒\n"); 
	printf("   ▒░░░░╚══════╝╚═╝     ╚═╝     ╚═╝ ╚═════╝ ╚═════╝ ╚══════╝    ╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝░░▒\n"); 
	printf("   ▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒\n");
	printf("   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
	printf("\n");
	printf("\t\t\t\t\t\tSélectionnez votre mode puis cliquez sur ENTREE : ");
	scanf("%d", &i);
	printf("\n");
	return i;
}


void viderBuffer()
{
	int c = 0;
	while (c != '\n' && c != EOF)
	{
		c = getchar();
	}
}


void randoms()
{
	int var, var1, var2;
	FILE * fic;
	FILE * fic1;
	FILE * fic2;
	int n = 100;
	char l[100];
	srand(time(NULL));
	int i;
	for(i=0; i<=10; i++)
	{						
		clearScreen(0);
		var=rand()%6;
		if (var==0){
			fic = fopen("w.txt", "r");}
		if(var==1){
			fic = fopen("i.txt", "r");}
		if(var==2){
			fic = fopen("n.txt", "r");}
		if(var==3){
			fic = fopen("t.txt", "r");}
		if(var==4){
			fic = fopen("o.txt", "r");}
		if(var==5){
			fic = fopen("p.txt", "r");}

		var1=rand()%6;
		if (var1 ==0){
			fic1 = fopen("w.txt", "r");}
		if(var1==1){
			fic1 = fopen("i.txt", "r");}
		if(var1 ==2){
			fic1 = fopen("n.txt", "r");}
		if(var1==3){
			fic1 = fopen("t.txt", "r");}
		if(var1==4){
			fic1 = fopen("o.txt", "r");}
		if(var1==5){
			fic1 = fopen("p.txt", "r");}


		var2=rand()%6;
		if (var2 ==0){
			fic2 = fopen("w.txt", "r");}
		if(var2==1){
			fic2 = fopen("i.txt", "r");}
		if(var2==2){
			fic2 = fopen("n.txt", "r");}
		if(var2==3){
			fic2 = fopen("t.txt", "r");}
		if(var2==4){
			fic2 = fopen("o.txt", "r");}
		if(var2==5){
			fic2 = fopen("p.txt", "r");}
		do{


			printf("\033[34m");	
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


			printf("\033[31m");

			fgets(l, n ,fic2);
			remplacer(&l[0]);
			printf("%s", l);
			memset(l, 0, sizeof(l));
			printf("\033[00m");

			printf("\n");

		} while (fgetc(fic) != EOF && fgetc(fic1) != EOF && fgetc(fic2) != EOF);
		my_delay(0.1);}
	for(i=0; i<=5; i++)
	{						
		clearScreen(0);
		var=rand()%6;
		if (var==0){
			fic = fopen("w.txt", "r");}
		if(var==1){
			fic = fopen("i.txt", "r");}
		if(var==2){
			fic = fopen("n.txt", "r");}
		if(var==3){
			fic = fopen("t.txt", "r");}
		if(var==4){
			fic = fopen("o.txt", "r");}
		if(var==5){
			fic = fopen("p.txt", "r");}

		var1=rand()%6;
		if (var1 ==0){
			fic1 = fopen("w.txt", "r");}
		if(var1==1){
			fic1 = fopen("i.txt", "r");}
		if(var1 ==2){
			fic1 = fopen("n.txt", "r");}
		if(var1==3){
			fic1 = fopen("t.txt", "r");}
		if(var1==4){
			fic1 = fopen("o.txt", "r");}
		if(var1==5){
			fic1 = fopen("p.txt", "r");}


		var2=rand()%6;
		if (var2 ==0){
			fic2 = fopen("w.txt", "r");}
		if(var2==1){
			fic2 = fopen("i.txt", "r");}
		if(var2==2){
			fic2 = fopen("n.txt", "r");}
		if(var2==3){
			fic2 = fopen("t.txt", "r");}
		if(var2==4){
			fic2 = fopen("o.txt", "r");}
		if(var2==5){
			fic2 = fopen("p.txt", "r");}
		do{


			printf("\033[34m");	
			printf("\t\t\t\t");
			//my_delay(0.03);
			fgets(l, n ,fic);
			remplacer(&l[0]);
			printf("%s",l);
			memset(l, 0, sizeof(l));


			printf("\033[00m");
			//my_delay(0.03);
			fgets(l, n ,fic1);
			remplacer(&l[0]);
			printf("%s", l);
			memset(l, 0, sizeof(l));


			printf("\033[31m");
			//my_delay(0.03);
			fgets(l, n ,fic2);
			remplacer(&l[0]);
			printf("%s", l);
			memset(l, 0, sizeof(l));
			printf("\033[00m");

			printf("\n");

		} while (fgetc(fic) != EOF && fgetc(fic1) != EOF && fgetc(fic2) != EOF);
		my_delay(0.4);
	}
}

char key_pressed() {
	struct termios oldterm, newterm;
	int oldfd;
	char c, result = 0;
	tcgetattr (STDIN_FILENO, &oldterm);
	newterm = oldterm;
	newterm.c_lflag &= ~(ICANON | ECHO);
	tcsetattr (STDIN_FILENO, TCSANOW, &newterm);
	oldfd = fcntl(STDIN_FILENO, F_GETFL, 0);
	fcntl (STDIN_FILENO, F_SETFL, oldfd | O_NONBLOCK);
	c = getchar();
	tcsetattr (STDIN_FILENO, TCSANOW, &oldterm);
	fcntl (STDIN_FILENO, F_SETFL, oldfd);
	if (c != EOF) {
		ungetc(c, stdin);
		result = getchar();
	}
	return result;
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


void randoms_numb()
{
	int var, var1, var2;
	FILE * fic;
	FILE * fic1;
	FILE * fic2;
	int n = 100;
	char l[100];
	srand(time(NULL));
	int i;
	for(i=0; i<=10; i++)
	{						
		clearScreen(0);
		var=rand()%6;
		if (var==0){
			fic = fopen("1.txt", "r");}
		if(var==1){
			fic = fopen("2.txt", "r");}
		if(var==2){
			fic = fopen("3.txt", "r");}
		if(var==3){
			fic = fopen("4.txt", "r");}
		if(var==4){
			fic = fopen("5.txt", "r");}
		if(var==5){
			fic = fopen("6.txt", "r");}

		var1=rand()%6;
		if (var1 ==0){
			fic1 = fopen("1.txt", "r");}
		if(var1==1){
			fic1 = fopen("2.txt", "r");}
		if(var1 ==2){
			fic1 = fopen("3.txt", "r");}
		if(var1==3){
			fic1 = fopen("4.txt", "r");}
		if(var1==4){
			fic1 = fopen("5.txt", "r");}
		if(var1==5){
			fic1 = fopen("6.txt", "r");}


		var2=rand()%6;
		if (var2 ==0){
			fic2 = fopen("1.txt", "r");}
		if(var2==1){
			fic2 = fopen("2.txt", "r");}
		if(var2==2){
			fic2 = fopen("3.txt", "r");}
		if(var2==3){
			fic2 = fopen("4.txt", "r");}
		if(var2==4){
			fic2 = fopen("5.txt", "r");}
		if(var2==5){
			fic2 = fopen("6.txt", "r");}
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
		my_delay(0.1);}
	for(i=0; i<=5; i++)
	{						
		clearScreen(0);
		var=rand()%6;
		if (var==0){
			fic = fopen("1.txt", "r");}
		if(var==1){
			fic = fopen("2.txt", "r");}
		if(var==2){
			fic = fopen("3.txt", "r");}
		if(var==3){
			fic = fopen("4.txt", "r");}
		if(var==4){
			fic = fopen("5.txt", "r");}
		if(var==5){
			fic = fopen("6.txt", "r");}

		var1=rand()%6;
		if (var1 ==0){
			fic1 = fopen("1.txt", "r");}
		if(var1==1){
			fic1 = fopen("2.txt", "r");}
		if(var1 ==2){
			fic1 = fopen("3.txt", "r");}
		if(var1==3){
			fic1 = fopen("4.txt", "r");}
		if(var1==4){
			fic1 = fopen("5.txt", "r");}
		if(var1==5){
			fic1 = fopen("6.txt", "r");}

		var2=rand()%6;
		if (var2 ==0){
			fic2 = fopen("1.txt", "r");}
		if(var2==1){
			fic2 = fopen("2.txt", "r");}
		if(var2==2){
			fic2 = fopen("3.txt", "r");}
		if(var2==3){
			fic2 = fopen("4.txt", "r");}
		if(var2==4){
			fic2 = fopen("5.txt", "r");}
		if(var2==5){
			fic2 = fopen("6.txt", "r");}
		do{


			printf("\033[31m");	
			printf("\t\t\t\t");
			//my_delay(0.03);
			fgets(l, n ,fic);
			remplacer(&l[0]);
			printf("%s",l);
			memset(l, 0, sizeof(l));


			printf("\033[00m");
			//my_delay(0.03);
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
	}
}
void lettre_jack()
{
	int i;
	FILE * file;
	file = fopen ( "jackpot.txt" , "r" );

	char line [ 1200 ]; /* or other suitable maximum line size */
	for(i=0; i<3;i++){
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{
			printf("%s", line); /* write the line */
		}
	}
	fclose ( file );	
}

void lettre_jack1()
{
int i;
		clearScreen(0);
		printf("\033[33m");
		lettre_jack();
		my_delay(0.45);
		clearScreen(0);
		printf("\033[31m");
		lettre_jack();
		my_delay(0.45);
		clearScreen(0);
		printf("\033[35m");
		lettre_jack();
		my_delay(0.45);
		printf("\033[00m");
for(i=0; i<=2; i++)
{
my_delay(0.45);
printf("\033[33m");
clearScreen(0);



printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     ██╗\n");
printf("\t\t\t\t     ██║\n");
printf("\t\t\t\t     ██║\n");
printf("\t\t\t\t██   ██║\n");
printf("\t\t\t\t╚█████╔╝\n");
printf("\t\t\t\t ╚════╝ \n");
        
my_delay(0.4);
		clearScreen(0);
		printf("\033[35m");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t           █████╗\n");
printf("\t\t\t\t           ██╔══██╗\n");
printf("\t\t\t\t           ███████║\n");
printf("\t\t\t\t           ██╔══██║\n");
printf("\t\t\t\t           ██║  ██║\n");
printf("\t\t\t\t	   ╚═╝  ╚═╝\n");
        
my_delay(0.4);
		clearScreen(0);
		printf("\033[35m");
//printf("\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t		    ██████╗\n");
printf("\t\t\t\t		    ██╔════╝\n");
printf("\t\t\t\t		    ██║     \n");
printf("\t\t\t\t		    ██║     \n");
printf("\t\t\t\t		    ╚██████╗\n");
printf("\t\t\t\t		     ╚═════╝\n");

my_delay(0.4);
		clearScreen(0);
		printf("\033[33m");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t			    ██╗  ██╗\n");
printf("\t\t\t\t			    ██║ ██╔╝\n");
printf("\t\t\t\t			    █████╔╝ \n");
printf("\t\t\t\t			    ██╔═██╗ \n");
printf("\t\t\t\t			    ██║  ██╗\n");
printf("\t\t\t\t			    ╚═╝  ╚═╝\n");
        
my_delay(0.4);
		clearScreen(0);
		printf("\033[36m");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t			    	       ██████╗\n"); 
printf("\t\t\t\t			    	       ██╔══██╗\n");
printf("\t\t\t\t			    	       ██████╔╝\n");
printf("\t\t\t\t			    	       ██╔═══╝ \n");
printf("\t\t\t\t			    	       ██║     \n");
printf("\t\t\t\t			    	       ╚═╝     \n");

my_delay(0.4);
		clearScreen(0);
		printf("\033[31m");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t                                                  ██████╗\n");
printf("\t\t\t\t                                                  ██╔═══██╗\n");
printf("\t\t\t\t                                                  ██║   ██║\n");
printf("\t\t\t\t                                                  ██║   ██║\n");
printf("\t\t\t\t                                                  ╚██████╔╝\n");
printf("\t\t\t\t                                                   ╚═════╝ \n");
my_delay(0.4);
		clearScreen(0);
		printf("\033[39m");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t                                                              ████████╗\n");
printf("\t\t\t\t                                                              ╚══██╔══╝\n");
printf("\t\t\t\t                                                                 ██║   \n");
printf("\t\t\t\t                                                                 ██║   \n");
printf("\t\t\t\t                                                                 ██║   \n");
printf("\t\t\t\t                                                                 ╚═╝   \n");

my_delay(0.1);
		clearScreen(0);
		printf("\033[35m");
    }               
my_delay(0.4);        	                            
clearScreen(0);
		printf("\033[33m");
		lettre_jack();
		my_delay(0.45);
		clearScreen(0);
		printf("\033[31m");
		lettre_jack();
		my_delay(0.45);
		clearScreen(0);
		printf("\033[35m");
		lettre_jack();
		my_delay(0.45);
		printf("\033[00m");



}

void jack_nu()
{
FILE * fic;
	FILE * fic1;
	FILE * fic2;
	int n = 100;
	char l[100];
	srand(time(NULL));
	int i;
	fic = fopen("1.txt", "r");
	fic1 = fopen("2.txt", "r");
	fic2 = fopen("3.txt", "r");

randoms_numb();
clearScreen(0);
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
	my_delay(1);
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
}
void jack()
{
	FILE * fic;
	FILE * fic1;
	FILE * fic2;
	int n = 100;
	char l[100];
	srand(time(NULL));
	int i;
	fic = fopen("w.txt", "r");
	fic1 = fopen("w.txt", "r");
	fic2 = fopen("w.txt", "r");

randoms();
clearScreen(0);
	do{
		printf("\033[34m");	
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


		printf("\033[31m");
		fgets(l, n ,fic2);
		remplacer(&l[0]);
		printf("%s", l);
		memset(l, 0, sizeof(l));
		printf("\033[00m");

		printf("\n");

	} while (fgetc(fic) != EOF && fgetc(fic1) != EOF && fgetc(fic2) != EOF);
	my_delay(1);
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
}

//void AFFIEUR_B(int tab1[], int tab2[]) {
//http://www.irongeek.com/alt-numpad-ascii-key-combos-and-chart.html


//http://www.theasciicode.com.ar
//http://www.cdrummond.qc.ca/cegep/informat/Professeurs/Alain/files/ascii.htm
