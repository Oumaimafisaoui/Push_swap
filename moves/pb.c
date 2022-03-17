#include "../push_swap.h"

void    pb(stacks *stack_a, stacks *stack_b)
{
    int res;
  
    if(!is_empty(stack_a))
    {
        res = pop(stack_a);
        push(stack_b, res);
        printf("pb\n");
    }
    return ;
}