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
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
		printf("%02x ", *((unsigned char *)main + i));

	printf("\n");

	return (0);
}
