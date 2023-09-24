#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queues.h"


int main(){
    Queue* q_res = create_queue();
    Queue* q1 = create_queue();
    Queue* q2 = create_queue();

    insert_queue(q1, 1.0);
    insert_queue(q2, 9.0);
    insert_queue(q1, 8.0);
    insert_queue(q2, 4.0);
    insert_queue(q2, 15.0);
    insert_queue(q2, 6.0);

    print_queue(q1);
    print_queue(q2);

    combine_queues(q_res, q1, q2);

    print_queue(q_res);
    print_queue(q1);
    print_queue(q2);

    return 0;
}
