#include "../push_swap.h"

void    ra(stacks *stack, int flag)
{

    // int l = stack->array[stack->top];
    // int i = stack->top;


    // while(i >= 0) //i +1 to prevent the segfault
    // {
    //     //ft_swap(&stack->array[len], &stack->array[len - 1]);
    //     stack->array[i - 1] = stack->array[i];
    //     i--;
    // }
    // stack->array[stack->top] = l;
    // if(flag)
    //     printf("ra\n");
    
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