#include <stdio.h>
#include "InfixCalculator.h"

int main(int argc, char *argv[])
{
	for(int i = 1; i < argc; i++)
	{
		printf("%s = %d\n", argv[i], EvalInfixExp(argv[i]));
	}
	return (0);
}
