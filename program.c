#include <stdio.h>

#define NB_VALEURS 3

/* Affiche n caractères 'x' (sans retour à la ligne) */
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

    for (int i = 0; i < NB_VALEURS; i++)
    {
        printf("| ");
        Nb_de_x(valeurs[i]);
        printf(" %d\n", valeurs[i]);
    }

    printf("+------------------------------------------------------\n");

    return 0;
}