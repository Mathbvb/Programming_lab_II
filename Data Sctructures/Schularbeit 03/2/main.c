#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listas.h"

int main(){
    int n;
    Lista* itens =  lst_cria();
    itens = lst_insere(itens, 2);
    itens = lst_insere(itens, 5);
    itens = lst_insere(itens, 165);

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    maiores(itens, n);

    return 0;
}
