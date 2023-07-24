#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: The string to be checked
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
	len--;
	_putchar(s[len]);
	}
	_putchar('\n');
}
