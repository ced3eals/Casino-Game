#ifndef __FONCTION__
#define __FONCTION__

#include <termios.h> 
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void message_bvn();
void randoms_numb();
void pouce1();
void lettre_jack();
void lettre_jack1();
void jack();
void pouce2();
void pouce3();
char key_pressed();
void viderBuffer();
void jack_nu();
void gameOver();
void randoms();
void welcome();
void clearScreen();
int print_cadre();
void regles();
void conditions();
void end();
void remplacer(char *string);
void pouce();
int cred1(int azar, int var, int var1, int var2);
int cred2(int azar, int var, int var1, int var2);
int cred3(int azar, int var, int var1, int var2);
int numb1(int azar, int var, int var1, int var2);
int numb2(int azar, int var, int var1, int var2);
int numb3(int azar, int var, int var1, int var2);
void cadre_gain(int gain, int azar, int credit);
void privacy();
void my_delay(double i);
int mode_jeu();

#endif
