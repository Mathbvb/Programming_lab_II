#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queues.h"

int main(){
    Queue* q1 = create_queue();
    Queue* q2 = create_queue();
    Queue* res = create_queue();

    insert_queue(q1, 2.0);
    insert_queue(q2, 3.0);
    insert_queue(q1, 4.0);
    insert_queue(q2, 9.0);
    insert_queue(q1, 8.0);
    insert_queue(q2, 27.0);
    insert_queue(q1, 16.0);

    print_queue(q1);
    print_queue(q2);

    combine_queues(res, q1, q2);

    print_queue(res);
    print_queue(q1);
    print_queue(q2);

    return 0;
}
