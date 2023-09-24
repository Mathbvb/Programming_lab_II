#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queues.h"


int main(){
    Queue* q = create_queue();

    insert_queue(q, 1.0);
    insert_queue(q, 2.0);
    insert_queue(q, 3.0);
    insert_queue(q, 4.0);

    print_queue(q);

    return 0;
}
