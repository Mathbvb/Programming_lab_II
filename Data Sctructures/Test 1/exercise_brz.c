#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 16

/* 1. implemente uma função bool compara(Pilha* p1, Pilha* p2) que checa se o valor no topo de duas pilhas é o mesmo. Implemente com vetor e com lista. */
/* 4. Faça uma função que remove todos os números primos de uma lista. Use o protótipo Lista* remove_primos(Lista* l). */

struct list{
    int info;
    struct list* prox;
};
typedef struct list Lista;

// 1 com lista

struct pilha{
    Lista* prim;
};
typedef struct pilha Pilha;

Pilha* cria_pilha(){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;

    return p;
}

void push(Pilha* p, int v){
    Lista* new = (Lista*)malloc(sizeof(Lista));
    new->info = v;
    new->prox = p->prim;
    p->prim = new;
}

void pop(Pilha* p){
    Lista* aux = p->prim;
    if(aux == NULL){
        printf("Pilha ja vazia, impossivel remover valor. \n");
        return;
    }

    p->prim = aux->prox;
    free(aux);
}

bool compara(Pilha* p1, Pilha* p2){
    Lista* aux1 = p1->prim;
    Lista* aux2 = p2->prim;

    if(aux1 == NULL || aux2 == NULL){
        printf("Nao ha valores para comparar. \n");
        return false;
    }

    int v1 = aux1->info;
    int v2 = aux2->info;

    if(v1 == v2){
        return true;
    }
    else{
        return false;
    }
}

void print_pilha(Pilha* p){
    Lista* aux = p->prim;
    while(aux != NULL){
        printf("%d, ", aux->info);
        aux = aux->prox;
    }
    printf("\n");
}

// 1 vetores

struct pilhavet{
    int n;
    int vet[N];
};
typedef struct pilhavet Pilhavet;

Pilhavet* cria_pilhavet(){
    Pilhavet* p = (Pilhavet*)malloc(sizeof(Pilhavet));
    p->n = 0;

    return p;
}

void push_vet(Pilhavet* p, int v){
    if(p->n == N){
        printf("Pilha cheia, impossivel adicionar mais valores. \n");
        return;
    }
    p->vet[p->n] = v;
    p->n++;
}

void pop_vet(Pilhavet* p){
    if(p->n == 0){
        printf("A pilha ja esta vazia. \n");
        return;
    }
    p->vet[p->n] = 0;
    p->n--;
}

bool compara_vet(Pilhavet* p1, Pilhavet* p2){
    if(p1->n == 0 || p2->n == 0){
        printf("Nao ha valores para comparar. \n");
        return false;
    }
    int v1 = p1->vet[p1->n-1];
    int v2 = p2->vet[p2->n-1];

    if(v1 == v2){
        return true;
    }
    else{
        return false;
    }    
}

void print_pvet(Pilhavet* p){
    for (int i = 0; i < p->n; i++){
        printf("%d, ", p->vet[i]);
    }
    printf("\n");
}

void igualitas(bool iguais){
    if(iguais == true){
        printf("Iguais. \n");
    }
    else{
        printf("Diferentes. \n");
    }
}

/* 2. implemente uma função joga_pro_fim() que, para todos valores v encontrados em uma fila, os joga para o fim da fila. Implemente com lista e com vetor */

// 2 com lista
struct fila{
    Lista* inicio;
    Lista* fim;
};
typedef struct fila Fila;

Fila* cria_fila(){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;

    return f;
}

void fila_insert(Fila* f, int v){
    Lista* new = (Lista*)malloc(sizeof(Lista));
    new->info = v;
    new->prox = NULL;
    if(f->fim != NULL){
        f->fim->prox = new;
    }
    else{
        f->inicio = new;
    }
    f->fim = new;
}

void fila_tira(Fila* f){
    Lista* aux;
    if(f->inicio == NULL){
        printf("Fila vazia, nao ha valores para retirar. \n");
        return;
    }
    aux = f->inicio;
    f->inicio = aux->prox;
    if(f->inicio == NULL){
        f->fim == NULL;
    }
    free(aux);
}

void print_fila(Fila* f){
    Lista* aux = f->inicio;
    while(aux != NULL){
        printf("%d, ", aux->info);
        aux = aux->prox;
    }
    printf("\n");
}

