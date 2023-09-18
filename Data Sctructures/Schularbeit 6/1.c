#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List_two* hehe = create();

    hehe = insert(hehe, 1);
    hehe = insert(hehe, 2);
    hehe = insert(hehe, 3);

    print_list(hehe);

    hehe = insert_at_end(hehe, 4);
    hehe = insert_at_end(hehe, 4895);

    print_list(hehe);

    return 0;
}
