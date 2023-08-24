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

float average_calculator(List* l){
    List* assistant = l;
    float sum = 0, average;
    int count = 0;
    while(assistant != NULL){
        sum += assistant->info;
        count++;
        assistant = assistant->next;
    }
    average = sum / count;

    return average;
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