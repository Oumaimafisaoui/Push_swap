#include "../push_swap.h"

void    rra(stacks *stack, int flag)
{
    int len;
    int index;
    int last;

    len = stack->size - 1;
    last = stack->array[len];
    index = 0;
    
    while(len >= 0)
    {
        stack->array[len] = stack->array[len - 1];
        len--;
    }
    stack->array[0] = last;
    if(flag)
        printf("rra\n");
}