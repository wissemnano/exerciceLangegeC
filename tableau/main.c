#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int *tableau, int tailleTableau);
void remplirTableau(int *tableau, int tailleTableau);
int moyenneTableau(int *tableauMoyenne, int tailleTableau);
int main()
{
    int tab[10]={0};
    int taille=0, somme=0,moy=0;
    printf("donner la taille de tableau : ");
    scanf("%d\n",&taille);
    remplirTableau(tab, taille);
    somme=sommeTableau(tab,taille);
    printf("Somme de tablea est = %d \n",somme);
    moy=moyenneTableau(tab,taille);
    printf("moyenne de tablea est = %d \n",moy);
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
        printf("entre la valeur de case : %d ", i+1);
        scanf("%d \n",&tableau[i]);
    }
}

int moyenneTableau(int *tableauMoyenne, int tailleTableau)
{
    int moy=0;
    moy=sommeTableau(tableauMoyenne,tailleTableau)/tailleTableau;
    return moy;
}
