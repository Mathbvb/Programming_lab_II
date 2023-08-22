#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int mede(Lista* l){
    int i = 0;
    Lista* aux = l;
    while(aux != NULL){
        i++;
        aux = aux->prox;
    }
    return i;
}

int comprimento(Lista* l){
    int size = mede(l);
    printf("%d", size);
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