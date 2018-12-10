# Casino-Game
Here is my C laguage casino game all made in the terminal adding colors and songs

## Introduction ##

1.1	Consignes
Ce projet consistait à programmer en langage C un simulateur de machine à sous. Il a duré deux mois et a été réalisé en 2015.

1.2	Règles du jeu

Au début du jeu le joueur dépose un certain nombre de crédits, par exemple 100 crédits.
Avant chaque lancement de la machine, le joueur peut choisir de miser soit 1, 2 ou 3 crédits. Après chaque lancement, la machine indique le gain obtenu en fonction de la combinaison qui est apparue. Bien entendu, le gain obtenu correspond au gain de base lié à la combinaison multiplié par la mise du joueur. 
Le jeu se poursuit tant que le joueur le souhaite et que son nombre de crédits est positif. Le jeu se termine automatiquement dans le cas où le joueur ne dispose plus de crédits. 
Le joueur peut également décider d’encaisser les crédits disponibles à tout moment du jeu.


## Réalisation et fonctions du programme ##

2.1	L’interface du menu

Plusieurs étapes nous ont été nécessaires à la conception du code du jeu. Nous avons fait appel à un paquet de notions afin de confectionner cette interface de menu. 
Extended ASCII, couleurs, caractères spéciaux, site de générations de lettre ( http://www.patorjk.com/ ) , m'ont été nécessaires. Cela peut être résumé par la fonction void print_cadre():

2.2	Fonctions de calculs de gains
Plusieurs fonctions nous ont été nécessaires pour le calcul des gains, et des crédits. En effet plusieurs facteurs devraient être pris en compte : Mise, combinaisons, mode, calculs du crédit... Le but était d’avoir les informations sur la mise, le crédit et le gain à la fin de chaque jeu.
* Gain : Affiche la somme que rapporte la combinaison.                                                 
 *  Crédit : Affiche le crédit restant.

Pour se faire, nous avons décidé de choisir 15 combinaisons gagnantes. Ensuite, nous avons créé, pour les deux modes, et pour les 3 mises des fonctions permettant d’avoir les informations. Au total 6 fonctions permettent de faire les calculs. 
  
Azar représente le crédit et credit représente la mise.

2.3	Ouverture lettres et chiffres
Pour l’ouverture et la fermeture de fichiers, fopen, fgets, memset et autres nous ont été nécessaires. Pour se faire nous avons créé au total 12 fichiers de type « .txt » contenant les lettres et chiffres utilisés dans le jeu.

-	Ouverture et fermeture
         Lorsque nous ouvrons un fichier avec la commande fopen, le système génère automatiquement un bloc du type FILE et nous fournit son adresse.
 Ce que nous avons fait dans notre programme est : 
*	déclarer un pointeur du type FILE* pour chaque fichier dont nous avons besoin,
*	affecter l'adresse retournée par fopen à ce pointeur,
*	employer le pointeur à la place du nom du fichier dans toutes les instructions de lecture ou d'écriture,
*	libérer le pointeur à la fin du traitement à l'aide de fclose.
Par cette méthode, nous arrivons à ouvrir et fermer les fichiers « .txt ».
-	Affichage 
Afin d’afficher les lettres et chiffres, nous avons procéder par l’affichage ligne par ligne. 

Figure 3 : Méthode ligne par ligne
	Tout un processus, permettant l’affichage, se cache derrière ce code.
 - fgets : celui-ci permet de lire la 1ère ligne du 1er fichier aléatoire ouvert.
	 - remplacer(&l[0]) : permet de charger cette ligne
	 - printf : permet d’afficher cette ligne
	 - memset : permet d’effacer la ligne afficher précédemment.
Ce processus se poursuit avec l’affichage de la 1ère ligne du 2ème fichier, ensuite la première ligne du 3ème fichier et ainsi de suite. C’est ainsi que l’on obtient un rendu qui ressemble à cela : 


2.4	Fonctions affichages des designs
Pour l’ouverture des différents designs aperçus dans le jeu, une méthode fut utilisée : fopen + fgets + printf. Illustrés par :
 
Figure 5: Designs
Ceci est un exemple permettant d’afficher le message jackpot contenu dans un fichier texte. 

2.5	Déroulement du Jeu
Nous avons décidé d’appeler le jeu WINTOP CASINO car w, i, n, t, o, et p sont les lettres qui sont utilisés dans le thème principal. Pour le lancement du jeu, le joueur doit s’assurer d’être dans le dossier contenant les données du jeu. Ensuite, la commande make doit être utilisée pour le lancement. Après le message de bienvenue (welcome), nous avons le menu qui se présente :

Sur la capture d’écran ci-dessus, nous pouvons voir les différentes parties du jeu:
1-	Jouer
Dans cette partie, le joueur devra choisir entre deux thèmes. Les principes des 2 thèmes reste le même mais la différence est que dans le thème1 (mode classique), il aura des lettres et le second (mode chiffres) le joueur aura des chiffres. Après avoir choisi le mode, il devra entrer successivement le nombre de crédit, puis sa mise.
Le joueur est par la suite guidé par des informations que nous avons laissées tout au long du jeu.

2-	Règles
           Cette partie informe les joueurs sur tout le jeu. C’est une sorte d’explication en quelques mots du fonctionnement de notre jeu.

3-	Conditions de victoires
            Nous avons inséré dans cette partie du jeu les combinaisons gagnantes des chiffres comme des lettres et qui permet au joueur d’en connaitre un peu plus sur notre chef d’œuvre.

4-	Privacy policy
Cette partie du jeu nous « fais honneur » c’est-à-dire donne les noms de ceux qui l’ont conçu : Cedric SEBOGO and Rafael BOBAN.

5-	Mode jackpot
Ce mode a été créée afin que tout joueur puisse voir quelle serait l’animation s’il arrivait qu’il gagne le JACKPOT.

6-	Exit
      Celui-ci permet de quitter le jeu avec un message de fin que nous vous avons soigneusement concocter.

Pour que l’écran de jeu soit le plus clair possible, l’appel de fonctions « ClearScreen » est nécessaire.
 
Celle-ci permettait d’effacer l’écran et d’afficher que la partie suivant le clearsreen.

2.6	Méthode de sécurisation
Tout au long de notre programme, nous avons opter pour la sécurité do...while mais aussi celle du avec le getchar. La 1ère, celle do..while,  permet de tout le temps poser une question lorsque les conditions que nous, Cédric et Rafael, avons requises ne sont pas remplies. Nous les avons pour la plupart du temps mis autour des scanf qui requière par exemple soit 1, 2, ou 3. Exemple :


2.7	Bibliothèques et Librairies
a)	Bibliothèques
Nous avons placé nos bibliothèques dans le fichier fonction.h de notre makefile afin de réaliser une compilation séparée (via Cours 12 de Mr. François).
 
