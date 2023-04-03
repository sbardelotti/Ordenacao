#include <stdio.h>
#include <stdlib.h>

void criaHeap(int *V, int inicio, int fim)
{
    int aux = V[inicio];
    int j = inicio * 2 + 1;
    while(j <= fim)
    {
        if((j < fim) && (V[j] < V[j + 1]))
            j++;

        if(aux < V[j])
        {
            V[inicio] = V[j];
            inicio = j;
            j = 2 * inicio + 1;
        }
        else
        {
            j = fim + 1;
        }
    }
    V[inicio] = aux;
}

void heapSort(int *V, int N)
{
    int i, aux;
    for(i = (N - 1)/2; i >= 0; i--)
        criaHeap(V, i, N-1);

    for(i = N - 1; i >= 1; i--)
    {
        aux = V[0];
        V[0] = V[i];
        V[i] = aux;
        criaHeap(V, 0, i - 1);
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
    heapSort(A, 10);
    imprimir(A, 10);
    return 0;
}
