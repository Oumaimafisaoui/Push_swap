#include "../push_swap.h"

void    sort_three(stacks *stack)
{
    int first;
    int second;
    int third;

    first = stack->array[2];
    second = stack->array[1];
    third = stack->array[0];
    if (first > second && second < third && first < third)
    {
        sa(stack, 1);

    }
    else if (first > second && first > third && second < third)
    {
        ra(stack, 1);
    }
    else if (first > second && first > third && second > third)
    {
        sa(stack,1);
        rra(stack,1);
    }
    else if (first < second && first < third && second > third)
    {
        
        rra(stack, 1);
        sa(stack, 1);
        //ra(stack, 1);
    }
    else if(first < second && second > third && third < first)
    {
           rra(stack, 1);
    }
}