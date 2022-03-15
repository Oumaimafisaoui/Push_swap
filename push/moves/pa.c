#include "../push_swap.h"

void    pa(stacks *stack_a, stacks *stack_b)
{
    int res;
    int len;

    len = stack_b->size - 1;
    if(!is_empty(stack_b))
    {
        res = pop(stack_b);
        push(stack_a, res);
        printf("pa\n");
    }
    return ;
}