#include "../push_swap.h"

int	*insertion_sort(int *array, int args)
{
	int	index1;
	int	index2;


	index1 = 1;
	while (index1 < args)
	{
		if (array[index1] < array[index1 - 1])
		{
			index2 = index1;
			while (array[index2] < array[index2 - 1] && index2 > 0)
			{
				ft_swap(&array[index2], &array[index2 - 1]);
				if (index2 - 1 > 0)
					index2--;
			}
		}
		index1++;
	}
	return (array);
}