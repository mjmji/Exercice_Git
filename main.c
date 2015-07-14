#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main ( int argc, char** argv )
{
    int nombreMystere = 0, nombreEntre = 0, compteur=0, continuerPartie=1, nombreMaximum, difficulte;

                printf("=============Jeu plus moins ameliore=============\n\n");
                while(continuerPartie)
                    {

                                 while(difficulte==0);
                                    {
                                    printf("Choisir le degre de difficulte\n\n");
                                    printf("Taper 1. pour le niveau facile\n");
                                    printf("Taper 2. pour le niveau moyen \n");
                                    printf("Taper 3. pour le niveau difficile\n");
                                    scanf("%d", &difficulte);
                                    }


                                switch(difficulte)
                                                {
                                            case 1:
                                                printf("Vous avez choisi le niveau facile\n");
                                                break;
                                            case 2:
                                                printf("Vous avez choisi le niveau moyen\n");
                                                break;
                                            case 3:
                                                printf("Vous avez choisi le niveau difficile\n");
                                                break;
                                            default:
                                                printf("\nSVP seulement 1, 2 ou 3");
                                                break;
                                                }
                                    if (difficulte == 1)
                                            {
                                                const int MAX = 100, MIN = 1;
                                                srand(time(NULL));
                                                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                                            }

                                            else if (difficulte == 2)
                                            {
                                                const int MAX = 1000, MIN = 1;
                                                srand(time(NULL));
                                                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                                            }

                                            else if (difficulte == 3)
                                            {
                                                const int MAX = 10000, MIN = 1;
                                                srand(time(NULL));
                                                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                                            }

                                            else (difficulte = 0);

                                            do
                                            {
                                                printf("Quel est le nombre mystere?\n");
                                                scanf("%d", &nombreEntre);
                                                compteur++ ;

                                                if (nombreEntre > nombreMystere)
                                                    printf("le nombre Mystere est plus petit\n\n");

                                                else if (nombreEntre < nombreMystere)
                                                    printf("le nombre Mystere est plus grand\n\n");

                                                else
                                                {
                                                    system("cls");
                                                    printf("===================Bravo!===================\nVous avez trouve le nombre Mystere\n ============%d============\nen seulement %d coups.\n", nombreMystere, compteur);
                                                    printf("\n\n\n");
                                                }


                                            }while (nombreEntre != nombreMystere);
                            printf("Si vous souhaitez faire une autre partie\ntapez 1, sinon tapez 0\n");
                            scanf("%d", &continuerPartie);
                            system("cls");
                        }

                                  return 0;
}
