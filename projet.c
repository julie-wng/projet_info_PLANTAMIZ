#include "projet.h"

//Afficher le menu
int menu() {
    int choix;
    printf("\n1. Jouer");
    printf("\n2. Regles du jeu");
    printf("\n3. Quitter\n");
    scanf("%d",&choix);
    return choix;
}

// Afficher des règles du jeu
void afficherRegles(){
    printf("\nUtilisez z/q/s/w pour deplacer le chasseur (@) et attraper les tresors (*)\n");
}

// Afficher le cadre de la zone de jeu
void afficherCadre() {
    gotoxy(0,0);
    text_color(LIGHTGRAY);
    for (int y = 0; y <= LIGNE+1; y++) {
        for (int x = 0; x <= COLONNE+1; x++) {
            if (y == 0 || y == LIGNE+1) printf("#");
            else if (x == 0 || x == COLONNE+1) printf("#");
            else printf(" ");
        }
        printf("\n");
    }
}

// Afficher un caractère à une position dans la console avec une couleur
void afficherObjet(char c, int x, int y, int couleur) {
    gotoxy(x, y);
    text_color(couleur);  
    printf("%c",c); 
}

// Génère un idem aléatoirement
char genererIdem() {
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
/*
void initalisation(){
    int y=1;
    int x=1;
    char item;
    afficherCadre();
    while(y <= LIGNE){
        while(x <= COLONNE){
            item = genererIdem();
            if (gotoxy(x,y-1) == item || gotoxy(x-1,y) == item){
                if (gotoxy(x,y-2) == item || gotoxy(x-2,y) == item){
                    item = genererIdem();
                }
            }
            if(item == 'S') afficherObjet(item,x,y,14); //14=jaune
            if(item == 'F') afficherObjet(item,x,y,4); //rouge
            if(item == 'P') afficherObjet(item,x,y,2); //vert
            if(item == 'O') afficherObjet(item,x,y,5); //magenta
            if(item == 'M') afficherObjet(item,x,y,1); //bleu
            x++;
        }
        y++;
    }
}
*/

//initialisation
void initalisation(){
    char item;
    afficherCadre();
    for (int y = 1; y <= LIGNE; y++) {
        for (int x = 1; x <= COLONNE; x++) {
           item = genererIdem();
           if(item == 'S') afficherObjet(item,x,y,14); //14=jaune
           if(item == 'F') afficherObjet(item,x,y,4); //rouge
           if(item == 'P') afficherObjet(item,x,y,2); //vert
           if(item == 'O') afficherObjet(item,x,y,5); //magenta
           if(item == 'M') afficherObjet(item,x,y,1); //bleu
        }
    }
}


