#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main(void)
{
	Queue q = QueueCreate(100);

	element	new_element;
	for (int i = 1; i < 6; i++)
	{
		new_element.key = i;
		addQ(&q, new_element);
	}
	while (!QIsEmpty(&q))
		printf("%d ", deleteQ(&q).key);
	return (0);
}
