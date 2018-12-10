#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


#include "fonctions.h"

int main(/*int argc, char *argv[]*/)
{

system("play -q 'RJD2 - Clean Living.mp3' &");//Mettre de la musique pour le Casino

	int choix = 0; //Pour le 

	int var, var1, var2, yes, credit;
	char c;
	/*Définir différents pointeurs qui pointrons 3 diffétentes lettres ou chiffres*/
	FILE * fic;
	FILE * fic1;
	FILE * fic2;

	int n = 100;
	char l[100];
	srand(time(NULL));
	int azar, mode;/*azar correspond au crédit et mode permet de sélectionner le mode de jeu*/
	int gain;//Gain pour les sommes des combinaisons gagnantes
	
	message_bvn();	//===Couleur pour le message d'acceuil====

	do
	{	
		clearScreen(0);
		switch (choix = print_cadre(0))
		{
			do
			{
				clearScreen(0);
				case 1:	
				clearScreen(0);
				mode = mode_jeu();
				if(mode == 1){	
					printf("\t\t\t\t\t\tCombien de crédit souhaitez-vous utiliser : ");
					scanf("%d", &azar);
					printf("\n");
					do{
					printf("\t\t\t\t\t\tCombien de crédits à miser (compris entre 1 et 3) : ");
					scanf("%d", &credit);
					}while(credit<1 || credit>3);
					getchar();					
					printf("\n");

					do{

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
						
						if(credit==1 || credit==2 || credit==3 ) randoms();
						else if (credit==4){

printf("\033[32m");
system("killall play &");
system("play -q 'Oh Yeah (Sound Effect).mp3' &");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t      ╔════════════════════════════════════════╗\n");
printf("					      ║VOUS REPARTEZ AVEC%7d CREDITS BRAVO!║\n",azar);
printf("                                              ╚════════════════════════════════════════╝\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
my_delay(3);
printf("\033[00m");
system("killall play &");
exit(-1);
}		
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
						my_delay(0.3);
						printf("\n\n");

		
if(credit==1)
						{	
							azar -= credit;

							gain = cred1(azar, var, var1, var2);

							azar=azar+gain;
							printf("\n");
							cadre_gain(gain, azar, credit);						

						}	
						else if (credit==2)
						{
							azar -= credit;
							gain = cred2(azar, var, var1, var2);
							azar=azar+gain;
							printf("\n");
							cadre_gain(gain, azar, credit);

						}
						else if (credit==3)
						{
							azar -= credit;
							gain = cred3(azar, var, var1, var2);
							azar=azar+gain;
							printf("\n");
							cadre_gain(gain, azar, credit);
						}
						
						
						if(azar <=0){ 
						clearScreen(0);
						system("killall play &");
						system("play -q 'Game Over sound effect.mp3' &");
						gameOver();
													
						exit(-1);
system("killall play &");
						}
						fclose(fic);
						fclose(fic1);
						fclose(fic2);

						printf("\033[32m%s\033[00m","[Enter]");
						printf(": Continuer avec la même mise\n"); 
						printf("\033[32m%s\033[00m","[1] [2] or [3]");
						printf(": Pour changer la mise\n");
						printf("\033[32m%s\033[00m","[4]");
						printf(": Pour repartir avec vos crédits\n");
						printf("\033[32m%s\033[00m","[5]");
						printf(": Pour revenir au Menu\n");
						

						c = getchar();

						if(c == '1' || c =='2' || c =='3' || c=='4' || c=='5' )
						{
												
						credit = (int)c - '0'; //POUR ENLEVER LE GAP
											
						getchar();
						} 
						

					}while(credit>=1 && credit<=4);

				}else if(mode == 2)
					{
					printf("\t\t\t\t\t\tCombien de crédit souhaitez-vous utiliser : ");
					scanf("%d", &azar);
					printf("\n");
					do{
					printf("\t\t\t\t\t\tCombien de crédits à miser (compris entre 1 et 3) : ");
					scanf("%d", &credit);
					}while(credit<1 || credit>3);
					getchar();					
					
					printf("\n");

					do{
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
						if(credit==1 || credit==2 || credit==3 ) randoms_numb();
else if (credit==4){

printf("\033[32m");
system("killall play &");
system("play -q 'Oh Yeah (Sound Effect).mp3' &");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t      ╔════════════════════════════════════════╗\n");
printf("					      ║VOUS REPARTEZ AVEC%7d CREDITS BRAVO!║\n",azar);
printf("                                              ╚════════════════════════════════════════╝\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
my_delay(3);
printf("\033[00m");
system("killall play &");
exit(-1);
}						

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
						my_delay(0.3);
						printf("\n\n");

						if (credit==1)
						{	
							azar -= credit;

							gain = numb1(azar, var, var1, var2);

							azar=azar+gain;
							printf("\n");
							cadre_gain(gain, azar, credit);						

						}	
						else if (credit==2)
						{
							azar -= credit;
							gain = numb2(azar, var, var1, var2);
							azar=azar+gain;
							printf("\n");
							cadre_gain(gain, azar, credit);

						}
						else if (credit==3)
						{
							azar -= credit;
							gain = numb3(azar, var, var1, var2);
							azar=azar+gain;
							printf("\n");
							cadre_gain(gain, azar, credit);
						}
						

						if(azar <=0){ 
						clearScreen(0);
						system("killall play &");
						system("play -q 'Game Over sound effect.mp3' &");
						gameOver();
						system("killall play &");							
						exit(-1);
						}

						fclose(fic);
						fclose(fic1);
						fclose(fic2);
						printf("\033[33m%s\033[00m","[Enter]");
						printf(": Continuer avec la même mise\n"); 
						printf("\033[33m%s\033[00m","[1] [2] or [3]");
						printf(": Pour changer la mise\n");
						printf("\033[33m%s\033[00m","[4]");
						printf(": Pour repartir avec vos crédits\n");
						printf("\033[33m%s\033[00m","[5]");
						printf(": Pour revenir au Menu\n");

						c = getchar();

						if(c == '1' || c =='2' || c =='3' || c=='4' || c=='5' )
						{
						credit = (int)c - '0';
						
						getchar();
						} 

					}while(credit>=1 && credit<=4);

				}		
			
				break;

				case 2:

				clearScreen(0);
				regles(0);
				break;

				case 3:
				clearScreen();
				conditions();

				break;

				case 4:
				clearScreen(0);
				privacy();

				break;	
				
				case 5:
				
				system("play -q 'Sound slot machine (Maquina tragaperras).mp3' &");
				gain=5000; azar=5000;
				credit=3;
				clearScreen();
				jack();
				lettre_jack1();
				cadre_gain(gain, azar, credit);
				

break;
				case 6:
				clearScreen();
				
				usleep(200000);	
				end();
				system("killall play &");
				exit(-1);
				break;

				default:
				printf("Vous n'avez pas rentre un nombre correct.\nVeillez réesseyer.\n");
				break;

			}while(print_cadre(0)<1 && print_cadre(0)>5);
		}

		printf("\n\n");
		do{
		printf("Retourner au menu?\n");
		printf("1-Oui\n");
		printf("2-Non\n");
		
		scanf("%d",&yes);
		}while(yes!=1 &&yes!=2);
	if(yes!=1){system("killall play &");}
	}while(yes == 1);	

	return 0;
}














