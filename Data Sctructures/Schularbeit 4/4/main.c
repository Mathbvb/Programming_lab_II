#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

List* remove_previous(List* l, int v){
    for(int i=0; i < list_len(l); i++){
        if(list_content(l, i) == v){
            if(i>0){
                l = erase_value(l, i-1);
            }
        }
    }

    return l;
}

int main(){
    List* item = create_list();
    int v;

    item = insert_list(item, 4);
    item = insert_list(item, 8);
    item = insert_list(item, 2);
    item = insert_list(item, 8);
    item = insert_list(item, 3);
    item = insert_list(item, 9);

    printf("Write the value you want to be the minimun in the list: ");
    scanf("%d", &v);

    printList(item);

    item = remove_previous(item, v);

    printList(item);

    return 0;
}
