#include "../push_swap.h"

int is_empty(stacks *st)
{
	if(st->top==-1)
		return 1;
	return 0;
}

void push(stacks *stack, int element) //increment top or size
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
		ft_putstr_fd("Stack Underflow\n", 1);
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
		ft_putstr_fd("Invalid Index \n",1);
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

size_t	ft_strlen(const char *str)
{
	size_t index;

	index = 0;
	while(str[index] != '\0')
		index++;
	return (index);
}

void	ft_putstr_fd(char *s, int fd)
{
	
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}