#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queues.h"

Queue* create_queue(){
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->n = 0;
    q->begin = 0;

    return q;
}

void insert_queue(Queue* q, float v){
    int end;
    if(q->n == N){
        printf("Fila cheia, nao eh possivel inserir o valor. \n");
        return;
    }
    end = (q->begin + q->n) % N;
    q->vector[end] = v;
    q->n++;
}

void print_queue(Queue* q){
    if(q->n != 0){
        int end;
        int aux = (q->begin + q->n) % N;
        if(aux == 0){
            end = N;
        }
        else{
            end = aux;
        }
        if(end > q->begin){
            for (int i = q->begin; i < end; i++){
                if(i == end - 1){
                    printf("%.2f", q->vector[i]);
                }
                else{
                    printf("%.2f, ", q->vector[i]);
                }
            }
        }
        else{
            for (int i = q->begin; i < N; i++){
                printf("%.2f, ", q->vector[i]);
            }
            for (int i = 0; i < end; i++){
                if(i == end - 1){
                    printf("%.2f", q->vector[i]);
                }
                else{
                    printf("%.2f, ", q->vector[i]);
                }
            }
        }
    }
    else{
        printf("Empty queue. \n");
    }
    printf("\n");
}

float remove_first(Queue* q){
    float value;
    if(q->n == 0){
        printf("Empty queue. \n");
    }
    else{
        value = q->vector[q->begin];
        q->begin = (q->begin + 1) % N;
        q->n--;
    }
    return value;
}

float first_value(Queue* q){
    float value;
    value = q->vector[q->begin];

    return value;
}

// 2

void combine_queues(Queue* res, Queue* q1, Queue* q2){
    float value;
    while(q1->n != 0 && q2->n != 0){
        value = remove_first(q1);
        insert_queue(res, value);
        value = remove_first(q2);
        insert_queue(res, value);
    }
    if(q1->n == 0){
        while(q2->n != 0){
            value = remove_first(q2);
            insert_queue(res, value);
        }
    }
    else{
        while(q1->n != 0){
            value = remove_first(q1);
            insert_queue(res, value);
        }
    }
}

// 3 

Queue* order_queue(Queue* q1, Queue* q2){
    Queue* res = create_queue();
    float value1, value2;
    
    while(q1->n != 0 && q2->n != 0){
        value1 = first_value(q1);
        value2 = first_value(q2);
        if(value1 > value2){
            insert_queue(res, remove_first(q2));
        }
        else{
            insert_queue(res, remove_first(q1));
        }
    }
    if(q1->n == 0){
        while(q2->n != 0){
            insert_queue(res, remove_first(q2));
        }
    }
    else{
        while(q1->n != 0){
            insert_queue(res, remove_first(q1));
        }
    }
    
    return res;
}