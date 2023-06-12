#include <stdlib.h>
#include <stdio.h>
#include "CircularQueue.h"

void	QueueInit(Queue *pq)
{
	pq->front = 0;
	pq->rear = 0;
}

bool	QIsEmpty(Queue *pq)
{
	if (pq->front == pq->rear)
		return (true);
	else
		return (false);
}

int		NextPosIdx(int pos)
{
	if (pos == QUE_LEN - 1)
		return (0);
	else
		return (pos + 1);
}
void	Enqueue(Queue *pq, Data data)
{
	if (NextPosIdx(pq->rear) == pq->front)
	{
		fprintf(stderr, "Queue Memory error!\n");
		exit(EXIT_FAILURE);
	}
	pq->rear = NextPosIdx(pq->rear);
	pq->queArr[pq->rear] = data;
}

Data	Dequeue(Queue *pq)
{
	if (QIsEmpty(pq))
	{
		fprintf(stderr, "Queue Memory error!\n");
		exit(EXIT_FAILURE);
	}
	pq->front = NextPosIdx(pq->front);
	return (pq->queArr[pq->front]);
}

Data	QPeek(Queue *pq)
{
	if (QIsEmpty(pq))
	{
		fprintf(stderr, "Queue Memory error!\n");
		exit(EXIT_FAILURE);
	}
	return (pq->queArr[pq->rear]);
}
