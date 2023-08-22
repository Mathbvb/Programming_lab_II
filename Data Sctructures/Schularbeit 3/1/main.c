#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    Lista* itens =  lst_cria();
    itens = lst_insere(itens, 2);
    itens = lst_insere(itens, 5);
    itens = lst_insere(itens, 165);


    comprimento(itens);

    return 0;
}
