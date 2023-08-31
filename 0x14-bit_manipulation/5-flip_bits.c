#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: the value
 * @m: the flipped number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sub = n ^ m;
	unsigned int clouds = 0;

	while (sub > 0)
	{
		clouds += sub & 1;
		sub >>= 1;
	}
	return (clouds);
}
