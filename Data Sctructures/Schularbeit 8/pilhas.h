#ifndef PILHAS_H
#define PILHAS_H

struct pilhas
{
    int value;
    struct pilhas* next;
}; typedef struct pilhas Stack;

Stack* create_stack();
Stack* push(Stack* pile, int v);
void print_stack(Stack* pile);
Stack* pop(Stack* pile);
int number_of_objects_in_stack(Stack* pile);
void print_top_stack(Stack* pile);
Stack* empty_stack(Stack* pile);
bool is_palindrome(Stack* pile);
Stack* concatenate(Stack* pile1, Stack* pile2);

#endif