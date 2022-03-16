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
void    sort_three(stacks *stack);
void    sort_two(stacks *stack); 

void    sort_type(stacks *stack_a, stacks *stack_b, int args); 

void    ra(stacks *stack, int flag); 

int is_empty(stacks *st);

void    rra(stacks *stack, int flag);

void    sa(stacks *stack, int flag);

void    pa(stacks *stack_a, stacks *stack_b);

int peek(stacks *st,int index);

int pop(stacks *stack);

int is_sorted(stacks *stack);

int     is_duplicated(stacks *stack);

stacks *create_stacks(int size);

void push(stacks *stack, int element);

void Display(stacks *stack);

void error();

int atoi_check(const char *s);

#endif