#include "stack.h"

Stack	CreateS(void)
{
	Stack	s;
	s.top = -1;
	s.capacity = 1;
	return (s);
}

void	push(Stack *s, element item)
{
	if (isFull(s))
		stackFull(s);
	s->stack[++(s->top)] = item;
	printf("호출한 함수 : binomialCoefficient(%d, %d)\n", item.n, item.k);
	for (int i = 0; i <= s->top; i++) {
		printf("binomialCoefficient(%d, %d)\n", s->stack[i].n, s->stack[i].k);
	}
	printf("\n");
}

element	pop(Stack *s)
{
	if (isEmpty(s))
		stackEmpty();
	return (s->stack[(s->top)--]);
}

void	stackEmpty(void)
{
	fprintf(stderr, "Stack is empty, can't add element");
	exit(EXIT_FAILURE);
}

bool	isEmpty(Stack *s)
{
	if (s->top < 0)
		return (true);
	else
		return (false);
}

bool	isFull(Stack *s)
{
	if (s->top >= s->capacity - 1)
		return (true);
	else
		return (false);
}

void	stackFull(Stack *s)
{
	s->stack = realloc(s->stack, 2 * s->capacity * sizeof(Stack));
	if (!(s->stack))
	{
		fprintf(stderr, "heap memory is full, can't allocate memory");
		exit(EXIT_FAILURE);
	}
	s->capacity *= 2;
}
