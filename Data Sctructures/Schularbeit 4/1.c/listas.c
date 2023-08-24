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

int signal_inverter(int n){
    n *= -1;
    return n;
}

List* change_list(List* l){
    List* assistant;
    for(assistant = l; assistant != NULL; assistant = assistant->next){
        assistant->info = signal_inverter(assistant->info);
        assistant = assistant->next;
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