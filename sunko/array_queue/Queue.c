#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Queue	QueueCreate(int max_size)
{
	Queue	queue;

	queue.queArr = (element *)malloc(sizeof(element) * max_size);
	if (!queue.queArr)
	{
		fprintf(stderr, "heap memory error!");
		exit(EXIT_FAILURE);
	}
	queue.front = -1;
	queue.rear = -1;
	queue.max_size = max_size;
	return (queue);
}

bool	QIsEmpty(Queue *pq)
{
	if (pq->front == pq->rear)
		return (true);
	else
		return (false);
}

bool	QIsFull(Queue *pq)
{
	if (pq->rear == pq->max_size - 1)
		return (true);
	else
		return (false);
}

void	addQ(Queue *pq, element item)
{
	if (QIsFull(pq))
		queueFull(pq);
	pq->queArr[++(pq->rear)] = item;
}

element	deleteQ(Queue *pq)
{
	if (QIsEmpty(pq))
		exit(EXIT_FAILURE);
	return (pq->queArr[++(pq->front)]);
}


void	queueFull(Queue *pq)
{
	pq = (Queue *)realloc(pq, sizeof(Queue) * pq->max_size * 2);
	if (!pq)
	{
		fprintf(stderr, "Heap memory error!");
		exit(EXIT_FAILURE);
	}
	pq->max_size = pq->max_size * 2;
}
