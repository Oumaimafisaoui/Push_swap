#include "../push_swap.h"

void check_index2(int num, stacks *stack_a, stacks *stack_b)
{
    if(num == 0)
    {
        rra(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 1)
    {
        rra(stack_a, 1);
        rra(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 2)
    {
        //ra(stack_a, 1);
        sa(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 3)
    {
        //sa(stack_a, 1);
        pb(stack_a, stack_b);
    }
    /*else if(num == 4)
    {
        //a(stack_a, 1);
        pb(stack_a, stack_b);
    }*/
}

void check_index(int num, stacks *stack_a, stacks *stack_b)
{
    if(num == 0)
    {
        rra(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 1)
    {
        rra(stack_a, 1);
        rra(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 2)
    {
        ra(stack_a, 1);
        ra(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 3)
    {
        sa(stack_a, 1);
        pb(stack_a, stack_b);
    }
    else if(num == 4)
    {
        //a(stack_a, 1);
        pb(stack_a, stack_b);
    }
}

void    sort_five(stacks *stack_a, stacks *stack_b, int n)
{
    int num;
    //int n = stack_a->size;
    num = min_num(stack_a->array, stack_a->size, 42);
    check_index(num, stack_a, stack_b);
    if (n == 42)
    {
        num = min_num(stack_a->array, stack_a->size - 1, 1);
        check_index2(num, stack_a, stack_b);
    }
    sort_three(stack_a);
    pa(stack_a, stack_b);
    if (n == 42)
        pa(stack_a, stack_b);
}