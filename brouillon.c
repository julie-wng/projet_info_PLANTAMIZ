#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "affichage_console.h"

#define LIGNE 5
#define COLONNE 10
 
int menu() {
    int choix;
    printf("\n1. Jouer");
    printf("\n2. Regles du jeu");
    printf("\n3. Quitter\n");
    scanf("%d",&choix);
    return choix;
}

void afficherRegles(){
    printf("\nUtilisez les flèches du clavier pour jouer\n");
}

// Afficher un caractère à une position dans la console avec une couleur et l'ajoute a la matrice 
void afficherObjet(char **plateau,char c, int x, int y, int couleur) {
    gotoxy(x, y);
    text_color(couleur);  
    printf("%c",c); 
    plateau[x][y] = c;
}

// Génère un item aléatoirement
char genererItem() {
    int val = rand()%5;
    char item;
    switch (val) { 
        case 0:
            item = 'S'; //Soleil
            break;
        case 1:
            item = 'F'; //Fraise
            break;
        case 2:
            item = 'P'; //Pomme
            break;
        case 3:
            item = 'O'; //Oignon
            break;
        case 4:
            item = 'M'; //Mandarine
            break;
    }
    return item;
}

void affichage_matrice(char **plateau){
    for(int i=0;i<LIGNE;i++){
        for(int j=0;j<COLONNE;j++){
            printf("%c ");
        }
        printf("\n");
    }
}

void initialisation(char **plateau){
    int item;
    for (int y = 0; y < LIGNE; y++) {
        for (int x = 0; x < COLONNE; x++) {
            do {
                item = genererItem();
            } while ((y >= 2 && plateau[y-1][x] == item && plateau[y-2][x] == item) || (x >= 2 && plateau[y][x-1] == item && plateau[y][x-2] == item));
            plateau[y][x] = item;
            int couleur;
            switch(item) {
                case 'S': couleur = 14; break; // jaune
                case 'F': couleur = 4;  break; // rouge
                case 'P': couleur = 2;  break; // vert
                case 'O': couleur = 5;  break; // magenta
                case 'M': couleur = 1;  break; // bleu
            }
            afficherObjet(plateau, item, x, y, couleur);
        }
    }
}

void manger_item(char **plateau){

}


















int main(){
    srand(time(NULL));
    char **plateau = malloc(LIGNE*sizeof(char));
    for(int i=0;i<LIGNE;i++){
        plateau[i] = malloc(COLONNE*sizeof(char));
    }
    printf("a");
    initialisation(plateau);
    text_color(7);
    return 0;
}