Figure 9 : Bibliothèques
« time.h » est utilisée pour les délais d’affichage des textes. Nous utilisons usleep pour le faire. Et pour les pauses, nous avons utilisé la fonction my_delay décrite plus haut. 
Les bibliothèques termios.h et fcntl.h permet de faire fonctionner la fonction key_pressed.    
« unistd.h » permettait d’utiliser fseek. 
                      
b)	Librairies
Nous avons rajouté la librairie SOX (avec la commande, sudo apt-get sox). Celle-ci nous a permis de mettre de la musique en arrière-plan tout en faisant fonctionner notre programme. Comme exemple : 

-	play : Permet de jouer la musique.
-	-q : Permet d’effacer toute les informations sur la musique.
-	‘&’: fait fonctionner la musique en arrière-plan.
-	killall : permet de stopet toute musique en arrière plan.

2.8	Second thème
Notre premier thème étant celui avec les lettres, nous devions réaliser notre jeu avec un second thème. 
Notre choix s’est alors porté sur le thème des chiffres (1, 2, 3, 4, 5 et 6). Ainsi entre nos 2 thèmes le principe est resté le même mais les animations ont été un peu modifiés.
 


## Bibliographie et Webographie ##

* Site internet Open Classrooms : https://openclassrooms.com/forum/categorie/langage-c

* Site internet Iron Geek :   http://www.irongeek.com/alt-numpad-ascii-key-combos-and-chart.html

* Site internet The Ascii Code : http://www.theasciicode.com.ar

* Site internet Table ASCII -I: www.cdrummond.qc.ca/cegep/informat/Professeurs/Alain/files/ascii.htm
