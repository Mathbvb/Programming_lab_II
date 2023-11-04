#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "bstree.h"

int main(){
    Tree* a = create_tree_null();

    a = insert_value(a, 5);
    a = insert_value(a, 1);
    a = insert_value(a, 3);
    a = insert_value(a, 4);
    a = insert_value(a, 7);
    a = insert_value(a, 2);
    a = insert_value(a, 8);

    print_tree(a);
    printf("\n");

    Tree* b = tree_inverter(a);

    print_tree(b);
 
    return 0;
}