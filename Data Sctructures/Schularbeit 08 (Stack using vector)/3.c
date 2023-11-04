#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilhas.h"

int main(){
    Stack* pile = create_stack();
    int save;

    pile = push(pile, 1);
    pile = push(pile, 2);
    pile = push(pile, 3);
    pile = push(pile, 4);

    print_stack(pile);

    save = objects_in_stack(pile);
    save = object_at_top(pile);

    return 0;
}
