#ifndef __QUEUE_H__
# define __QUEUE_H__

typedef struct {
	int key;
}	element;

typedef struct _Queue
{
	int		front;
	int		rear;
	element	*queArr;
}	Queue;

void	QueueCreate(Queue *pq);
int		QIsEmpty(Queue *pq);
int		QIsFull(Queue *pq);

void	addQ(Queue *pq, element data);
element	deleteQ(Queue *pq);
element	QPeek(Queue *pq);

#endif
