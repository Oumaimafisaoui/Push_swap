#include "../push_swap.h"

void    rra(stacks *stack, int flag)
{
    int len;
    int index;
    int first;

    first = stack->array[0];
    index = 0;
    len = stack->top;
    while(index <= len)
    {
        stack->array[index] = stack->array[index + 1];
        index++;
    }
    stack->array[len] = first;
    if(flag)
        printf("rra\n");
    
}