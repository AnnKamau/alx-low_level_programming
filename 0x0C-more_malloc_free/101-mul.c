#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if string is a number
 * @s: the string to check
 * Return: 1 if is a number, 0 otherwise
 */

int is_number(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (!isdigit(s[j]))
			return (0);
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (success), 98 (error)
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
