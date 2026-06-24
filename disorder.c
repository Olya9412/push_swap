#include "push_swap.h"
#include "libft.h"

float	compute_disorder(t_stack *stack_a)
{
	int mistakes;
	int total_pairs;
    int i;

    mistakes = 0;
    total_pairs = 0;
    i = 0;
    while (i < stack_a->top - 1)
    {
         total_pairs += 1;
            if (stack_a->arr[i] > stack_a->arr[i + 1])
            {
                mistakes += 1;
            }
        i++;
    }

    return (mistakes/total_pairs);
}