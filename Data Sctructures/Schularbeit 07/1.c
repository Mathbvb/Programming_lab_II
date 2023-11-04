#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listas.h"

int main(){
    List* al = create();

    al = insert(al, 1, "Sergio rodrigues \0");
    al = insert(al, 2, "Robson fagundes \0");

    print_list(al);

    return 0;
}
