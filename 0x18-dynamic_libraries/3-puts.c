#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The string to be checked
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
