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
    free(assistant);
}

List* concatenate(List* l1, List* l2){
    List* assistant = l1;
    while(assistant->next != NULL){
        assistant = assistant->next;
    }
    assistant->next = l2;

    return l1;   
}

List* lst_create(){
    return NULL;
}

List* lst_insert(List* l, int i){
    List* new = (List*) malloc(sizeof(List));
    new->info = i;
    new->next = l;
    return new;
}