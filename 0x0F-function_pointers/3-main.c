#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the results of simple operations
 * @argc: number of arguments supplied to the program
 * @argv: array of strings containing the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(operator)(num1, num2);

	if (result == -1)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);

	return (0);
}
