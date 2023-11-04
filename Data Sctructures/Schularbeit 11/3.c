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

    Tree* b = create_tree(156, NULL, a);

    bool is = is_a_binary_search_tree(a);
    if(is){
        printf("Is a binary search tree. \n");
    }
    else{
        printf("Isn't a binary search tree. \n");
    }

    return 0;
}