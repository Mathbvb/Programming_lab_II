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

    itens = ultimo(itens);
    printf("%d", itens->info);

    return 0;
}
