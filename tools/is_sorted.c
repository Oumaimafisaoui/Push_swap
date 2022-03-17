#include "../push_swap.h"
int is_sorted(stacks *stack)
{
	int	index;

	index = stack->size - 1;

	while (index > 0)
	{
		if (stack->array[index] > stack->array[index - 1])
			return 0;
		index--;
	}
	return 1;
}
