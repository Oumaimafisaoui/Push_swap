#include "push_swap.h"

stacks *create_stacks(int l)
{
    stacks *stack;

    stack = malloc(sizeof(stacks)); //you should know the size
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
    while(args) //put this in a function
    {
        element = atoi_check(argv[args]);
        push(stack_a, element);
        args--;
    }
    if(is_duplicated(stack_a) == 0)
    {
        printf("Error\n");
        exit(0);
    }
    if(!is_sorted(stack_a))
    {
        Display(stack_a);
        sort_type(stack_a, stack_b, argc -1);
        //pop(stack_a);
        Display(stack_a);
        //printf("[[%d]]\n", stack_a->array[3]);
    }
        
    return (0);
}   

  
    // push(stack_a, 5);
    // push(stack_a, 7);
    // push(stack_a, 1);
    // push(stack_a, 0);

   
    // push(stack_b, 1);
    // push(stack_b, 5);
    // push(stack_b, 7);
    // push(stack_b, 3);
    // push(stack_b, 9);

   