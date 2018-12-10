#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void clearScreen() {
	/* Animation - clear the previous display */
	printf("%c[2J", 0x1B);
	/* Animation - Move the cursor top-left */
	printf("%c[%d;%dH", 0x1B, 1, 1);
}


int print_cadre()
{
	int choix;

	printf("╔═══════════════════════════════════════════════╗\n");
	printf("║      __      _____ _  _ _____ ___  ___        ║\n");
	printf("║      \\ \\    / /_ _| \\| |_   _/ _ \\| _ \\       ║\n");
	printf("║       \\ \\/\\/ / | || .` | | || (_) |  _/       ║\n");
	printf("║        \\_/\\_/ |___|_|\\_| |_| \\___/|_|  	║\n");
	printf("║        ___   _   ___ ___ _  _  ___            ║\n");
	printf("║       / __| /_\\ / __|_ _| \\| |/ _ \\           ║\n");
	printf("║      | (__ / _ \\\\__ \\| || .` | (_) |          ║\n");
	printf("║       \\___/_/ \\_\\___/___|_|\\_|\\___/           ║\n");
	printf("║ 						║\n");
	printf("║              	    WELCOME 	                ║\n");
	printf("║                                               ║\n");
	printf("║      ♥	♦	 ♣       ♠         ♦    ║\n");
	printf("║♣          ♠       ♥        ♣        ♠        ♦║\n");
	printf("║      ♥	♠        ♥       ♦         ♣    ║\n");
	printf("║ ♥	    ♦	    ♣        ♠        ♥        ♦║\n");
	printf("║					    	║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║░░░░░░░░░░░░░░░░░░░1-Jouer░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");  
	printf("║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓2-Règles▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║░░░░░░░░░░░░3-Conditions de victoire░░░░░░░░░░░║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓4-Privacy policy▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░5-Exit░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
	printf("╚═══════════════════════════════════════════════╝\n");

	printf("Veillez entrer un chiffre:\n");

	scanf("%d", &choix);


	//	printf("Input error\n");

	//	exit(-1);

	//scanf("%d", &choix);
	return choix;

}

void regles()
{
	printf("Règles:\n");
	printf("Au début du jeu le joueur dépose un certain nombre de crédits, par exemple 100 crédits.\n");
	printf("Avant chaque  lancement  de  la  machine,  le  joueur  peut  choisir  de  miser  soit  1,\n");  
	printf("2  ou  3  crédits. Après chaque lancement, la machine indique le gain obtenu en fonction de\n"); 
	printf("la combinaison qui est apparue. Bien entendu, le gain obtenu correspond au gain de base lié \n"); 
	printf("à la combinaison multiplié par la mise du joueur. Le jeu se poursuit tant que le joueur le \n");   
	printf("souhaite et que son nombre de crédits est positif. Le jeu se termine automatiquement dans \n");
	printf("le cas où le joueur ne dispose plus de crédits. Le joueur peut également décider d’encaisser\n");
	printf("les crédits disponibles à tout moment du jeu\n");
}

void conditions()
{
printf("	Lettres de base : {W, I, N, T, O, P} \n");
printf("╔═════════════╦════════════════════════════════════════════════════╗\n");
printf("║             ║			      Mise		 	   ║\n");
printf("║Combinaisons ╠════════════════╦═════════════════╦═════════════════╣\n");	
printf("║	      ║	  1er crédit   ║   2ème crédit   ║   3ème crédit   ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     WWW     ║      800       ║       1100      ║      5000       ║\n");  
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     WIN     ║	     600       ║       800	 ║      1000       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");                   
printf("║     TOP     ║	     300       ║       400       ║       500       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     WON     ║	     150       ║       200	 ║       400       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     POW     ║       60       ║        80       ║       300       ║\n");	
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");      
printf("║     TIP     ║       40       ║	60       ║       250       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     INT     ║       32       ║	50       ║	 200	   ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     POP     ║       25       ║	40       ║       150       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     TOT     ║       20       ║	30       ║       100       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n"); 	 	 	 
printf("║     III     ║	      19       ║        25       ║        80       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n"); 	 	 	 
printf("║     WTN     ║       17       ║	20       ║	  70	   ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     POT     ║       14       ║        16       ║        60       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     WOT     ║        9       ║        13       ║	  50	   ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     NOW     ║        6       ║         9       ║        43       ║\n");
printf("╠═════════════╬════════════════╬═════════════════╬═════════════════╣\n");
printf("║     NON     ║        1       ║         5       ║        30       ║\n");
printf("╚═════════════╩════════════════╩═════════════════╩═════════════════╝\n");

}

void remplacer(char *string){
	int i;
	for(i= 0 ; i < 100 ; i++){
		if(*(string+i) == '\n') *(string+i) = '\0';
	}
}


void end()
{


printf("███╗   ███╗███████╗██████╗  ██████╗██╗\n");
printf("████╗ ████║██╔════╝██╔══██╗██╔════╝██║\n");
printf("██╔████╔██║█████╗  ██████╔╝██║     ██║\n");
printf("██║╚██╔╝██║██╔══╝  ██╔══██╗██║     ██║\n");
printf("██║ ╚═╝ ██║███████╗██║  ██║╚██████╗██║\n");
printf("╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝\n");
printf("                                        \n");
printf("           ██████╗ █ ███████╗████████╗██████╗ ███████╗\n");
printf("           ██╔══██╗  ██╔════╝╚══██╔══╝██╔══██╗██╔════╝\n");
printf("           ██║  ██║  █████╗     ██║   ██████╔╝█████╗  \n");
printf("           ██║  ██║  ██╔══╝     ██║   ██╔══██╗██╔══╝   \n");
printf("           ██████╔╝  ███████╗   ██║   ██║  ██║███████╗ \n");
printf("           ╚═════╝   ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚══════╝  \n");
printf("                                                         \n");
printf("                   ██████╗  █████╗ ███████╗███████╗███████╗ \n");
printf("                   ██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝  \n");
printf("                   ██████╔╝███████║███████╗███████╗█████╗    \n");
printf("                   ██╔═══╝ ██╔══██║╚════██║╚════██║██╔══╝    \n");
printf("                   ██║     ██║  ██║███████║███████║███████╗  \n");
printf("                   ╚═╝     ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝   \n");
printf("                                                              \n");
printf("                            █████╗ ███╗   ███╗██╗ ██████╗  ██████╗     ██╗██╗██╗\n");   
printf("			   ██╔══██╗████╗ ████║██║██╔════╝ ██╔═══██╗    ██║██║██║\n");    
printf("			   ███████║██╔████╔██║██║██║  ███╗██║   ██║    ██║██║██║\n");  	  
printf("			   ██╔══██║██║╚██╔╝██║██║██║   ██║██║   ██║    ╚═╝╚═╝╚═╝\n");    
printf("		           ██║  ██║██║ ╚═╝ ██║██║╚██████╔╝╚██████╔╝    ██╗██╗██╗\n");   
printf("	                   ╚═╝  ╚═╝╚═╝     ╚═╝╚═╝ ╚═════╝  ╚═════╝     ╚═╝╚═╝╚═╝\n");    



}
//void AFFIEUR_B(int tab1[], int tab2[]) {
//http://www.irongeek.com/alt-numpad-ascii-key-combos-and-chart.html


//http://www.theasciicode.com.ar
//http://www.cdrummond.qc.ca/cegep/informat/Professeurs/Alain/files/ascii.htm

int main(int argc, char *argv[])
{
	int choix = 1;
	/*int i = w(0);
	  int j = i(0);
	  int k = k(0);*/
	int var, reco, var1, var2, yes, credit;
	//char c;
	//c = getchar();
	FILE * fic;
	FILE * fic1;
	FILE * fic2;
	int n = 100;
	char l[100];
	srand(time(NULL));
	int azar, azaro;

	do
	{
		clearScreen(0);
		switch (choix = print_cadre(0))
		{
			do
			{
				clearScreen(0);
				case 1:		
				printf("Combien de crédit souhaitez-vous utiliser : ");
				scanf("%d", &azar);
				printf("Combien de crédits à miser (compris entre 1 et 3) : ");
				scanf("%d", &credit);

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
						do{
					usleep(50000);	
						printf("\t\t\t");
						fgets(l, n ,fic);
						remplacer(&l[0]);
						printf("%s",l);
						memset(l, 0, sizeof(l));
						//usleep(10000);

						fgets(l, n ,fic1);
						remplacer(&l[0]);
						printf("%s", l);
						memset(l, 0, sizeof(l));

						fgets(l, n ,fic2);
						remplacer(&l[0]);
						printf("%s", l);
						memset(l, 0, sizeof(l));

						printf("\n");

					} while (fgetc(fic) != EOF && fgetc(fic1) != EOF && fgetc(fic2) != EOF);
					printf("\n\n");
					if (credit == 1)
					{	
						azar -= credit;
						if(var == 0 && var1 == 0 &&var2==0){
							azaro = azar + 800;
							printf("Tu as gagné + 800€ FELICITATIONS !!!\n");
						}
						else if(var == 0 && var1 == 1 &&var2==2){
							azaro = azar + 600;
							printf("Tu as gagné + 600€ FELICITATIONS !!!\n");
						}
						else if(var == 3 && var1 == 4 &&var2 == 5){
							azaro = azar + 300;
							printf("Tu as gagné + 300€ FELICITATIONS !!!\n");
						}
						else if(var == 0 && var1 == 4 && var2 == 2){
							azaro = azar + 150;
							printf("Tu as gagné + 150€ FELICITATIONS !!!\n");
						}
						else if(var == 5 && var1 == 4 && var2 == 0){
							azaro = azar + 60;
							printf("Tu as gagné + 60 €  FELICITATIONS !!!\n");
						}
						else if(var == 3 && var1 == 4 && var2 == 5){
							azaro = azar + 40;
							printf("Tu as gagné + 40 € FELICITATIONS !!!\n");
						}
						else if(var == 1 && var1 == 2 && var2 == 3){
							azaro = azar + 32;
							printf("Tu as gagné + 32 € FELICITATIONS !!!\n");
						}
						else if(var == 5 && var1 == 4 && var2 == 5){
							azaro = azar + 25;
							printf("Tu as gagné + 25 € FELICITATIONS !!!\n");
						}
						else if(var == 3 && var1 == 4 && var2 == 3){
							azaro = azar + 20;
							printf("Tu as gagné + 20 €  FELICITATIONS !!!\n");
						}
						else if(var == 1 && var1 == 1 && var2 == 1){
							azaro = azar + 19;
							printf("Tu as gagné + 19 € FELICITATIONS !!!\n");
						}
						else if(var == 0 && var1 == 3 && var2 == 2){
							azaro = azar + 17;
							printf("Tu as gagné + 17 €  FELICITATIONS !!!\n");
						}
						else if(var == 5 && var1 == 4 && var2 == 3){
							azaro = azar + 14;
							printf("Tu as gagné + 14 € FELICITATIONS !!!\n");
						}
						else if(var == 0 && var1 == 4 && var2 == 3){
							azaro = azar + 9;
							printf("Tu as gagné + 9 € FELICITATIONS !!!\n");
						}
						else if(var == 2 && var1 == 4 && var2 == 0){
							azaro = azar + 6;
							printf("Tu as gagné + 6 € FELICITATIONS !!!\n");
						}
						else if(var == 2 && var1 == 4 && var2 == 2){
							azaro = azar + 1;
							printf("Tu as gagné + 1 €  FELICITATIONS !!!\n");
						}

						else if(azar <=0){ printf("Vous êtes RUINéS !\n");
							exit(-1);}
						fclose(fic);
						fclose(fic1);
						fclose(fic2);
					}
						printf("\t\t\t\t\t╔══════════╦══════════╦══════════╗\n");
						printf("\t\t\t\t\t║   GAINS  ║  CREDIT  ║   MISE   ║\n");
						printf("\t\t\t\t\t║    %d         %d         %d     \n",azaro-azar, azar, credit); 
						printf("\t\t\t\t\t║	    ║          ║          ║\n");   
						printf("\t\t\t\t\t╚══════════╩══════════╩══════════╝\n");

						printf("Encore?(oui=>Press 2\n");
						//getchar();
						scanf("%d", &reco);

					}while(reco != 1);
					break;

					case 2:

					clearScreen(0);
					regles(0);
					break;

					case 3:
					clearScreen(0);
					conditions(0);
					//==BOBAN
					break;

					case 4:
					clearScreen(0);

					printf("\t\t\t╔═══════════════════════════╗\n");
					printf("\t\t\t║                           ║\n");
					printf("\t\t\t║      PRIVACY POLICY       ║\n");
					printf("\t\t\t║                           ║\n");
					printf("\t\t\t╚═══════════════════════════╝\n");
					printf("     __ __  ______         __     _         _____ __________  ____  __________ \n");
					printf("  __/ // /_/ ____/__  ____/ /____(_)____   / ___// ____/ __ )/ __ \\/ ____/ __ \\\n");
					printf(" /_  _  __/ /   / _ \\/ __  / ___/ / ___/   \\__ \\/ __/ / __  / / / / / __/ / / /\n");
					printf("/_  _  __/ /___/  __/ /_/ / /  / / /__    ___/ / /___/ /_/ / /_/ / /_/ / /_/ / \n");
					printf(" /_//_/  \\____/\\___/\\__,_/_/  /_/\\___/   /____/_____/_____/\\____/\\____/\\____/\n");

					printf("\n\n\n\n");

					printf("     __ __  ____        ____           __   ____  ____  ____  ___    _   __\n");
					printf("  __/ // /_/ __ \\____ _/ __/___ ____  / /  / __ )/ __ \\/ __ )/   |  / | / /\n");
					printf(" /_  _  __/ /_/ / __ `/ /_/ __ `/ _ \\/ /  / __  / / / / __  / /| | /  |/ / \n");
					printf("/_  _  __/ _, _/ /_/ / __/ /_/ /  __/ /  / /_/ / /_/ / /_/ / ___ |/ /|  / \n");
					printf(" /_//_/ /_/ |_|\\__,_/_/  \\__,_/\\___/_/  /_____/\\____/_____/_/  |_/_/ |_/  \n");

					//printf("@Rafael Boban\n");
					break;	

					case 5:
				clearScreen();
				usleep(10000);	
					end();
					exit(-1);
					break;

					default:
					printf("Vous n'avez pas rentre un nombre correct.\nVeillez réesseyer.\n");
					break;

				}
				while(print_cadre(0)<1 && print_cadre(0)>5);
			}

			printf("\n\n");
			printf("Revenir au menu?\n");
			printf("1-Oui\n");
			printf("2-Non\n");
			scanf("%d",&yes);

		}
		while(yes == 1);	

		return 0;
	}














