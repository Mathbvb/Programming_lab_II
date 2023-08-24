#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listas.h"

int main(){
    List* item = create_list();
    float average;

    item = insert_list(item, 8);
    item = insert_list(item, 9);
    item = insert_list(item, 10);

    average = average_calculator(item);

    printf("%.2f", average);

    return 0;
}
