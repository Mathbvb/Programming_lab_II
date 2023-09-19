#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilhas.h"

int main(){
    Stack* pile = create_stack();
    int count;

    pile = push(pile, 1);
    pile = push(pile, 2);
    pile = push(pile, 3);
    pile = push(pile, 4);
    pile = push(pile, 3);

    print_stack(pile);

    count = number_of_objects_in_stack(pile);
    printf("Number of objects in the stack: %d \n", count);

    print_top_stack(pile);

    pile = empty_stack(pile);

    print_stack(pile);

    print_top_stack(pile);

    return 0;
}
