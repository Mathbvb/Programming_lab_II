#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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

List* separate(List* l, int n){
    int count;
    List* aux = NULL;
    List* nl = l;

    while(count < n){
        aux = nl;
        nl = nl->next;
        count++;
    }

    aux->next = NULL;
    return nl;
}

List* merge(List* l1, List* l2){
    List* aux1 = l1;
    List* aux2 = l2;
    List* newList = create_list();

    while(!(aux2 == NULL && aux1 == NULL)){
        if(aux1 != NULL){
            newList = insert_list_at_end(newList, aux1->info);
            aux1 = aux1->next;
        }
        if(aux2 != NULL){
            newList = insert_list_at_end(newList, aux2->info);
            aux2 = aux2->next;
        }
    }

    return newList;
}

List* invert_list(List* l){
    List* nl = create_list();
    List* aux = l;

    while(aux != NULL){
        nl = insert_list(nl, aux->info);
        aux = aux->next;
    }

    return nl;
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

bool compare_lists(List* l1, List* l2){
    bool equal = true;
    List* ptr1 = l1;
    List* ptr2 = l2;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->info != ptr2->info){
            equal = false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return equal;
}

List* copy_list(List* l1){
    List* copy;
    List* ptr = l1;

    while(ptr != NULL){
        copy = insert_list_at_end(copy, ptr->info);
        ptr = ptr->next;
    }

    return copy;
}

List* insert_circular(List* l1, int i){
    List* new = (List*) malloc(sizeof(List));

    new->info = i;
    new->next = l1;
    
    

    return new;
}