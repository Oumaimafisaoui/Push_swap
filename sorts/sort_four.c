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
        pb(stack_a, stack_b);
    }

}


void    sort_four(stacks *stack_a, stacks *stack_b)
{
    int num;

    num = min_num(stack_a->array, stack_a-> size); 
    check_index2(num, stack_a, stack_b);
    sort_three(stack_a);
    pa(stack_a, stack_b);
}
 

