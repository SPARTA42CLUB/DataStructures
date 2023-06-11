#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "list_base_stack.h"

int	EvalRPNExp(char exp[])
{
	Stack	stack;
	int	expLen = strlen(exp);
	int	i;
	char	tok;
	char	op1;
	char	op2;

	StackInit(&stack);
	for (i = 0; i < expLen; i++)
	{
		tok = exp[i];
		if (isdigit(tok))
			SPush(&stack, tok - '0');
		else
		{
			op2 = SPop(&stack);
			op1 = SPop(&stack);
			switch(tok)
			{
				case '+':
					SPush(&stack, op1 + op2);
					break;
				case '-':
					SPush(&stack, op1 - op2);
					break;
				case '*':
					SPush(&stack, op1 * op2);
					break;
				case '/':
					SPush(&stack, op1 / op2);
					break;
			}
		}
	}
	return (SPop(&stack));
}
