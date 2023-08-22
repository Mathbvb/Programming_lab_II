#include <stdio.h>
#include <math.h>

float get_radius(){
    float radius;
    printf("Digite o tamanho do raio:");
    scanf("%f",&radius);
    return radius;
}

void calc_esfera(float r, float *area, float *volume){
    *volume = (3.14 * r * r * r * 4) / 3;
    *area = 4 * 3.14 * r * r;
    return;
}

void print_esfera(float area, float volume){
    printf("Area: %.2f \n", area);
    printf("Volume: %.2f \n", volume);
}

int main(){
    float r = get_radius();
    float area, volume;
    calc_esfera(r, &area, &volume);
    print_esfera(area, volume);

    return 0;
}