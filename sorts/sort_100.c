#include "../push_swap.h"

stacks *sort_index(stacks *stack_a)
{
    int *sort;
    int index;
    int element;
    int len;

    sort = malloc(sizeof(int) * stack_a->size);
    len = stack_a->size;
    index = 0;
    while(index < stack_a->size)
    {
        sort[index] = stack_a->array[index];
        index++;
    }

    sort = insertion_sort(sort, stack_a->size);
    sort = indexing(sort,stack_a->array,stack_a->size);

    while(len) //put this in a function
    {
        element = sort[len];
        push(stack_a, element);
        len--;
    }
    

    // index = 0;

    // while(index < stack_a->size)
    // {
    //     printf("----%d\n", stack_a->array[index]);
    //     index++;
    // }
    
    return(stack_a);
    
}

int	bits_count(stacks *stack_a)
{
	int	n;
	int	nb;

	nb = 0;
	n = stack_a->size - 1;
	while (n)
	{
		n = n >> 1; // we right shift the bigest number to see how many bits we will shift in 
		++nb;
	}
	return (nb);
}


int     size_it(stacks *stack_a)
{
    int i;
    i = stack_a->top - 1;
    int j;
    j = 0;

    while (j < i)
    {
        j++;
    }

    return (j);

}
//the answer is infront of your eyes just concentrate

void    radix(stacks *stack_a, stacks *stack_b)
{
    int bits;
    int i;
    int x = 0;
    int count = 0;

    sort_index(stack_a);
    bits = bits_count(stack_a); //this case 3
    i = 0; //counter for bits

    //while(x++ < bits) //while we didn't reach the last bit
    while(is_sorted(stack_a) == 0)
    {
        // index2 = size_it(stack_a); //problem here
        // while(index2-- >= 0) //while the elements are increasing
        // {
        //     if(stack_a->array[stack_a->top] & (1 << index1)) //if the number's right shift anding with one is zero put it in b
        //         ra(stack_a, 1);
        //     else
        //     {
        //         pb(stack_a, stack_b);
        //         ++count; //count how many times we pushed the elements to b
        //     }
        // }
        // ++count; 
        // while(--count)
        //     pa(stack_a, stack_b);
        //****************************
        //          i = stack_a->size;
        //         //printf("0");
		// while(i > 0)
		// {
		// 	if (stack_a->array[stack_a->top] & (1 << x))
		// 	{
        //                         //printf("[%d]\n", stack_a.arr[stack_a.t]);
		// 		ra(stack_a, 1);
		// 		//printf("ra\n");
		// 	}
		// 	else
		// 	{
		// 		pb(stack_a, stack_b);
		// 		//printf("pb\n");
        //         count++;
		// 	}
		// 	i--;
		// }
		// while(count > 0)
		// {
		// 	pa(stack_a, stack_b);
		// 	//printf("pa\n");
        //     count--;
		// }
		// x++;
    // }
    // Display(stack_a);
            i = stack_a->size;
                //printf("0");
                while(i > 0)
                {
                  // printf("hhhhh");
                   //printf("[%d]\n", x);
                        if (stack_a->array[stack_a->top] & (1 << x))
                        {
                                //printf("[%d]\n", stack_a.arr[stack_a.t]);
                                ra(stack_a, 1);
                                //printf("ra\n");
                        }
                        else
                        {
                                pb(stack_a, stack_b);
                                //printf("pb\n");
                count++;
                        }
                        i--;
                }
                while(count > 0)
                {
                        pa(stack_a, stack_b);
                        //printf("pa\n");
            count--;
                }
                x++;
 
    }
  //  Display(stack_a);
}

