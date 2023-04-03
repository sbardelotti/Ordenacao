#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

int buscaLinearMatricula(struct aluno *A, int tam, int elem)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(elem == A[i].matricula)
            return i;
    }
    return -1;
}

int buscaLinearNome(struct aluno *A, int tam, char* elem)
{
    int i;
    for(i =0; i < tam; i++)
    {
        if(strcmp(elem, A[i].nome)== 0)
            return i;
    }
    return -1;
}

int main()
{
    struct aluno alunos[2] = {{100, "Testanildo", 6.6, 7.4, 8.2},{200, "Cringinaldo", 3.9, 4.5, 5.7}};
    int busca;
    //busca = buscaLinearMatricula(alunos, 2, 200);
    busca = buscaLinearNome(alunos, 2, "Cringinaldo");

    if(busca != -1)
        printf("Matriculado - Pos: %i", busca);
    return 0;
}
