#include <stdio.h>
#include <stdlib.h>

void merge(int *V, int inicio, int meio, int fim)
{
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *) malloc(tamanho * sizeof(int));
    if(temp != NULL)
    {
        for(i = 0; i < tamanho; i++)
        {
            if(!fim1 && !fim2)
            {
                if(V[p1] < V[p2])
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];

                if(p1 > meio) fim1 = 1;
                if(p2 > fim) fim2 = 1;
            }
            else
            {
                if(!fim1)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
            }
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++)
            V[k] = temp[j];
    }
    free(temp);
}

void mergeSort(int *V, int inicio, int fim)
{
    int meio;
    if(inicio < fim)
    {
        meio = (inicio + fim) / 2;
        mergeSort(V, inicio, meio);
        mergeSort(V, meio + 1, fim);
        merge(V, inicio, meio, fim);
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
    mergeSort(A, 0, 9);
    imprimir(A, 10);
    return 0;
}
