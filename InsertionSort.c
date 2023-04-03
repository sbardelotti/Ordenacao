#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *V, int N)
{
    int i, j, aux;
    for(i = 1; i < N; i++)
    {
        aux = V[i];
        for(j = i; (j > 0) && (aux < V[j - 1]); j--)
            V[j] = V[j - 1];
        V[j] = aux;
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
    insertionSort(A, 10);
    imprimir(A, 10);
    return 0;
}
