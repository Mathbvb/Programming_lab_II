#include <stdio.h>
#include <stdlib.h>

void fullenVektor(int n, int* vet){
    for(int i=0; i<n; i++){
        printf("Schreibe einen nummer: \n");
        scanf("%d", &vet[i]);
    }
}

void umkehren(int n, int* vet){
    int aux[n], j=0;
    for(int i=n-1; i>=0; i--){
        aux[j]=vet[i];
        j++;
    }
    for(int i=0;i<n;i++){
        vet[i]=aux[i];
    }
}

void drucken(int nummer, int* vet){
    for(int i=0; i<nummer; i++){
        if(i==nummer-1){
            printf("%d.", vet[i]);
        }
        else{
            printf("%d, ", vet[i]);
        }
    }
}

int main(){
    int nummer;
    printf("Was ist die Vektorgrossen?\n");
    scanf("%d", &nummer);
    int *vet = malloc(nummer * sizeof(int));
    fullenVektor(nummer, vet);
    umkehren(nummer, vet);
    drucken(nummer, vet);

    return 0;
}