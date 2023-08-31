#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the number being presented.
 */

void print_binary(unsigned long int n)
{
	unsigned long int late;
	int y, limit = 0;

	for (y = 63; y >= 0; y--)
	{
		late = n >> y;

		if (late & 1)
		{
			_putchar('1');
			limit++;
		}
		else if (limit)
			_putchar ('0');
	}
	if (!limit)
		_putchar('0');
}
