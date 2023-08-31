#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 one or more chars.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int demo = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b == '0' || *b == '1')
		{
			demo <<= 1;
			demo += *b - '0';
		}
		else
		{
			return (0);
		}
	}
	return (demo);
}
