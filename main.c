#include "push_swap.h"
#include "libft.h"

int main (int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int capacity;
    int i;

    if (argc < 2)
        return (0);
    if (validate_input(argc, argv))
        return (0);
    i = 1;
    capacity = argc - 1;
    stack_a = init_stack(capacity);
    stack_b = init_stack(capacity);
    if (!stack_a || !stack_b)
    {
        free(stack_a);
        free(stack_b);
        return (0);
    }
    while (i < argc)
    {
        stack_a->arr[stack_a->top] = ft_atoi(argv[i]);
        i++;
        stack_a->top++;
    }
   if (check_duplication(stack_a) == 1)
        return(0);
    //push_swap(stack_a);
    int j = 0;
    while (j < stack_a->top)
    {
        ft_putnbr_fd(stack_a->arr[j], 1);
        j++;
    }

    return (0);
}
