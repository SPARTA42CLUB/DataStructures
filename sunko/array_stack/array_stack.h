#ifndef ARRAY_STACK_H
# define ARRAY_STACK_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# define MAX_STACK_SIZE 100

typedef struct {
	int n;
	int k;
	char *f_name;
}	element;

typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}	Stack;

Stack	CreateS(void);
void	push(Stack *s, element item);
element	pop(Stack *s);
bool	IsEmpty(Stack *s);
void	stackFull(void);
void	stackEmpty(void);

#endif
