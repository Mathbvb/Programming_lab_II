#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

Lista* ultimo(Lista* l){
    Lista* aux = l;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    return aux;
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