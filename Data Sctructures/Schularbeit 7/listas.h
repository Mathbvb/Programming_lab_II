#ifndef LISTAS_H
#define LISTAS_H

struct lista1{
    int matricula;
    char nome[50];
    struct lista1* prox;
};
typedef struct lista1 List;

struct aluno{
    int matricula;
    char nome[50];
};
typedef struct aluno Aluno;

struct lista2{
    Aluno info;
    struct lista2* prox;
};
typedef struct lista2 Lista;

struct lista3{
    Aluno* info;
    struct lista3* prox;
};
typedef struct lista3 Lista_pointer;

struct professor{
    int codigo;
    char nome[50];
    float salario;
};
typedef struct professor Professor;

struct listaHet{
    int tipo;
    void* info;
    struct listaHet* prox;
};
typedef struct listaHet ListaHet;


// cenario 1

List* insert(List* l1, int m, char* n);
List* create();
void print_list(List* l1);


// cenario 2

Lista* create_list2();
Lista* insert_list2(Lista* l, int m, char* n);
void print_list2(Lista* l1);


// cenario 3

Lista_pointer* create_list3();
Lista_pointer* insert_list3(Lista_pointer* l, int m, char* n);
void print_list3(Lista_pointer* l1);


// cenario 4

ListaHet* create_list4();
ListaHet* insert_list4_professor(ListaHet* l1, int c, char* n, float s);
ListaHet* insert_list4_aluno(ListaHet* l1, int m, char* n);
void print_list4(ListaHet* l1);

#endif