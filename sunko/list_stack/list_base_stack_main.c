#include <stdio.h>
#include "list_base_stack.h"

int main(void)
{
	Stack stack;
	int		i = 0;
	StackInit(&stack);

	SPush(&stack, 1);
	printf("push된 데이터 :%d\n", stack.head->data);
	SPush(&stack, 2);
	printf("push된 데이터 :%d\n", stack.head->data);
	SPush(&stack, 3);
	printf("push된 데이터 :%d\n", stack.head->data);
	SPush(&stack, 4);
	printf("push된 데이터 :%d\n", stack.head->data);
	SPush(&stack, 5);

	printf("\n");
	while (!SIsEmpty(&stack))
		printf("pop된 데이터 : %d\n", SPop(&stack));
	return (0);
}
