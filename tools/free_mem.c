#include "../push_swap.h"

void    error_mssg(void)
{
    printf("Error\n");
    exit(0);
}
void	free_it(char **array, int flag)
{
	int	index;

	index = 0;
	while (array[index++])
		free(array[index]);
	free(array);
    if(flag)
	    error_mssg();
}