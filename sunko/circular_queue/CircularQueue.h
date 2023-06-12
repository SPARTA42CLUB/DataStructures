#ifndef __C_QUEUE_H__
# define __C_QUEUE_H__

# include <stdbool.h>
# define QUE_LEN  30
typedef int Data;

typedef struct _cQueue
{
	int front;
	int rear;
	Data queArr[QUE_LEN];
}	CQueue;

typedef CQueue Queue;

void	QueueInit(Queue *pq);
bool	QIsEmpty(Queue *pq);

void	Enqueue(Queue *pq, Data data);
Data	Dequeue(Queue *pq);
Data	QPeek(Queue *pq);

#endif
