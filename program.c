#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50   /* taille en caractères de la plus grande barre */

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

    /* Recherche du maximum */
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    /* ===== AJOUT : calcul de l'échelle ===== */
    double echelle = (double) MAX_LONGUEUR / maximum;

    /* Affichage de l'histogramme */
    for (int i = 0; i < NB_VALEURS; i++)
    {
        printf("| ");
        /* ===== MODIFIÉ : nombre de x mis à l'échelle (arrondi) ===== */
        Nb_de_x((int) (valeurs[i] * echelle + 0.5));
        printf(" %d\n", valeurs[i]);
    }

    printf("+------------------------------------------------------\n");

    return 0;
}