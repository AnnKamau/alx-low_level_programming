#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: To be checked
 * Return:
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
	else
	{
	putchar('\n');
	}
}
