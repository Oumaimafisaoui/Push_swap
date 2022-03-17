#include "../push_swap.h"

void    sort_type(stacks *stack_a, stacks *stack_b, int args)
{
    if(args == 2)
        sort_two(stack_a);
     if(stack_a->size == 3)
        sort_three(stack_a);
    if(stack_a->size == 4)
            sort_five(stack_a, stack_b, 0);
    if(stack_a->size == 5)
         sort_five(stack_a, stack_b, 42);
    // else
    //     sort_big(stack_a, stack_b);
}