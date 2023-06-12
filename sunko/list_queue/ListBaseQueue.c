#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void	QueueInit(Queue *pq)
{
	pq->front = NULL;
	pq->rear = NULL;
}

bool	QIsEmpty(Queue *pq)
{
	if (!(pq->front))
		return (true);
	return (false);
}

void	Enqueue(Queue *pq, Data data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
	{
		fprintf(stderr, "heap memory error!");
		exit(EXIT_FAILURE);
	}
	new_node->next = NULL;
	new_node->data = data;
	if (QIsEmpty(pq))
	{
		pq->front = new_node;
		pq->rear = new_node;
	}
	else
	{
		pq->rear->next = new_node;
		pq->rear = new_node;
	}
}

Data	Dequeue(Queue *pq)
{
	t_node	*rnode;
	Data	rdata;

	if (QIsEmpty(pq))
	{
		fprintf(stderr, "Queue is already empty!\n");
		exit(EXIT_FAILURE);
	}
	rnode = pq->front;
	rdata = rnode->data;
	pq->front = pq->front->next;
	free(rnode);
	return (rdata);
}

Data	QPeek(Queue *pq)
{
	if (QIsEmpty(pq))
	{
		fprintf(stderr, "Queue Memory error!");
		exit(EXIT_FAILURE);
	}
	return (pq->front->data);
}
