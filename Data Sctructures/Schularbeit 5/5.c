#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();
    List* item2 = create_list();

    bool are_equal;

    item = insert_list(item, 1);
    item = insert_list(item, 2);
    item = insert_list(item, 3);
    item2 = insert_list(item2, 1);
    item2 = insert_list(item2, 2);
    item2 = insert_list(item2, 3);

    printList(item);
    printList(item2);

    are_equal = compare_lists(item,item2);

    if(are_equal == true){
        printf("Sao iguais");
    }
    else{
        printf("Nao sao iguais");
    }

    return 0;
}
