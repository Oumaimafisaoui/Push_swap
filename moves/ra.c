#include "../push_swap.h"

void    ra(stacks *stack, int flag)
{
    int len;
    int last;

    len = stack->top;
    last = stack->array[len];
    
    while(len >= 0)
    {
        stack->array[len] = stack->array[len - 1];
        len--;
    }
    stack->array[0] = last;
    if(flag)
        printf("ra\n");
}