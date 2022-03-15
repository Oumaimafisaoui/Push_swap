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

int is_empty(stacks *st)
{
 if(st->top==-1)
    return 1;
 return 0;
}

void push(stacks *stack, int element)
{
 if(stack->top == stack->size-1)
    return ;
 else
 {
    stack->top++;
    stack->array[stack->top]=element;
 }
 
}

void Display(stacks *stack)
{
 int index;

 index=stack->top;
 while(index>=0)
 {
    printf("%d ",stack->array[index]);
    index--;
 }
    printf("\n");
}

int pop(stacks *stack)
{
 int x=-1;
 
 if(stack->top==-1)
    printf("Stack Underflow\n");
 else
 {
    x=stack->array[stack->top--];
 }
 return x;
}

int peek(stacks *st,int index)
{
 int x=-1;
 if(st->top-index+1<0)
    printf("Invalid Index \n");
 x=st->array[st->top-index+1];
 return x;
}


int main(int argc, char **argv)
{
    stacks *stack_a;
    stacks *stack_b;
    int element;
    int index;
    int args;

    args = argc - 1;
    stack_a = create_stacks(args);
    stack_b = create_stacks(args);
    if(argc <= 2)
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
  
    push(stack_a, 5);
    push(stack_a, 7);
    push(stack_a, 1);
    push(stack_a, 0);

   
    push(stack_b, 1);
    push(stack_b, 5);
    push(stack_b, 7);
    push(stack_b, 3);
    push(stack_b, 9);

   
    if(!is_sorted(stack_a))
    {
        // sort_type(stack_a, stack_b);
        // Display(stack_a);
        // Display(stack_b);

        // // pa(stack_a,stack_b);
       
        // Display(stack_a);
        //  Display(stack_b);
        // pa(stack_a, stack_b);
        //  Display(stack_a);
        // Display(stack_b);

        printf("%d", pa(stack_a, stack_b));

    }
    

    return (0);
}   

