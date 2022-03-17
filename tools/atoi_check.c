#include "../push_swap.h"

int is_digit(char n)
{
    if(n >= '0' && n <= '9')
        return (1);
    return (0);
}

int atoi_check(const char *s)
{
    long long n;
    int sign;

    sign = 1;
    n = 0;
    if(*s == '-' || *s == '+')
    {
            if(*s == '-')
                sign = -1;
            s++;
    }
    if(!is_digit(*s))
        error();
    while(*s)
    {
        n = n * 10 + (*s - 48); 
        s++;
    }
    if (*s != '\0' || (n > INT_MAX)) //add the case mentioned by Nidal 
        error();
    return (n * sign);    
}