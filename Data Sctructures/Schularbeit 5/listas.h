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
List* separate(List* l, int n);
List* merge(List* l1, List* l2);
List* insert_list_at_end(List* l, int n);
List* invert_list(List* l);

#endif