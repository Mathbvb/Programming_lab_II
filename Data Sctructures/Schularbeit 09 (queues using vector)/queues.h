#ifndef QUEUES_H
#define QUEUES_H

#define N 32

struct queue{
    int n;
    int begin;
    float vector[N];
};
typedef struct queue Queue;

Queue* create_queue();
void insert_queue(Queue* q, float v);
void print_queue(Queue* q);

// 2 
void combine_queues(Queue* res, Queue* q1, Queue* q2);

// 3 

Queue* order_queue(Queue* q1, Queue* q2);

#endif