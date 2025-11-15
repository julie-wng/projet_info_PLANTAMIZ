#ifndef PROJET_H_INCLUDED
#define PPROJET_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "affichage_console.h"
#define LIGNE 5
#define COLONNE 10

int menu();

void afficherRegles();

void afficherCadre();

void afficherObjet(char c, int x, int y, int couleur); 

char genererIdem();

void initalisation();

#endif