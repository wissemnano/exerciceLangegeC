#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int *tableau, int tailleTableau);
void remplirTableau(int *tableau, int tailleTableau);
int main()
{
    int tab[4]={0};
    return 0;
}

int sommeTableau(int *tableau, int tailleTableau)
{
    int somme=0;
    for(int i=0; i<tailleTableau; i++)
    {
        somme=somme+*(tableau+i);
    }
    return somme;
}

void remplirTableau(int *tableau, int tailleTableau)
{
    for(int i=0; i<tailleTableau; i++)
    {
        printf("entre la valeur de case % d : ", i+1);
        scanf("%d \n",tableau[i]);
    }
}
