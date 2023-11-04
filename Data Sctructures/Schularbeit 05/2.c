#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();
    List* item2 = create_list();
    int v;

    item = insert_list(item, 4);
    item = insert_list(item, 8);
    item = insert_list(item, 2);
    item = insert_list(item, 8);
    item = insert_list(item, 3);
    item = insert_list(item, 9);

    printList(item);

    printf("Write the number where you want to separate the list: ");
    scanf("%d", &v);

    item2 = separate(item, v);

    printList(item);
    printList(item2);

    return 0;
}
