#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct triangulo{
int ladoA;
int ladoB;
int ladoC;
char ehTriangulo;
char tipo[20];
};
typedef struct triangulo Triangulo;

Triangulo le_triangulo(){
    Triangulo t;
    printf("Digite o lado A:");
    scanf("%d", &t.ladoA);
    printf("Digite o lado B:");
    scanf("%d", &t.ladoB);
    printf("Digite o lado C:");
    scanf("%d", &t.ladoC);    
    return t;
}

Triangulo verifica_triangulo(Triangulo t){
    bool lA = t.ladoA > t.ladoB + t.ladoC;
    bool lB = t.ladoB > t.ladoA + t.ladoC;
    bool lC = t.ladoC > t.ladoA + t.ladoB;
    if (lA == true || lB == true || lC == true){
        t.ehTriangulo = 'n';
    }
    else {
        t.ehTriangulo = 's';
    }
    if (t.ehTriangulo == 's'){
        if (t.ladoA == t.ladoB || t.ladoA == t.ladoC || t.ladoB == t.ladoC){
            if (t.ladoA == t.ladoB && t.ladoA == t.ladoC){
                strcpy(t.tipo, "Equilatero");
            }
            else{
                strcpy(t.tipo, "Isosceles");
            }
        }
        else{
            strcpy(t.tipo, "Escaleno");
        }
    }

    return t;
}

void impr(Triangulo t){
    if(t.ehTriangulo == 's'){
        printf("Forma: %s", t.tipo);
    }
    else{
        printf("Nao e triangulo");
    }
}

int main(){
    Triangulo t;
    t = le_triangulo();
    t = verifica_triangulo(t);

    impr(t);

    return 0;
}