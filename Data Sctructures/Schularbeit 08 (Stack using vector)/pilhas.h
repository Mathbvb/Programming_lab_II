#ifndef PILHAS_H
#define PILHAS_H

struct pilhas
{
    int n;
    int vec[32];
}; typedef struct pilhas Stack;


Stack* create_stack();
Stack* push(Stack* pile, int value);
Stack* pop(Stack* pile);
void print_stack(Stack* pile);
int objects_in_stack(Stack* pile);
int object_at_top(Stack* pile);
Stack* empty_stack(Stack* pile);
bool is_palindrome(Stack* pile);
Stack* concatenate_stacks(Stack* pile1, Stack* pile2);

#endif