#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct aluno{
    char matricula[10];
    char nome[100];
    int anoIngresso;
};
typedef struct aluno Aluno;

// questão 1
Aluno** aloca_matriz(int m, int n){
    Aluno** matriz = (Aluno**)malloc(m * sizeof(Aluno*));
    for (int i = 0; i < m; i++)
    {
        matriz[i] = (Aluno*)malloc(n * sizeof(Aluno));
    }
    
    return matriz;
}

// questão 2

void libera_matriz (Aluno** matriz, int m){
    for (int i = 0; i < m; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}


int main(){

    return 0;
}
