#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* itens1 =  lst_create();
    List* itens2 =  lst_create();

    itens1 = lst_insert(itens1, 2);
    itens1 = lst_insert(itens1, 5);
    itens1 = lst_insert(itens1, 165);

    itens2 = lst_insert(itens2, 8);
    itens2 = lst_insert(itens2, 6);
    itens2 = lst_insert(itens2, 35);
 

    itens1 = concatenate(itens1, itens2);
    printList(itens1);

    return 0;
}
