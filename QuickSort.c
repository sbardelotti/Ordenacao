#include <stdio.h>
#include <stdlib.h>

int particiona(int *V, int inicio, int fim)
{
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = V[inicio];
    while(esq < dir)
    {
        while(V[esq] <= pivo && esq <= fim)
            esq++;
        while(V[dir] > pivo && dir >= 0)
            dir--;
        if(esq < dir)
        {
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort(int *V, int inicio, int fim)
{
    int pivo;
    if(fim > inicio)
    {
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo - 1);
        quickSort(V, pivo + 1, fim);
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
    quickSort(A, 0, 9);
    imprimir(A, 10);
    return 0;
}
