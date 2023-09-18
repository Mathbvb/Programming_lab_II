#ifndef LISTAS_H
#define LISTAS_H

struct lista_two{
    int info;
    struct lista_two* ant;
    struct lista_two* next;
};
typedef struct lista_two List_two;

List_two* create();
List_two* insert(List_two* l1, int n);
int find_last(List_two* l1);
List_two* insert_at_end(List_two* l1, int n);
void print_list(List_two* l);

#endif