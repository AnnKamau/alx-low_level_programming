#include "main.h"
/**
 * is_divisible - returns if input integer is a prime number
 * @n: the integer
 * @i: value
 * Return: 1 if integer is prime number otherwise 0
 */

int is_divisible(int n, int i)
{
	if (i == n)
	{
		return (0);
	}
	if (i < 2)
	{
		return (-1);
	}
	if (n % i == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, i - 1));
	}
}

/**
 * is_prime_number - return a prime number
 * @n: The integer
 * Return: 1 if integer is prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}
