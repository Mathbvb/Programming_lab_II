#ifndef LISTAS_H
#define LISTAS_H

struct list{
int info;
struct list* next;
};
typedef struct list List;

List* lst_create(void);
List* lst_insert(List* l, int i);
List* concatenate(List* l1, List* l2);
void printList(List* l);

#endif