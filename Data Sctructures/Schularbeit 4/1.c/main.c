#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();

    item = insert_list(item, 8);
    item = insert_list(item, -2);
    item = insert_list(item, 4);
    item = insert_list(item, -11);

    item = change_list(item);

    printList(item);

    return 0;
}
