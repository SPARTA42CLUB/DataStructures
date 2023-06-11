#include "array_stack.h"

int	binomialCoefficient(int n, int k, Stack *s)
{
	element new_data;
	element delete_data;
	new_data.f_name = "binomialCoefficient";
	new_data.k = k;
	new_data.n = n;
	push(s, new_data);
	if (k == 0 || k == n)
	{
		delete_data = pop(s);
		printf("pop :  binomialCoefficient(%d, %d)\n", delete_data.n, delete_data.k);
		return (1);
	}
	int result = binomialCoefficient(n-1, k-1, s) + binomialCoefficient(n-1, k, s);
	delete_data = pop(s);
	printf("pop :  binomialCoefficient(%d, %d)\n", delete_data.n, delete_data.k);
	return (result);
}

int	main(void)
{
	Stack s = CreateS();
	int n = 5;
    int k = 2;
    int result = binomialCoefficient(n, k, &s);
    printf("이항 계수 %dC%d는 %d입니다.\n", n, k, result);
}
