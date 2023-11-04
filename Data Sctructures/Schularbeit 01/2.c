#include <stdio.h>
#include <stdlib.h>

int negative(int n, float* vet){
    int count = 0;
    for(int i=0;i<n;i++){
        if(vet[i]<0){
            count += 1;
        }
    }
    return count;
}

void wert_lessen(int nummer, float* vet){
    for(int i=0;i<nummer;i++){
        printf("Schreibe einen Wert\n");
        scanf("%f", &vet[i]);
    }
}

int main(){
    int nummer, negativ;
    printf("Was ist die Vektorgrosse?\n");
    scanf("%d", &nummer);
    float *vet = malloc(nummer * sizeof(float));

    wert_lessen(nummer, vet);
    negativ = negative(nummer, vet);

    printf("Es gibt %d negative nummer.", negativ);

    return 0;
}