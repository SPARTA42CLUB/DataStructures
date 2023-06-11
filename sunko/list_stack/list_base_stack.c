#include "list_base_stack.h"
#include <stdlib.h>
#include <stdio.h>

void	StackInit(Stack *pstack)
{
	pstack->head = NULL;
}

int	SIsEmpty(Stack *pstack)
{
	if (pstack->head == NULL)
		return (TRUE);
	else
		return (FALSE);
}

void	SPush(Stack *pstack, Data data)
[
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
	{
		fprintf(stderr, "heap memory is full, cannot allocate heap memory!");
		exit(EXIT_FAILURE);
	}
	if (SIsEmpty(pstack))
	{
		pstack->head = new_node;
	}
]
