#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "tree.h"

Tree* create_tree_null(){
    return NULL;
}

Tree* create_tree(int v, Tree* left, Tree* right){
    Tree* new = (Tree*)malloc(sizeof(Tree));
    new->value = v;
    new->left = left;
    new->right = right;

    return new;
}

void printnode(Tree* a){
    if(a != NULL){
        printf("%d, ", a->value);
    }
}

void print_preorder(Tree* v){
    if(v != NULL){
        printnode(v);
        print_preorder(v->left);
        print_preorder(v->right);
    }
}

void print_symmetricalorder(Tree* v){
    if(v != NULL){
        print_symmetricalorder(v->left);
        printnode(v);
        print_symmetricalorder(v->right);
    }
}

void print_postorder(Tree* v){
    if(v != NULL){
        print_postorder(v->left);
        print_postorder(v->right);
        printnode(v);
    }
}

void print_tree(Tree* a){
    printf("<");
    printnode(a);
    if(a != NULL){
        print_tree(a->left);
        print_tree(a->right);
    }
    printf(">");
}

int even_counter(Tree* v){
    int count = 0;
    if(v != NULL){
        if(v->value % 2 == 0){
            count++;
        }
        count = count + even_counter(v->left);
        count = count + even_counter(v->right);
    }
    return count;
}

Tree* copy_tree(Tree* a){
    if (a == NULL){
        return NULL;
    }
    Tree* copy = (Tree*)malloc(sizeof(Tree));
    copy->value = a->value;
    copy->left = copy_tree(a->left);
    copy->right = copy_tree(a->right);

    return copy;
}

int count_leafs(Tree* a){
    int leafs = 0;
    if(a != NULL){
        if (a->left == NULL && a->right == NULL){
            leafs++;
        }
        leafs += count_leafs(a->left);
        leafs += count_leafs(a->right);
    }
    return leafs;
}

int only_child(Tree* a){
    int unic = 0;
    if(a != NULL){
        if(a->left != NULL && a->right == NULL){
            unic++;
        }
        else if(a->left == NULL && a->right != NULL){
            unic++;
        }
        unic += only_child(a->left);
        unic += only_child(a->right);
    }
    return unic;
}

bool are_equal(Tree* a, Tree* b){
    bool equal = true;
    if(a == NULL && b == NULL){
        return true;
    }
    if(a == NULL || b == NULL){
        return false;
    }
    equal = are_equal(a->left, b->left);
    equal = are_equal(a->right, b->right);

    return equal;
}