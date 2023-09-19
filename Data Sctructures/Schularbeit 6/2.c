#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List_two* hehe = create();

    hehe = insert(hehe, 1);
    hehe = insert(hehe, 2);
    hehe = insert(hehe, 3);
    hehe = insert(hehe, 4);
    hehe = insert(hehe, 8);
    hehe = insert(hehe, 5);
    hehe = insert(hehe, 6);
    hehe = insert(hehe, 7);
    hehe = insert(hehe, 8);

    print_list(hehe);

    hehe = remove_back(hehe,74);

    print_list(hehe);

    return 0;
}
