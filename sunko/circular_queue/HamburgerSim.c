#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CircularQueue.h"

#define CUS_COME_TERM 15 //고객의 주문 간격: 초단위

#define CHE_BUR		0 // 치즈버거 id
#define BUL_BUR		1 // 불고기버거 id
#define DUB_BUR		2 // 더블버거 id

#define CHE_TERM	12 //  치즈버거 제작 시간
#define BUL_TERM	15 //  불고기버거 제작 시간
#define DUB_TERM	24 //  더블버거 제작 시간

int main(void)
{
	int	makeProc = 0;
	int cheOrder = 0;
	int bulOrder = 0;
	int dubOrder = 0;
	int sec;

	Queue queue;
	QueueInit(&queue);
	srand(time(NULL));

	for (sec = 0; sec < 3600; sec++)
	{
		if (sec % CUS_COME_TERM == 0)
		{
			switch(rand() % 3)
			{
				case CHE_BUR:
					Enqueue(&queue, CHE_TERM);
					cheOrder += 1;
					break;
				case BUL_BUR:
					Enqueue(&queue, BUL_TERM);
					bulOrder += 1;
					break;
				case DUB_BUR:
					Enqueue(&queue, DUB_TERM);
					dubOrder += 1;
					break;
			}
		}

		if (makeProc <= 0 && !QIsEmpty(&queue))
			makeProc = Dequeue(&queue);
		makeProc--;
	}
	printf("Simulation Reprot! \n");
	printf(" - Chese burger: %d\n", cheOrder);
	printf(" - Bulgogi burger: %d\n", bulOrder);
	printf(" - Double burder: %d\n", dubOrder);
	printf(" - Waiting room size: %d\n", QUE_LEN);
	return (0);
}
