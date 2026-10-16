#include <stdio.h>

#define NB_VALEURS 3

int main(void)
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };
    int i;

    /* i = 0 */
    i = 0;

    /* Tant que i < NB_VALEURS */
    while (i < NB_VALEURS)
    {
        printf("| %d\n", valeurs[i]);
        i++;
    }

    /* Ligne de séparation finale */
    printf("+------------------------------------------------------\n");

    return 0;
}
