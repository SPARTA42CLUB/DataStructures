#ifndef __LB_BASE_QUEUE_H__
# define __LB_BASE_QUEUE_H__

# include <stdbool.h>

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node *next;
}	t_node;

typedef struct _lQueue
{
	t_node	*front;
	t_node	*rear;
}	LQueue;

typedef LQueue Queue;

void	QueueInit(Queue *pq);
bool	QIsEmpty(Queue *pq);
void	Enqueue(Queue *pq, Data data);
Data	Dequeue(Queue *pq);
Data	QPeek(Queue *pq);

#endif
