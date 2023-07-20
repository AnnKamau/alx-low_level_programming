#include "main.h"
/**
 * more_numbers - prints 10 times form 0 up to 14
 * Return: 10 times of the numbers from 0 up to 14
 */

void more_numbers(void)
{
	int x, y, k;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	k = y / 10;
	_putchar(k  + '0');
	}
	k = y % 10;
	_putchar(k + '0');
	}
	_putchar('\n');
	}
}
