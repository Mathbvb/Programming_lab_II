#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilhas.h"

int main(){
    Stack* pile1 = create_stack();
    Stack* pile2 = create_stack();

    pile1 = push(pile1, 1);
    pile1 = push(pile1, 2);
    pile2 = push(pile2, 3);
    pile2 = push(pile2, 4);

    print_stack(pile1);
    print_stack(pile2);
    
    pile1 = concatenate_stacks(pile1, pile2);
    pile2 = empty_stack(pile2);

    print_stack(pile1);
    print_stack(pile2);

    return 0;
}
