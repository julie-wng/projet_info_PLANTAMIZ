#include <stdio.h>
#include "projet.h"

int main(){
    srand(time(NULL));
    //hide_cursor();
    //clrscr();
    //char **plateau = malloc(LIGNE * sizeof(char *));
    //for (int i = 0; i < LIGNE; i++) plateau[i] = malloc(COLONNE * sizeof(char));
    //afficherCadre();
    initalisation();
    gotoxy(0, LIGNE + 10);
    text_color(7); //retour a la couleur normale
    return 0;
}
