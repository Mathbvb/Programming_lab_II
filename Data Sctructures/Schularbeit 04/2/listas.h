#ifndef LISTAS_H
#define LISTAS_H

struct list{
int info;
struct list* next;
};
typedef struct list List;

List* create_list(void);
List* insert_list(List* l, int i);
void printList(List* l);
List* insert_list_at_end(List* l, int n);

#endif