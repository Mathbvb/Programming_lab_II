#ifndef TREE_H
#define TREE_H

struct arv{
    int value;
    struct arv* left;
    struct arv* right;
};  typedef struct arv Tree;

Tree* create_tree_null();
Tree* create_tree(int v, Tree* left, Tree* right);
void print_tree(Tree* a);

// 1
void print_preorder(Tree* v);
void print_symmetricalorder(Tree* v);
void print_postorder(Tree* v);

// 2
int even_counter(Tree* v);

// 3
Tree* copy_tree(Tree* a);

// 4
int count_leafs(Tree* a);

// 5
int only_child(Tree* a);

// 6
bool are_equal(Tree* a, Tree* b);

#endif