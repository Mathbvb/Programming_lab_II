#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listas.h"

int main(){
    Lista_pointer* al = create_list3();

    al = insert_list3(al, 1, "Sergio rodrigues \0");
    al = insert_list3(al, 2, "Robson fagundes \0");

    print_list3(al);

    return 0;
}
