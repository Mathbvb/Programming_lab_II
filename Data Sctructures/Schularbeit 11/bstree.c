#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "bstree.h"

Tree* create_tree_null(){
    return NULL;
}

void printnode(Tree* a){
    if(a != NULL){
        printf("%d ", a->value);
    }
}

void print_tree_ordered(Tree* a){
    if(a != NULL){
        print_tree_ordered(a->left);
        printnode(a);
        print_tree_ordered(a->right);
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

Tree* insert_value(Tree* a, int v){
    if(a == NULL){
        a = (Tree*)malloc(sizeof(Tree));
        a->value = v;
        a->left = a->right = create_tree_null();
    }
    else if(v < a->value){
        a->left = insert_value(a->left, v);
    }
    else{
        a->right = insert_value(a->right, v);
    }
    return a;
}

Tree* search_tree(Tree* a, int v){
    if (a == NULL){
        return NULL;
    }
    else if(a->value > v){
        search_tree(a->left, v);
    }
    else if(a->value < v){
        search_tree(a->right, v);
    }
    else{
        return a;
    }
}

Tree* remove_value(Tree* a, int v){
    if (a == NULL){
        return NULL;
    }
    else if(a->value > v){
        a->left = remove_value(a->left, v);
    }
    else if(a->value < v){
        a->right = remove_value(a->right, v);
    }
    else{
        if(a->left == NULL && a->right == NULL){
            free(a);
            a = NULL;
        }
        else if(a->left == NULL){
            Tree* ptr = a;
            a = a->right;
            free(ptr);
        }
        else if(a->right == NULL){
            Tree* ptr = a;
            a = a->left;
            free(ptr);
        }
        else{
            Tree* ptr = a->left;
            while(ptr->right != NULL){
                ptr = ptr->right;
            }
            a->value = ptr->value;
            ptr->value = v;
            a->left = remove_value(a->left, v);
        }
    }
    return a;
}

void print_descending(Tree* a){
    if(a != NULL){
        print_descending(a->right);
        printnode(a);
        print_descending(a->left);
    }
}

bool is_a_binary_search_tree(Tree* a){
    if (a == NULL){
        return true;
    }
    if (a->left != NULL){
        if(a->left->value >= a->value){
            return false;
        }
        if(!is_a_binary_search_tree(a->left)){
            return false;
        }
    }

    if(a->right != NULL){
        if(a->right->value < a->value){
            return false;
        }
        if(!is_a_binary_search_tree(a->right)){
            return false;
        }
    }

    return true;

}

Tree* create_tree(int v, Tree* left, Tree* right){
    Tree* new = (Tree*)malloc(sizeof(Tree));
    new->value = v;
    new->left = left;
    new->right = right;

    return new;
}

Tree* tree_inverter(Tree* a){
    if(a == NULL){
        return NULL;
    }
    Tree* ptr = a->left;
    a->left = a->right;
    a->right = ptr;

    tree_inverter(a->left);
    tree_inverter(a->right);

    return a;
}
