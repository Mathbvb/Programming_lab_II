#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listas.h"

int main(){
    ListaHet* al = create_list4();

    al = insert_list4_aluno(al, 1, "Sergio rodrigues \0");
    al = insert_list4_aluno(al, 2, "Robson fagundes \0");
    al = insert_list4_professor(al, 1, "Mister azulejo", 5160.0);

    print_list4(al);

    return 0;
}
