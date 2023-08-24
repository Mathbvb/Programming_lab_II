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

List* insert_list_at_end(List* l, int n){
    List* assistant = l;
    if(assistant == NULL){
        assistant = insert_list(NULL, n);
        return assistant;
    }
    while(assistant->next != NULL){
        assistant = assistant->next;
    }
    assistant->next = insert_list(NULL, n);

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