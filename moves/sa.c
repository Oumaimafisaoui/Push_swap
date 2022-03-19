#include "../push_swap.h"

void    sa(stacks *stack, int flag)
{
    ft_swap(&stack->array[stack->top], &stack->array[stack->top - 1]);
    if(flag)
        printf("sa\n");
}