void fila_libera(Fila* f){
    Lista* q = f->inicio;
    while (q != NULL){
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}

Fila* joga_pro_fim(Fila* f, int v){
    Fila* aux = cria_fila();
    Lista* ptr = f->inicio;
    while(ptr != NULL){
        if(ptr->info != v){
            fila_insert(aux, ptr->info);
        }
        ptr = ptr->prox;
    }

    ptr = f->inicio;

    while(ptr != NULL){
        if(ptr->info == v){
            fila_insert(aux, ptr->info);
        }
        ptr = ptr->prox;
    }

    return aux;
}

struct filavet{
    int n;
    int inicio;
    int vet[N];
}; typedef struct filavet Filavet;

Filavet* cria_filavet(){
    Filavet* f = (Filavet*)malloc(sizeof(Filavet));
    f->n = 0;
    f->inicio = 0;
    return f;
}

void filavet_insere(Filavet* f, int v){
    if(f->n == N){
        printf("Fila cheia. \n");
        return;
    }
    int fim = (f->inicio + f->n) % N;
    f->vet[fim] = v;
    f->n++;
}

void filavet_tira(Filavet* f){
    if(f->n == 0){
        printf("Fila vazia. \n");
        return;
    }
    f->inicio = (f->inicio + 1) % N;
    f->n--;
}

void print_filavet(Filavet* f){
    int fim = (f->inicio + f->n) % N;
    if(f->inicio > fim){
        for (int i = f->inicio; i < N; i++){
            printf("%d, ", f->vet[i]);
        }
        for (int i = 0; i < fim; i++){
            printf("%d, ", f->vet[i]);
        }        
    }
    else{
        for (int i = f->inicio; i < fim; i++){
            printf("%d, ", f->vet[i]);
        }
    }
    printf("\n");
}

Filavet* joga_pro_fimvet(Filavet* f, int v){
    Filavet* aux = cria_filavet();
    int fim = (f->inicio + f->n) % N;

    if(f->inicio > fim){
        for (int i = f->inicio; i < N; i++){
            if(f->vet[i] != v){
                filavet_insere(aux, f->vet[i]);
            }
        }
        for (int i = 0; i < fim; i++){
            if(f->vet[i] != v){
                filavet_insere(aux, f->vet[i]);
            }
        }        
    }
    else{
        for (int i = f->inicio; i < fim; i++){
           if(f->vet[i] != v){
                filavet_insere(aux, f->vet[i]);
            }
        }
    }
    
    if(f->inicio > fim){
        for (int i = f->inicio; i < N; i++){
            if(f->vet[i] == v){
                filavet_insere(aux, f->vet[i]);
            }
        }
        for (int i = 0; i < fim; i++){
            if(f->vet[i] == v){
                filavet_insere(aux, f->vet[i]);
            }
        }        
    }
    else{
        for (int i = f->inicio; i < fim; i++){
           if(f->vet[i] == v){
                filavet_insere(aux, f->vet[i]);
            }
        }
    }

    return aux;
}

/* 3. Faça uma função que faça o item na base de uma pilha A ser igual ao item no topo de uma pilha B, sem sobrescrever ou remover quaisquer valores. 
Use o protótipo void topo_para_base(Pilha* pA, Pilha* pB) */

// 3 com lista
void topo_para_base(Pilha* pA, Pilha* pB){
    int bA;
    Lista* ptr = pA->prim;
    while(ptr->prox != NULL){
        ptr = ptr->prox;
    }    
    bA = ptr->info;
    push(pB, bA);
}

// 3 com vetor
void topo_para_basevet(Pilhavet* pA, Pilhavet* pB){
    int bA;
    if(pA->n == 0){
        printf("Nao ha valores em pA");
        return;
    }
    bA = pA->vet[pA->n-1];
    push_vet(pB, bA);
}

int main(){
    // 1 com listas.
    Pilha* p1 = cria_pilha();
    Pilha* p2 = cria_pilha();
    bool iguais;

    push(p1, 1);
    push(p2, 2);

    iguais = compara(p1, p2);
    igualitas(iguais);

    // 1 com vetores.
    Pilhavet* pv1 = cria_pilhavet();
    Pilhavet* pv2 = cria_pilhavet();

    push_vet(pv1, 1);
    push_vet(pv2, 10);

    iguais = compara_vet(pv1, pv2);
    igualitas(iguais);

    // 2 com listas
    Fila* f = cria_fila();
    fila_insert(f, 1);
    fila_insert(f, 1);
    fila_insert(f, 1);
    fila_insert(f, 4);
    fila_insert(f, 5);

    print_fila(f);

    f = joga_pro_fim(f, 1);

    print_fila(f);

    // 2 com vetor
    Filavet* fv = cria_filavet();
    filavet_insere(fv, 1);
    filavet_insere(fv, 1);
    filavet_insere(fv, 1);
    filavet_insere(fv, 4);
    filavet_insere(fv, 5);

    print_filavet(fv);

    fv = joga_pro_fimvet(fv, 1);

    print_filavet(fv);

    // 3 com lista
    Pilha* pa = cria_pilha();
    Pilha* pb = cria_pilha();

    push(pa, 1);
    push(pa, 2);
    push(pa, 3);
    push(pb, 4);
    push(pb, 5);
    push(pb, 6);
    print_pilha(pa);
    print_pilha(pb);

    topo_para_base(pa, pb);
    print_pilha(pa);
    print_pilha(pb);

    Pilhavet* pva = cria_pilhavet();
    Pilhavet* pvb = cria_pilhavet();

    push_vet(pva, 1);
    push_vet(pva, 2);
    push_vet(pva, 3);
    push_vet(pvb, 4);
    push_vet(pvb, 5);
    push_vet(pvb, 6);
    print_pvet(pva);
    print_pvet(pvb);

    topo_para_basevet(pva, pvb);
    print_pvet(pva);
    print_pvet(pvb);

    return 0;
}
