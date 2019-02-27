#include <stdio.h>
#include <stdlib.h>

void permuter(int *a, int *b);
int main()
{
    printf("Hello world!\n");
    return 0;
}

void permuter(int *a, int *b)
{
    int aux=*a;
    *b=*a;
    *a=aux;
}
