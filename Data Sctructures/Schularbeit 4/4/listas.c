#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

void printList(List* l){
    List* assistant = l;
    while(assistant != NULL){
        if(assistant->next == NULL){
            printf("%d", assistant->info);
        }
        else{
            printf("%d, ", assistant->info);
        }
        assistant = assistant->next;
    }
    printf("\n\n");
    free(assistant);
}

int list_len(List* l){
    int size = 0;
    List* aux = l;
    while(aux != NULL){
        size++;
        aux = aux->next;
    }

    return size;
}

int list_content(List* l, int n){
    List* ptr = l;
    int count = 0;
    int content = ptr->info;

    while(count < n){
        ptr = ptr->next;
        count++;
        content = ptr->info;
    }

    return content;
}

List* erase_value(List* l, int v){
    List* aux = l;
    List* back = NULL;
    int count = 0;
    
    if(v == 0){
        l = l->next;
        return l;
    }

    while(count < v){
        back = aux;
        aux = aux->next;
        count++;
    }

    back->next = aux->next;
    return l;
}

List* create_list(){
    return NULL;
}

List* insert_list(List* l, int i){
    List* new = (List*) malloc(sizeof(List));
    new->info = i;
    new->next = l;
    return new;
}