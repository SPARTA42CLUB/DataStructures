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
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
	{
		fprintf(stderr, "heap memory is full, cannot allocate heap memory!");
		exit(EXIT_FAILURE);
	}
	new_node->data = data;
	new_node->next = pstack->head;
	pstack->head = new_node;
}

Data	SPop(Stack *pstack)
{
	Data	rdata;
	t_node	*rnode;

	if (SIsEmpty(pstack))
	{
		fprintf(stderr, "Stack memory error!");
		exit(EXIT_FAILURE);
	}
	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);
	return (rdata);
}

Data	SPeek(Stack *pstack)
{
	if (SIsEmpty(pstack))
	{
		fprintf(stderr, "Stack memory error!");
		exit(EXIT_FAILURE);
	}
	return (pstack->head->data);
}
