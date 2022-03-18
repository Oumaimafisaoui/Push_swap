#include "../push_swap.h"

void    pa(stacks *stack_a, stacks *stack_b)
{

    if(!is_empty(stack_b))
    {
        // res = pop(stack_b);
        // push(stack_a, res);
        
        ft_swap(&stack_a->array[stack_a->size], &stack_b->array[stack_b->size -1]);
        stack_a->size += 1;
        stack_b->size -= 1;
        printf("pa\n");
    }
    return ;
}