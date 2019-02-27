#include <stdio.h>
#include <stdlib.h>

void permuter(int *a, int *b);
int main()
{
    int valueOne=10, valueTwo=20;
    printf("valeur 1= %d et valeur 2 =%d \n",valueOne,valueTwo);
    permuter(&valueOne, &valueTwo);
    printf("valeur 1= %d et valeur 2 =%d \n",valueOne,valueTwo);
    return 0;
}

void permuter(int *a, int *b)
{
    int aux=*a;
    *a=*b;
    *b=aux;
}
