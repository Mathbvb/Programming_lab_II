#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilhas.h"

Stack* create_stack(){
    Stack* pile = (Stack*)malloc(sizeof(Stack));
    pile->n = 0;

    return pile;
}

Stack* push(Stack* pile, int value){
    pile->vec[pile->n] = value;
    pile->n++;

    return pile;
}

Stack* pop(Stack* pile){
    pile->vec[pile->n-1] = 0;
    pile->n--;

    return pile;
}

void print_stack(Stack* pile){
    for (int i = 0; i < pile->n; i++){
        if(i == pile->n-1){
            printf("%d \n", pile->vec[i]);
        }
        else{
            printf("%d, ", pile->vec[i]);
        }
    }
}

int objects_in_stack(Stack* pile){
    printf("There are currently %d objects in the pile. \n", pile->n);
    return pile->n;
}

int object_at_top(Stack* pile){
    printf("Object at the top of stack: %d", pile->vec[pile->n-1]);
    return pile->vec[pile->n-1];
}

Stack* empty_stack(Stack* pile){
    Stack* ptr = pile;
    while(ptr->n != 0){
        pop(ptr);
    }

    return ptr;
}

bool is_palindrome(Stack* pile){
    bool palindrome = true;
    Stack* ptr = pile;
    Stack* aux = create_stack();

    for (int i = ptr->n-1; i >= 0; i--){
        aux = push(aux, ptr->vec[i]);
    }

    print_stack(aux);
    
    for (int i = 0; i < ptr->n; i++){
        if(ptr->vec[i] != aux->vec[i]){
            palindrome = false;
        }
    }
    
    return palindrome;
}

Stack* concatenate_stacks(Stack* pile1, Stack* pile2){
    Stack* ptr1 = pile1;
    Stack* ptr2 = pile2;

    for (int i = 0; i < ptr2->n; i++){
        ptr1 = push(ptr1, ptr2->vec[i]);
    }
    
    return ptr1;
}