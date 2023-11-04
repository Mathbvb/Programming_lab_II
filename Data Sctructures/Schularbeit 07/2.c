#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listas.h"

int main(){
    Lista* al = create_list2();

    al = insert_list2(al, 1, "Sergio rodrigues \0");
    al = insert_list2(al, 2, "Robson fagundes \0");

    print_list2(al);

    return 0;
}
