#ifndef LISTAS_H
#define LISTAS_H

struct list{
int info;
struct list* next;
};
typedef struct list List;

List* create_list(void);
List* insert_list(List* l, int i);
List* change_list(List* l);
void printList(List* l);

#endif