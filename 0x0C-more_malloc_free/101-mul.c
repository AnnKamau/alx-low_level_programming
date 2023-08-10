#include <stdlib.h>
#include "main.h"

/**
 * _print - moves string to one place to left and prints
 * @str: string to move
 * @l: size of string
 * Return: void
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non-NULL index
 * @dest: destination
 * @dest_index: highest index
 * Return: pointer to dest NULL on failure
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks arguments
 * @av: pointer to arguments
 * Return: 0 for digits, 1 for not
 */

int check_for_digits(char **av)
{
	int k, h;

	for (k = 1; k < 3; k++)
	{
		for (h = 0; av[k][h]; h++)
		{
			if (av[k][h] < '0' || av[k][h] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: string to initialize
 * @l: length of string
 * Return: void
 */

void init(char *str, int l)
{
	int d;

	for (d = 0; d < l; d++)
		str[d] = '0';
	str[d] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: the argument count
 * @argv: the argument value
 * Return: 0, exit status 98 on failure
 */

int main(int argc, char *argv[])
{
	int m0, m1, mn, ri, i;
	char *v;
	char *z;
	char w[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ri = 0; w[ri]; ri++)
			_putchar(w[ri]);
		exit(98);
	}
	for (m0 = 0; argv[1][m0]; m0++)
		;
	for (m1 = 0; argv[2][m1]; m1++)
		;
	mn = m0 + m1 + 1;
	v = malloc(mn * sizeof(char));
	if (v == NULL)
	{
		for (ri = 0; w[ri]; ri++)
			_putchar(w[ri]);
		exit(98);
	}
	init(v, mn - 1);
	for (ri = m1 - 1, i = 0; ri >= 0; ri--, i++)
	{
		z = mul(argv[2][ri], argv[1], m0 - 1, v, (mn - 2) - i);
		if (z == NULL)
		{
			for (ri = 0; w[ri]; ri++)
				_putchar(w[ri]);
			free(v);
			exit(98);
		}
	}
	_print(v, mn - 1);
	return (0);
}
