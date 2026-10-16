#include <stdio.h>

#define NB_VALEURS 3

void Nb_de_x(int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("x");
    }
}

int main(void)
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };

    /* Recherche du maximum */
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    /* Affichage de l'histogramme */
    for (int i = 0; i < NB_VALEURS; i++)
    {
        printf("| ");
        Nb_de_x(valeurs[i]);
        printf(" %d\n", valeurs[i]);
    }

    printf("+------------------------------------------------------\n");

    return 0;
}