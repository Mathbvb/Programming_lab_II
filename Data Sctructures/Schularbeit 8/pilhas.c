#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilhas.h"

Stack* create_stack(){
    return NULL;
}

Stack* push(Stack* pile, int v){
    Stack* new = (Stack*)malloc(sizeof(Stack));

    new->value = v;
    new->next = pile;

    return new;
}

void print_stack(Stack* pile){
    Stack* ptr = pile;
    while(ptr != NULL){
        if(ptr->next == NULL){
            printf("%d. \n", ptr->value);
        }
        else{
            printf("%d; ", ptr->value);
        }
        ptr = ptr->next;
    }
}

Stack* pop(Stack* pile){
    Stack* ptr = pile;
    if(pile == NULL){
        printf("Nao ha valores");
    }
    ptr = ptr->next;
    pile = ptr;

    return pile;
}

int number_of_objects_in_stack(Stack* pile){
    Stack* ptr = pile;
    int count = 0;

    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }

    return count;
}

void print_top_stack(Stack* pile){
    if(pile == NULL){
        printf("Error: empty pile. \n");
    }
    else{
        printf("Value at top: %d \n", pile->value);
    }
}

Stack* empty_stack(Stack* pile){
    Stack* ptr = pile;
    while(ptr != NULL){
        ptr = ptr->next;
    }
    pile = ptr;

    return pile;
}

bool is_palindrome(Stack* pile){
    bool palindrome = true;

    Stack* ptr = pile;
    Stack* new = create_stack();

    while(ptr != NULL){
        new = push(new, ptr->value);
        ptr = ptr->next;
    }
    
    ptr = pile;

    while(new != NULL){
        if(new->value != ptr->value){
            palindrome = false;
        }
        new = new->next;
        ptr = ptr->next;
    }

    return palindrome;
}

Stack* concatenate(Stack* pile1, Stack* pile2){
    Stack* ptr1 = pile1;
    Stack* ptr2 = pile2;
    Stack* aux = create_stack();

    while(ptr2 != NULL){
        aux = push(aux, ptr2->value);
        ptr2 = ptr2->next;
    }

    while(aux != NULL){
        pile1 = push(pile1, aux->value);
        aux = aux->next;
    }

    return pile1;
}