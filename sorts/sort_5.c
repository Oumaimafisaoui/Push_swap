#include "../push_swap.h"

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
        pb(stack_a, stack_b);
    }
}

void    sort_five(stacks *stack_a, stacks *stack_b)
{
    int num;

        num = min_num(stack_a->array, stack_a->size); //this line to have only 4 elements at the ned
        check_index(num, stack_a, stack_b);
        num = min_num(stack_a->array, stack_a->size -1);                                         //-1 because it remembers the last value of min
        check_index2(num, stack_a, stack_b);
        sort_three(stack_a);
        pa(stack_a, stack_b);
        pa(stack_a, stack_b); 
 }
