#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int *tableau, int tailleTableau);

int main()
{

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
