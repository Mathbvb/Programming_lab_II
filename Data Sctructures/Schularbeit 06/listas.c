#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

List_two* create(){
    return NULL;
}

List_two* insert(List_two* l1, int n){
    List_two* new = (List_two*)malloc(sizeof(List_two));
    
    new->info = n;
    new->next = l1;
    new->ant = NULL;

    if(l1 != NULL){
        l1->ant = new;
    }

    return new;
}

int find_last(List_two* l1){
    List_two* ptr = l1;
    int value;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    value = ptr->info;

    return value;
}

List_two* insert_at_end(List_two* l1, int n){
    List_two* new = (List_two*)malloc(sizeof(List_two));
    new->info = n;
    new->next = NULL;
    
    List_two* aux =l1;
    if(aux == NULL){
        new->ant = NULL;
        return new;
    }
    while(aux->next != NULL){
        aux = aux->next;
    }
    aux->next = new;
    new->ant = aux;

    return l1;
}

void print_list(List_two* l){
    List_two* aux = l;
    
    while(aux != NULL){
        if(aux->next == NULL){
            printf("%d", aux->info);
        }
        else{
            printf("%d, ", aux->info);
        }
        aux = aux->next;
    }
    printf("\n");
}

List_two* remove_back(List_two* l1, int v){
    List_two* ptr = l1;
    
    if(ptr == NULL || ptr->next == NULL){
        printf("Nao ha valor anterior para remover");
        return l1;
    }

    while(ptr->info != v && ptr != NULL){
        ptr = ptr->next;
        if(ptr == NULL){
            return l1;
        }
    }
    

    if(ptr->ant == NULL){
        ptr = ptr->next;
        while(ptr->info != v && ptr != NULL){
            ptr = ptr->next;
            if(ptr == NULL){
                return l1;
            }
        } 
        
    }
    if(ptr->ant->ant == NULL){
        ptr->ant = NULL;
        l1 = ptr;        
    }
    else{
        ptr->ant->ant->next = ptr;
    }

    return l1;
}