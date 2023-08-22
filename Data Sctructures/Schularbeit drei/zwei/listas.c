#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int mede(Lista* l, int n){
    int i = 0;
    Lista* aux = l;
    while(aux != NULL){
        if(aux->info > n){
            i++;
        }
        aux = aux->prox;
    }
    return i;
}

int maiores(Lista* l, int n){
    int size = mede(l, n);
    printf("Ha %d valores nos nos maiores que %d", size, n);
}

Lista* lst_cria(){
    return NULL;
}

Lista* lst_insere (Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}