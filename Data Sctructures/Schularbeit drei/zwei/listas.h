#ifndef LISTAS_H
#define LISTAS_H

struct lista{
int info;
struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void);
Lista* lst_insere (Lista* l, int i);
int maiores(Lista* l, int n);

#endif