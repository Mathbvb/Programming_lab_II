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
float average_calculator(List* l);

#endif