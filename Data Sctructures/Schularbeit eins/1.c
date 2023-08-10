#include <stdio.h>

int innen_rechteck(int x0, int y0, int x1, int y1, int x, int y){
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1){
        return 1;
    }
    return 0;
}

int main(){
    int x0, x1, x, y0, y1, y, innen;
    printf("Digite o valor de x0\n");
    scanf("%d", &x0);
    printf("Digite o valor de y0\n");
    scanf("%d", &y0);
    printf("Digite o valor de x1\n");
    scanf("%d", &x1);
    printf("Digite o valor de y1\n");
    scanf("%d", &y1);
    printf("Digite o valor de x\n");
    scanf("%d", &x);
    printf("Digite o valor de y\n");
    scanf("%d", &y);
    
    innen = innen_rechteck(x0, y0, x1, y1, x, y);

    if (innen == 1){
        printf("O ponto (%d,%d) esta dentro do retangulo",x,y);
    }
    else {
        printf("O ponto (%d,%d) nao esta dentro do retangulo",x,y);
    }

    return 0;
}