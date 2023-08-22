#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz (int m, int n){
    int** mat = (int**)malloc(m * sizeof(int));
    for(int i=0; i<m; i++){
        mat[i] = (int*)malloc(n * sizeof(int));
    }
    return mat;
}

void desaloca_matriz (int m, int** mat){
    for (int i = 0; i < m; i++){
        free(mat[i]);
    }
    free(mat);
}

void preenche_matriz (int m, int n, int **mat){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Qual o valor da matriz em [%d][%d]? ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mostra_matriz (int m, int n, int **mat){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Valor da matriz em [%d][%d] = %d \n", i, j, mat[i][j]);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(j == n-1){
                printf("%d", mat[i][j]);
            }
            else{
                printf("%d, ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int m, n;
    printf("Qual o numero de linhas da matriz?  ");
    scanf("%d", &m);
    printf("Qual o numero de colunas da matriz?  ");
    scanf("%d", &n);

    int** mat = aloca_matriz(m,n);
    preenche_matriz(m,n,mat);
    mostra_matriz(m,n,mat);
    desaloca_matriz(m,mat);

    return 0;
}