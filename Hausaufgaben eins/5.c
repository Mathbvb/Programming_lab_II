#include <stdio.h>
#include <stdlib.h>

struct aluno {
float nota1;
float nota2;
int aulasAssistidas;
float media;
char status;
};
typedef struct aluno Aluno;

struct disciplina {
Aluno vet[5];
int aulasMinistradas;
};
typedef struct disciplina Disciplina;

void verificaAluno(Disciplina *dis){
    for(int i=0; i<5; i++){
        printf("Nota da prova 1 do aluno %d\n", i+1);
        scanf("%f", &dis->vet[i].nota1);
        printf("Nota da prova 2 do aluno %d\n", i+1);
        scanf("%f", &dis->vet[i].nota2);
        printf("Quantidade de aulas assistidadas do aluno %d\n", i+1);
        scanf("%d", &dis->vet[i].aulasAssistidas);
    }
}

void EitherGoodOrBad(Aluno al, int unterricht){
    float teilnahme, durchschnitt;
    durchschnitt = (al.nota1 + al.nota2) / 2;
    teilnahme = (float)al.aulasAssistidas / unterricht;
    if (teilnahme > 0.75 && durchschnitt >= 6){
        printf("Aluno aprovado com nota %.2f\n", durchschnitt);
    }
    else {
        printf("Aluno reprovado\n");
    }
}

int main(){
    Disciplina dis;
    printf("Qual a quantidade de aulas ministradas na disciplina?\n");
    scanf("%d", &dis.aulasMinistradas);
    verificaAluno(&dis);
    printf("\n\n");
    for(int i=0;i<5;i++){
        EitherGoodOrBad(dis.vet[i], dis.aulasMinistradas);
    }
    
    return 0;
}