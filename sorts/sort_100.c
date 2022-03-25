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
    //     printf("%d\n", sort[index]);
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
    int index1;
    int index2;
    int count = 0;

    sort_index(stack_a);
    bits = bits_count(stack_a); //this case 3
    index1 = 0; //counter for bits

    while(index1++ < bits) //while we didn't reach the last bit
    {
        index2 = size_it(stack_a); //problem here
        while(index2-- >= 0) //while the elements are increasing
        {
            if(((stack_a->array[stack_a->top] >> index1) & 1) == 1) //if the number's right shift anding with one is zero put it in b
                ra(stack_a, 1);
            else
            {
                pb(stack_a, stack_b);
                ++count; //count how many times we pushed the elements to b
            }
        }
        ++count; //count how many times we
        while(--count)
            pa(stack_a, stack_b);
    }
    Display(stack_a);
   }


    

























        // sort_index(stack_a);
    // int size = stack_a->size;
    // for (int i = 0 ; !is_sorted(stack_a) ; ++i)
    //     {
    //         for(int j = 0 ; j < size ; ++j)
    //         {
    //             int num = stack_a->top;
    //             if ((num >> i) &1) 
    //                     ra(stack_a, 1);
    //             else
    //                 pb(stack_a, stack_b);
    //         }
    //         while (!is_empty(stack_b)) 
    //             pa(stack_a, stack_b);
    //     }










	// int	size;
	// int	max;
    // int bit;





	// size = stack_a->size;

    // // printf("%d", size);
    // max = size - 1;
    // bit = 0;
    // int topi = 0;
    
    // while((max >> bit) != 0)
    //     ++bit;
    // Display(stack_a);
	// sort_index(stack_a);
	// while (!is_sorted(stack_a))
	// {
    //     int i = 0;
    //     while(i < bit)
    //     {
    //         int j = 0;
    //         while(j < size)
    //         {
    //             topi = stack_a->array[stack_a->top];
    //             if(((topi >> i) & 1) == 1)
    //                 ra(stack_a, 1);
    //             else 
    //                 pb(stack_a, stack_b);
    //             ++j;

    //         }
    //         while(stack_b->size != -1)
    //             pa(stack_a, stack_b);
    //         ++i;
    //     }
	// }

     
 









// 	int	i;
// 	int	j;

// 	j = 0;
//     (void)stack_b;
//     // Display(stack_a);
//     // printf("\n\n\n");
//    // i = stack_a->top;
// 	sort_index(stack_a);
//     //printf("%d", stack_a->array[i] & (1 << j));
// 	while (!is_sorted(stack_a))
// 	{
//             i = stack_a->top - 1;
//             //printf("%d", stack_a->array[i]);
//             while (i > 0)
//             {
//                     if (((stack_a->array[i] >> j) & 1) == 1)
//                         ra(stack_a, 1);
//                     else
//                         pb(stack_a, stack_b);
//                     i--;
//              }
//             //  Display(stack_a);
//             //  while (stack_b->top > 0)
//             //      pa(stack_a, stack_b);
//             // j++;
//     }
//     return ;


    // int index1;
    // int index2;

    // index1 = stack_a->top;
    // index2 = 0; 

    // sort_index(stack_a);
   
    // while(!is_sorted(stack_a))
    // {
    //     while(index2 <= index1)
    //     {
    //              if ((stack_a->array[index1] & (1 << index2)) == 0)
    //                 pb(stack_a, stack_b);
    //             else
    //                 ra(stack_a, 1);
    //             index1--;
    //     }
    //     while (stack_b->top > 0)
	// 		pa(stack_a, stack_b);
    //     index2++;
    // }



