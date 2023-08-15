#include <stdio.h>
#include <stdlib.h>

void druckmatrix(int m, int n, int** mat){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Matrixwert bei mat[%d][%d] = %d\n",i,j,mat[i][j]);
        }
    }
    printf("\n");
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

void matrix_auffullen(int m, int n, int** mat){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Schreiben Sie den Matrixwert unter mat[%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int main(){
    int n, m;
    printf("Wie viele Zeilen hat die Matrix?\n");
    scanf("%d", &m);
    printf("Wie viele Spalten hat die Matrix?\n");
    scanf("%d", &n);
    int** mat;
    mat=(int**)malloc(m * sizeof(int*));
    for(int i=0; i<m; i++){
        mat[i]=malloc(n * sizeof(int));
    }
    matrix_auffullen(m,n,mat);
    druckmatrix(m,n,mat);

    return 0;
}