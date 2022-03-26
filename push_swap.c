#include "push_swap.h"

stacks *create_stacks(int l)
{
    stacks *stack;

    stack = malloc(sizeof(stacks));
    stack->top=-1;
    stack->size = l;
    stack->array=(int *)malloc(l*sizeof(int));
    if(!stack->array)
        exit(0);
    return (stack);
}

int main(int argc, char **argv)
{
    stacks *stack_a;
    stacks *stack_b;
    int element;
    int args;

    args = argc - 1;
    stack_a = create_stacks(args);
    stack_b = create_stacks(args);
    if(argc < 2)
        return (0);
    while(args)
    {
        element = atoi_check(argv[args]);
        push(stack_a, element);
        args--;
    }
    if(is_duplicated(stack_a) == 0)
    {
        //ft_putstr_fd("Error\n", 2);
        //exit(1);
        write(2, "Error\n", 6);
        exit(1);
    }
    if(!is_sorted(stack_a))
    {
             sort_type(stack_a, stack_b, argc -1);
    } 
    return (0);
} 