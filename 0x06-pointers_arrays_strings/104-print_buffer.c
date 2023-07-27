#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_buffer - prints a buffer
 * @b: The buffer pointed by b
 * @size: print the content of size bytes
 * Return: If size is 0 or less, the output should be a new line only \n
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
	return;
	}

	printf("%08x: ", (int)b);

	for (int i = 0; i < size; i += 2)
	{
	printf("%02x ", b[i])
	}

	for (int i = 0; i < size; i++)
	{
	if (isprint(b[i]))
	{
	printf("%c", b[i]);
	}
	else
	{
	printf(".");
	}
	}
	printf("\n");
}
