#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();
    List* copia = create_list();

    item = insert_list(item, 1);
    item = insert_list(item, 2);
    item = insert_list(item, 3);
    item = insert_list(item, 4);
    item = insert_list(item, 5);
    item = insert_list(item, 6);

    printList(item);

    copia = copy_list(item);

    printList(copia);

    return 0;
}
