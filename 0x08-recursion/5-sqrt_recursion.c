#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 *  @n: number to calculate
 *  @i: iterate number
 *  Return: The natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
