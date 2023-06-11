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
}



