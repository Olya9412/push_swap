#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
    int *arr;
    int top;
    int capacity;
} t_stack;

t_stack *init_stack(int capacity);
#endif