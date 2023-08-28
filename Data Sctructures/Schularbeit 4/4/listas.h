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
List* erase_value(List* l, int v);
int list_content(List* l, int n);
int list_len(List* l);

#endif