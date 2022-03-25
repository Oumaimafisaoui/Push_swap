#include "../push_swap.h"


int *indexing(int* sort, int *tmp, int args)
{
  
	int x = 0;
	int y = 0;

	while (y < args)
	{
		x = 0;
		while (x < args)
		{
			if(tmp[y] == sort[x])
			{
				tmp[y] = x;
			}
			x++;
		}
		y++;
	}
	return (tmp);
}