#include <stdio.h>
#include <stdlib.h>

void lesenVektor(int nummer, float* vet){
    for(int i=0;i<nummer; i++){
        printf("Schreibe einen Wert: \n");
        scanf("%f", &vet[i]);
    }
}

float mittlere(int nummer, float* vet){
    float gesamt = 0.0, av;
    for(int i=0; i<nummer; i++){
        gesamt += vet[i];
    }
    av = gesamt / (float)(nummer - 1);
    return av;
}

float uberdurchschnittlich(int nummer, float* vet, float av){
    int ud=0;
    float prozent;
    for(int i=0;i<nummer;i++){
        if(vet[i]>av){
            ud++;
        }
    }
    prozent = (float)ud / (float)(nummer-1);

    return prozent;
}

int main(){
    int nummer;
    float av, prozent;
    printf("Was ist die Vektorgrossen?\n");
    scanf("%d", &nummer);
    float *vet = malloc(nummer * sizeof(float));

    lesenVektor(nummer, vet);
    av = mittlere(nummer, vet);
    prozent = uberdurchschnittlich(nummer, vet, av);
    prozent *= 100;

    printf("%.2f nummer liegen uber dem Durchschnitt. \n", prozent);


    return 0;
}