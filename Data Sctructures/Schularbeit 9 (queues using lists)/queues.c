#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queues.h"

Queue* create_queue(){
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->begin = q->end = NULL;

    return q;
}

void insert_queue(Queue* q, float v){
    List* new = (List*)malloc(sizeof(List));
    new->value = v;
    new->next = NULL;

    if(q->end != NULL){
        q->end->next = new;
    }
    else{
        q->begin = new;
    }

    q->end = new;
}

// 1

void print_queue(Queue* q){
    List* ptr = q->begin;
    while(ptr != NULL){
        if(ptr->next == NULL){
            printf("%.2f", ptr->value);
        }
        else{
            printf("%.2f, ", ptr->value);
        }
        ptr = ptr->next;
    }
    printf("\n");
}

bool empty_queue(Queue* q){
    if (q->begin == NULL){
        return true;
    }
    else{
        return false;
    }
}

float remove_value(Queue* q){
    float value;
    value = q->begin->value;
    q->begin = q->begin->next;

    return value;
}

float element_at_beginning(Queue* q){
    float value;
    value = q->begin->value;

    return value;
}

// 2

void combine_queues(Queue* q_res, Queue* q1, Queue* q2){
    float value;
    while(!empty_queue(q1) && !empty_queue(q2)){
        value = remove_value(q1);
        insert_queue(q_res, value);
        value = remove_value(q2);
        insert_queue(q_res, value);
    }

    if (empty_queue(q1)){
        while(!empty_queue(q2)){
            value = remove_value(q2);
            insert_queue(q_res, value);
        }
    }
    else{
        while(!empty_queue(q1)){
            value = remove_value(q1);
            insert_queue(q_res, value);
        }
    }
}

// 3

Queue* order_queue(Queue* q1, Queue* q2){
    float value1;
    float value2;
    Queue* res = create_queue();
    while(!empty_queue(q1) && !empty_queue(q2)){
        value1 = element_at_beginning(q1);
        value2 = element_at_beginning(q2);
        if(q1 > q2){
            insert_queue(res, remove_value(q2));
        }
        else{
            insert_queue(res, remove_value(q1));
        }
    } 
    if (empty_queue(q1)){
        while(!empty_queue(q2)){
            value2 = remove_value(q2);
            insert_queue(res, value2);
        }
    }
    else{
        while(!empty_queue(q1)){
            value1 = remove_value(q1);
            insert_queue(res, value1);
        }
    }      

    return res;
}