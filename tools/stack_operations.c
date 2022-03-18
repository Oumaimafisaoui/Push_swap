#include "../push_swap.h"

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
    printf("\n %d\n",stack->array[index]);
    printf("|_|\n");
    index--;
 }
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

void ft_swap(int *a, int *b)
{
  int tmp;
  tmp = *b;
  *b = *a;
  *a = tmp;
}
