#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the number being presented.
 */

void print_binary(unsigned long int n)
{
	unsigned long int late = 1;
	int y = 0;

	while (late <= n)
		late <<= 1;

	late >>= 1;

	while (late > 0)
	{
		if (n & late)
			_putchar('1');
		else
			_putchar ('0');
		late >>= 1;
		y++;
	}

	if (y == 0)
		_putchar('0');
}
