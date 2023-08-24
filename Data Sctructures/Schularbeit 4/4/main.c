#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();
    int v;

    item = insert_list(item, 4);
    item = insert_list(item, 9);
    item = insert_list(item, 8);
    item = insert_list(item, 6);
    item = insert_list(item, 2);
    item = insert_list(item, 5);

    printf("Write the value you want to be the minimun in the list: ");
    scanf("%d", &v);

    erase_value(item, v);

    printList(item);

    return 0;
}
