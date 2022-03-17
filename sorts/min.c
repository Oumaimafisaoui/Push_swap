#include "../push_swap.h"

int     min_num(int *array, int len, int n)
{
    int index;
    int min;
    if (n == 1)
    {
        index = 1;
        min = array[1];
    }
    else
    {
        index = 0;
        min = array[0];
    }
    while(index + 1 < len)
    {
        if(array[index + 1] < min)
            min = array[index + 1];
        index++;
    }
    len = len - index - 1;
    printf("[[[[[%d\n]]]]]", min);
    return(len);
}