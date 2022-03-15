#include "push_swap.h"

void    rb(stacks *stack, int flag)
{
    int len;
    int index;
    int first;

    first = stack->array[0];
    index = 0;
    len = stack->size - 1;
    while(index <= len)
    {
        stack->array[index] = stack->array[index + 1];
        index++;
    }
    stack->array[len] = first;
    if(flag)
        printf("rb\n");
}