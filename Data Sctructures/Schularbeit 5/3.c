#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();
    List* item2 = create_list();
    List* mergedList = create_list();
    int v;

    item = insert_list(item, 1);
    item = insert_list(item, 1);
    item = insert_list(item, 1);
    item2 = insert_list(item2, 2);
    item2 = insert_list(item2, 2);
    item2 = insert_list(item2, 2);
    item2 = insert_list(item2, 2);
    item2 = insert_list(item2, 2);

    printList(item);
    printList(item2);

    mergedList = merge(item, item2);

    printList(mergedList);

    return 0;
}
