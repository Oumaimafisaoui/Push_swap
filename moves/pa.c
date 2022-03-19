#include "../push_swap.h"

void    pa(stacks *stack_a, stacks *stack_b)
{
    if(!is_empty(stack_b))
    {
        int res = 0;
        res = pop(stack_b);
        push(stack_a, res);

        printf("pa\n");
    }
    return ;
}

