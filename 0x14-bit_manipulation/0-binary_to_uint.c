#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int demo = 0;
	int h = 0;

	if (b == NULL)
		return (0);

	while (b[h] == '0' || b[h] == '1')
	{
		demo <<= 1;
		demo += b[h] - '0';
		h++;
	}

	if (b[h] != '\0')
		return (0);

	return (demo);
}
