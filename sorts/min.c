#include "../push_swap.h"

int     min_num(int *array, int len)
{
    int index;
    int min;
    int num;

   

    index = 1;
    num = 0;
    min = array[0];

    while(index  < len)
    {
        if(array[index] <= min)
        {
            min = array[index];
            num = index;
        }
        index++;
    }
    printf("%d\n", num);
    return(num);
}
//the problem is that  it counds the index of the min after it pops out , it still remember it.