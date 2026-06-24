#include "push_swap.h"

t_stack *init_stack(int capacity)
{
    t_stack *stack;

    stack = (t_stack *)malloc(sizeof(t_stack));
    if (!stack)
        return(NULL);
    stack->arr = malloc(capacity);
    if (!stack->arr)
    {
        free(stack);
        return(NULL);
    }
    stack->size = 0;
    stack->capacity = capacity;
    return(stack);
}