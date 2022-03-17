#include "../push_swap.h"

void    sort_three(stacks *stack)
{
    int first;
    int second;
    int third;
    else
    {
        first = stack->array[2];
        //printf("]]]]]]%d", first);
        second = stack->array[1];
        third = stack->array[0];
    }
    if (first > second && second < third && first < third)
    {
        //sa(stack, 1);
        //   ra(stack, 0);
        //   ra(stackm 0);
        //   printf("sa");

    }
    else if (first > second && first > third && second < third)
    {
        rra(stack, 1);
    }
    else if (first > second && first > third && second > third)
    {
        sa(stack,1);
        ra(stack,1);
    }
    else if (first < second && first < third && second > third)
    {
        sa(stack, 1);
        rra(stack, 1);
    }
    else if(first > second && first > third && second < third)
    {
           ra(stack, 1);
    }
}