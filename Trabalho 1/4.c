#include <stdio.h>
#include <stdlib.h>

struct usuario{
char sexo;
int idade;
int qtdade;
};
typedef struct usuario Usuario;

void leVetor (int tamanho, Usuario* vet){
    for (int i=0; i<tamanho; i++){
        printf("Digite o sexo do usuario: (m para mulher e h para homem)\n");
        scanf(" %c", &vet[i].sexo);
        printf("Digite a idade do usuario:\n");
        scanf("%d", &vet[i].idade);
        printf("Digite a quantidade de livros lida pelo usuario:\n");
        scanf("%d", &vet[i].qtdade);
    }
}

int calculaQtidadeLivros (int tamanho, Usuario* vet){
    int count = 0;
    for (int i=0;i<tamanho; i++){
        if(vet[i].idade < 10){
            count += vet[i].qtdade;
        }
    }
    return count;
}

int calculaQtidadeMulheres (int tamanho, Usuario* vet){
    int count = 0;
    for (int i=0;i<tamanho; i++){
        if(vet[i].sexo == 'm'){
            count += vet[i].qtdade;
        }
    }
    return count;
}

void imprime(int lDez, int lMul){
    printf("Quantidade de livros lidos por usuarios com menos de 10 anos: %d \n", lDez);
    printf("Quantidade de livros lidos por usuarios mulheres: %d \n", lMul);
}

int main(){
    int qnt, lDez, lMul;
    printf("Qual a quantidade de usuarios que deseja analisar?");
    scanf("%d", &qnt);
    Usuario *vet = malloc(qnt * sizeof(Usuario));
    leVetor(qnt, vet);
    lDez = calculaQtidadeLivros(qnt, vet);
    lMul = calculaQtidadeMulheres(qnt, vet);
    imprime(lDez, lMul);

    return 0;
}