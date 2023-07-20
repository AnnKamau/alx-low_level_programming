#include "main.h"
/**
 * print_numbers - function that prints the numbers from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	if (num <= 9)
	{
	_putchar(num + '0');
	print_number(num + 1);
	}
}
