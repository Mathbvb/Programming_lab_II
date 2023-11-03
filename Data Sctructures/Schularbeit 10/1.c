#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "tree.h"

int main(){
    Tree* j = create_tree(10, create_tree_null(), create_tree_null());
    Tree* h = create_tree(8, j, create_tree_null());
    Tree* f = create_tree(6, create_tree_null(), h);
    Tree* i = create_tree(9, create_tree_null(), create_tree_null());
    Tree* g = create_tree(7, i, create_tree_null());
    Tree* e = create_tree(5, g, create_tree_null());
    Tree* d = create_tree(4, e, f);
    Tree* c = create_tree(3, d, create_tree_null());
    Tree* b = create_tree(2, create_tree_null(), c);
    Tree* a = create_tree(1, create_tree_null(), b);

    print_preorder(a);
    printf("\n");
    print_symmetricalorder(a);
    printf("\n");
    print_postorder(a);

    return 0;
}
