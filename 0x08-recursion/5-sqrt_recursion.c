#include "main.h"
#include <stdio.h>

/**
 * is_perfect_square - checks if number is a perfect square
 * @n: first value
 * @i: second value
 * Return: void
 */
int is_perfect_square(int n, int i)
{
	if (i == n)
	{
		return (i);
	}
	if (i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (is_perfect_square(n, i + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_perfect_square(n, 1));
}
