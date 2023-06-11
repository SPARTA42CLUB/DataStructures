#include <stdio.h>
#include <stdlib.h>
#include "InfixToPostfix.h"

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		fprintf(stderr, "usage: ./calculator \"operation\"");
		exit(EXIT_FAILURE);
	}
	for (int i = 1; i < argc; i++)
	{
		char *exp = argv[i];
		ConvToRPNExp(exp);
		printf("%s \n", exp);
	}
	return (0);
}
