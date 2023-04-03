#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *V, int N)
{
    int i, j, menor, troca;
    for(i = 0; i < N - 1; i++)
    {
        menor = i;
        for(j = i + 1; j < N; j++)
        {
            if(V[j] < V[menor])
                menor = j;
        }
        if(i != menor)
        {
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }
}

void imprimir(int *V, int N)
{
    int i;
    for(i = 0; i < N; i++)
    {
        printf("%i ", V[i]);
    }
}

int main()
{
    int A[10] = {-5,3,7,9,65,8,17,13,24,-8};
    imprimir(A, 10);
    printf("\n");
    selectionSort(A, 10);
    imprimir(A, 10);
    return 0;
}
