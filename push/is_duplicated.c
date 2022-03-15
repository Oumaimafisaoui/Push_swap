#include "push_swap.h"

int     is_duplicated(stacks *stack)
{
	int	index1;
	int	index2;

	index2 = 1;
	index1 = 0;
	while (index1 < stack->size)
	{
		while (index2 < stack->size)
		{
			if (stack->array[index1] == stack->array[index2] && index1 != index2)
				return (0);
			index2++;
		}
		index2 = 0;
		index1++;
	}
	return (1);
}