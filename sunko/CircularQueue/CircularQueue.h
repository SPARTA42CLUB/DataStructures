#ifndef C_QUEUE_H
# define C_QUEUE_H

# define TRUE	1
# define FALSE	0

# define QUE_LEN	100
typedef int	Data;

typedef struct _cQueue
{
	int		front;
	int		rear;
	Data	queArr[QUE_LEN];
}	CQueue;

typedef CQueue	Queue;

void	QueueInit(Queue *pd);
int		QIsEmpty(Queue *pq);

void	Enqueue(Queue *pq, Data data);
Data	Dequeue(Queue *pq);
Data	QPeek(Queue *pq);

#endif
