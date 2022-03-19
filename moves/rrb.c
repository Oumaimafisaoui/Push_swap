#include "../push_swap.h"

void    rrb(stacks *stack, int flag)
{
    int len;
    int max;

    max = stack->size - 1;
    len = 1;

    while(len <= max)
    {
        ft_swap(&stack->array[len], &stack->array[len - 1]);
        len++;
    }
    if(flag)
        printf("rrb\n");
}