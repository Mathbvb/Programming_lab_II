#ifndef QUEUES_H
#define QUEUES_H

struct list{
    float value;
    struct list* next;
};
typedef struct list List;

struct queue{
    List* begin;
    List* end;
};
typedef struct queue Queue;

Queue* create_queue();
void insert_queue(Queue* q, float v);

// 1
void print_queue(Queue* q);

//2

void combine_queues(Queue* q_res, Queue* q1, Queue* q2);

// 3 

Queue* order_queue(Queue* q1, Queue* q2);

#endif