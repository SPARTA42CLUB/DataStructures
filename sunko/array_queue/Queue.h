#ifndef __QUEUE_H__
# define __QUEUE_H__

#include <stdbool.h>

typedef struct {
	int key;
}	element;

typedef struct _Queue
{
	int		front;
	int		rear;
	int		max_size;
	element	*queArr;
}	Queue;

Queue	QueueCreate(int max_size);
bool	QIsEmpty(Queue *pq);
bool	QIsFull(Queue *pq);
void	queueFull(Queue *pq);

void	addQ(Queue *pq, element data);
element	deleteQ(Queue *pq);
element	QPeek(Queue *pq);

#endif
