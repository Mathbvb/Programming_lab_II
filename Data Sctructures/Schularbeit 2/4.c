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

int** soma_matriz (int m, int n, int** mat1, int** mat2){
    int** mat = aloca_matriz(m, n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    return mat;
}

int main(){
    int m, n;
    printf("Qual o numero de linhas da matriz?  ");
    scanf("%d", &m);
    printf("Qual o numero de colunas da matriz?  ");
    scanf("%d", &n);
    
    printf("Matriz um: \n");
    int** mat1 = aloca_matriz(m,n);
    preenche_matriz(m,n,mat1);

    printf("Matriz dois: \n");
    int** mat2 = aloca_matriz(m,n);
    preenche_matriz(m,n,mat2);

    int** mat3 = soma_matriz(m, n, mat1, mat2);

    printf("Matriz 1: \n");
    mostra_matriz(m,n,mat1);
    printf("Matriz 2: \n");
    mostra_matriz(m,n,mat2);
    printf("Matriz soma: \n");
    mostra_matriz(m,n,mat3);

    desaloca_matriz(m,mat1);
    desaloca_matriz(m,mat2);
    desaloca_matriz(m,mat3);

    return 0;
}