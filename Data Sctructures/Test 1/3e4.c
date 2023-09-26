#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct lista
{
    int cpf;
    char nome[100];
    int fator;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* create(){
    return NULL;
}

// auxiliar

int tamanho_lista(Lista* l){
    int count = 0;
    Lista* ptr = l;
    while(ptr != NULL){
        ptr = ptr->prox;
        count++;
    }

    return count;
}

void printlist(Lista* l){
    Lista* ptr = l;
    while(ptr != NULL){
        printf("%d, ", ptr->fator);
        ptr = ptr->prox;
    }
    printf("\n");
}

// questão 3

Lista* insert(Lista* l, int cpf, char* nome, int fator){
    Lista* new = (Lista*)malloc(sizeof(Lista));
    new->cpf = cpf;
    strcpy(new->nome, nome);
    new->fator = fator;
    new->prox = l;

    return new;
}

Lista* lst_insere (Lista* l, int cpf, char* nome, int fator){
    Lista* ptr = l;
    Lista* ant = NULL;

    Lista* new = (Lista*)malloc(sizeof(Lista));
    new->cpf = cpf;
    new->fator = fator;
    strcpy(new->nome, nome);

    if(ptr == NULL){
        new->prox = l;
        return new;
    }

    while(ptr != NULL && ptr->fator < fator){
        ant = ptr;
        ptr = ptr->prox;
    }

    if(ant == NULL){
        new->prox = l;
        return new;
    }
    
    ant->prox = new;
    new->prox = ptr;

    return l;
}

// questão 4

Lista* lst_remove (Lista* l, int fator){
    int count = 0;
    while(count < tamanho_lista(l)){
        Lista* ptr = l;
        Lista* ant = NULL;
        while(ptr != NULL){
            if(ptr->fator == fator){
                if(ant == NULL){
                    l = ptr->prox;
                }
                else{
                    ant->prox = ptr->prox;
                }
            }
            else{
                ant = ptr;
            }
            ptr = ptr->prox;
        }
        count++;
    }
    return l;
}



int main(){
    Lista* teste = create();
    teste = lst_insere(teste, 123, "jorge augusto",1);
    teste = lst_insere(teste, 234, "jorge august", 2);
    teste = lst_insere(teste, 345, "jorge augus", 3);
    teste = lst_insere(teste, 456, "jorge augu", 4);
    teste = lst_insere(teste, 456, "jorge aug", 1);
    teste = lst_insere(teste, 567, "jorge au", 3);
    teste = lst_insere(teste, 567, "jorge a", 5);
    teste = lst_insere(teste, 567, "jorge ", 2);

    printlist(teste);

    return 0;
}
