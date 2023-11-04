#ifndef BS_TREE_H
#define BS_TREE_H

struct tree{
    int value;
    struct tree* left;
    struct tree* right;
}; typedef struct tree Tree;

Tree* create_tree_null();
void print_tree(Tree* a);
void print_tree_ordenate(Tree* a);
Tree* insert_value(Tree* a, int v);
Tree* search_tree(Tree* a, int v);
Tree* remove_value(Tree* a, int v);

// 2
void print_descending(Tree* a);

// 3 
bool is_a_binary_search_tree(Tree* a);

// 4
Tree* tree_inverter(Tree* a);

//test
Tree* create_tree(int v, Tree* left, Tree* right);

#endif