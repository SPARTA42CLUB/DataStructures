#ifndef	STACK_H
# define STACK_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct {
	int	n;
	int	k;
	char *f_name;
}	element;

typedef struct {
	element	*stack;
	int		top;
	int		capacity;
}	Stack;

Stack	CreateS(void);
void	push(Stack *s, element item);
bool	isEmpty(Stack *s);
bool	isFull(Stack *s);
void	stackFull(Stack *s);
element	pop(Stack *s);
void	stackEmpty(void);
void	stackEmpty(void);

#endif
