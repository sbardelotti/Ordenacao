#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *V, int tam, int val)
{
    int i;
    for(i = 0; i < tam-1; i++)
    {
        if(val == V[i])
        {
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *V, int tam, int val)
{
    int i;
    for(i = 0; i < tam-1; i++)
    {
        if(val == V[i])
            return i;
        else
            if(val <V[i])
                return -1;
    }
    return -1;
}

int buscaBinaria(int *V, int tam, int val)
{
    int inicio, meio, fim;
    inicio = 0;
    fim = tam-1;
    while(inicio <= fim)
    {
        meio = (inicio + fim) / 2;
        if(val < V[meio])
            fim = meio-1;
        else
            if(val > V[meio])
                inicio = meio+1;
            else
                    return meio;
    }
    return -1;
}

int main()
{
    int A[10] = {-8, -5, 1, 4, 14, 21, 23, 54, 67, 90};
    int pos;
    pos = buscaBinaria(A, 10, 4);
    printf("Posicao do valor buscado e %i\n", pos);
    return 0;
}













