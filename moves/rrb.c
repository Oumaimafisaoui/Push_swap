#include "../push_swap.h"

void    rrb(stacks *stack, int flag)
{
    int len;
    int last;

    len = stack->size - 1;
    last = stack->array[len];
    
    while(len >= 0)
    {
        stack->array[len] = stack->array[len - 1];
        len--;
    }
    stack->array[0] = last;
    if(flag)
        printf("rrb\n");
}