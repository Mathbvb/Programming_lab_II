#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "listas.h"

// Cenário 1
List* create(){
    return NULL;
}

List* insert(List* l1, int m, char* n){
    List* new = (List*)malloc(sizeof(List));
    new->matricula = m;
    strcpy(new->nome, n);
    new->prox = l1;

    return new;
}

void print_list(List* l1){
    List* ptr = l1;
    while(ptr != NULL){
        printf("Matricula: %d \n", ptr->matricula);
        printf("Nome: %s", ptr->nome);
        printf("\n");
        ptr = ptr->prox;
    }
}

// Cenário 2

Lista* create_list2(){
    return NULL;
}

Lista* insert_list2(Lista* l, int m, char* n){
    Lista* new = (Lista*)malloc(sizeof(Lista));
    new->info.matricula = m;
    strcpy(new->info.nome, n);
    new->prox = l;

    return new;
}

void print_list2(Lista* l1){
    Lista* ptr = l1;
    while(ptr != NULL){
        printf("Matricula: %d \n", ptr->info.matricula);
        printf("Nome: %s", ptr->info.nome);
        printf("\n");
        ptr = ptr->prox;
    }
}

// Cenário 3

Lista_pointer* create_list3(){
    return NULL;
}

Lista_pointer* insert_list3(Lista_pointer* l, int m, char* n){

    Lista_pointer* new = (Lista_pointer*)malloc(sizeof(Lista_pointer));
    Aluno* new_al = (Aluno*)malloc(sizeof(Aluno));

    new_al->matricula = m;
    strcpy(new_al->nome, n);
    new->info = new_al;
    new->prox = l;

    return new;
}

void print_list3(Lista_pointer* l1){
    Lista_pointer* ptr = l1;
    while (ptr != NULL){
        printf("Matricula: %d \n", ptr->info->matricula);
        printf("Nome: %s", ptr->info->nome);
        printf("\n");
        ptr = ptr->prox;
    }
}

// Cenário 4

ListaHet* create_list4(){
    return NULL;
}

ListaHet* insert_list4_professor(ListaHet* l1, int c, char* n, float s){
    ListaHet* new = (ListaHet*)malloc(sizeof(ListaHet));
    Professor* new_prof = (Professor*)malloc(sizeof(Professor));

    new_prof->codigo = c;
    strcpy(new_prof->nome, n);
    new_prof->salario = s;

    new->tipo = 0;
    new->info = new_prof;

    new->prox = l1;

    return new;
}

ListaHet* insert_list4_aluno(ListaHet* l1, int m, char* n){
    ListaHet* new = (ListaHet*)malloc(sizeof(ListaHet));
    Aluno* new_al = (Aluno*)malloc(sizeof(Aluno));

    new_al->matricula = m;
    strcpy(new_al->nome, n);

    new->tipo = 1;
    new->info = new_al;

    new->prox = l1;

    return new;
}

void print_al(Aluno* al){
    printf("Matricula: %d \n", al->matricula);
    printf("Nome: %s \n", al->nome);
    printf("\n");
}

void print_prof(Professor* prof){
    printf("Codigo: %d \n", prof->codigo);
    printf("Nome: %s \n", prof->nome);
    printf("Salario: %.2f \n", prof->salario);
    printf("\n");
}

void print_list4(ListaHet* l1){
    ListaHet* ptr = l1;

    while(ptr != NULL){
        if(ptr->tipo == 1){
            print_al(ptr->info);
        }
        else{
            print_prof(ptr->info);
        }
        ptr = ptr->prox;
    }
}