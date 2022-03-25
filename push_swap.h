#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MAX 2147483647

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

typedef struct structure
{
    int *array;
    int size;
    int top;

}stacks;

int	*insertion_sort(int *array, int args);
int *indexing(int* sort, int *tmp, int args);
stacks *sort_index(stacks *stack_a);
void    radix(stacks *stack_a, stacks *stack_b);
int	bits_count(stacks *stack_a);
int     size_it(stacks *stack_a);
void    sort_four(stacks *stack_a, stacks *stack_b);
void    sort_five(stacks *stack_a, stacks *stack_b);
void check_index2(int num, stacks *stack_a, stacks *stack_b);
void    sort_three(stacks *stack);
void    sort_two(stacks *stack);
void    sort_type(stacks *stack_a, stacks *stack_b, int args);
int is_empty(stacks *st);
void    ra(stacks *stack, int flag); 
void    rb(stacks *stack, int flag);
void    rr(stacks *stack); 
void    sb(stacks *stack, int flag); 
void    ss(stacks *stack); 
void    rra(stacks *stack, int flag);
void    rrb(stacks *stack, int flag);
void    sa(stacks *stack, int flag);
void    rrr(stacks *stack);
void   pa(stacks *stack_a, stacks *stack_b);
void    pb(stacks *stack_a, stacks *stack_b);
int     min_num(int *array, int len);
int peek(stacks *st,int index);
void  ft_swap(int *a, int *b);

int pop(stacks *stack);

int is_sorted(stacks *stack);

int     is_duplicated(stacks *stack);

stacks *create_stacks(int size);

void push(stacks *stack, int element);

void Display(stacks *stack);

void error();

int atoi_check(const char *s);

#endif