#include "array_stack.h"

Stack	CreateS(void)
{
	Stack	s;
	s.top = -1;

	return (s);
}

void	push(Stack *s, element item)
{
	if (IsFull(s))
		stackFull();
	s->stack[++(s->top)] = item;
	printf("\n");
	printf("새롭게 push된 함수 : binomialCoefficient(%d, %d)\n", item.n, item.k);
	for (int i = 0; i <= s->top; i++) {
		printf("현재 %d번 스택 : binomialCoefficient(%d, %d)\n", i, s->stack[i].n, s->stack[i].k);
	}
	printf("\n");
}

element	pop(Stack *s)
{
	if (s->top == -1)
		stackEmpty();
	return (s->stack[(s->top)--]);
}


bool	IsEmpty(Stack *s)
{
	if (s->top == -1)
		return (true);
	else
		return (false);
}

bool	IsFull(Stack *s)
{
	if (s->top >= MAX_STACK_SIZE)
		return (true);
	else
		return (false);
}

void	stackFull(void)
{
	fprintf(stderr, "Stack is full, cannot add element");
	exit(EXIT_FAILURE);
}

void	stackEmpty(void)
{
	fprintf(stderr, "Stack is empty, cannot pop element");
	exit(EXIT_FAILURE);
}
