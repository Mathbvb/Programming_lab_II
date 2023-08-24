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

List* erase_value(List* l, int v){
    List* end = l;
    while(end != NULL){
        List* assistant = l;
        List* back = NULL;
        while(assistant != NULL && assistant->info != v){
            back = assistant;
            assistant = assistant->next;
        }
        if(assistant == NULL){
            return l;
        }
        if(back == NULL){
            l = assistant->next;
        }
        else{
            back->next = assistant->next;
        }
    end = end->next;
    }
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