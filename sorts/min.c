#include "../push_swap.h"

int     min_num(int *array, int len)
{
    int index;
    int min;

    index = 0;
    min = array[0];
    while(index + 1 < len)
    {
        if(array[index + 1] < min)
            min = array[index + 1];
        index++;
    }
    len = index;
    return(len);
}