#include "../push_swap.h"

void    sa(stacks *stack, int flag)
{
    int index;
    int tmp;
    index = stack->size - 1;

    tmp = stack->array[index] ;
    stack->array[index] =  stack->array[index - 1];
    stack->array[index - 1] = tmp; 

    if(flag)
        printf("sa\n");
}