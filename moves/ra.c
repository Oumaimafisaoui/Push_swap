#include "../push_swap.h"


void    ra(stacks *stack, int flag)
{
    // int len;
    // int index;
    // int first;

    // first = stack->array[0];
    // index = 0;
    // len = stack->size - 1;
    // while(index <= len)
    // {
    //     stack->array[index] = stack->array[index + 1];
    //     index++;
    // }
    // stack->array[len] = first;
    int len = stack->size - 1;

    while(len)
    {
        ft_swap(&stack->array[len], &stack->array[len - 1]);
        len--;
    }
    if(flag)
        printf("ra\n");
    
}