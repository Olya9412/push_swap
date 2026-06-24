#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*arr;
	int	top;
	int	capacity;
}		t_stack;

t_stack	*init_stack(int capacity);
void	sa(t_stack *stack_a);
void	push_swap(t_stack *stack_a);
float	compute_disorder(t_stack *stack_a);
int		validate_input(int argc, char **argv);
int		check_duplication(t_stack *stack);
long	ft_atol(const char *str);
#endif