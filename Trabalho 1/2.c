#include <stdio.h>

struct retangulo{
float base;
float altura;
float perimetro;
float area;
};
typedef struct retangulo Retangulo;

void read_rectangle(Retangulo *r){
    printf("Digite a base do retangulo:");
    scanf("%f", &r->base);
    printf("Digite a altura do retangulo:");
    scanf("%f", &r->altura);
    return;
}

void calc_rectangle(Retangulo *r){
    r->perimetro = r->altura * 2 + r->base * 2;
    r->area = r->altura * r->base;
    return;
}

void print_rectangle(Retangulo r[5]){
    for (int i=0;i<5;i++){
        printf("Perimetro do triangulo %d: %.2f \n", i, r[i].perimetro);
        printf("Area do triangulo %d: %.2f \n", i, r[i].area);
    }
}

int main(){
    Retangulo r[5];
    for(int i=0;i<5;i++){
        read_rectangle(&r[i]);
        calc_rectangle(&r[i]);
    }
    print_rectangle(r);

    return 0;
}