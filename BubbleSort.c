#include <stdio.h>
#include <stdlib.h>

// melhor caso o(n)
// pior caso o(n²)
void bubbleSort(int *vetor, int pos)
    {
        int i, cont, aux, fim = pos;
        do
        {
            for(i = 0; i < fim-1; i++)
            {
                if(vetor[i] > vetor[i+1])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[i+1];
                    vetor[i+1] = aux;
                    cont = i;
                }
            }
            fim--;
        }while(cont != 0);
    }

int main()
{

    return 0;
}
