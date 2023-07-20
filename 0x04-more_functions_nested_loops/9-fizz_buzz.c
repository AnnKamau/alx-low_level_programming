#include "main.h"
#include <stdio.h>

/**
 * main - Prints fizz buzz program
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int s;

	for (s = 1; s <= 100; s++)
	{
	if ((s % 3 == 0) && (s % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (s % 3 == 0)
	{
	printf("Fizz");
	}
	else if (s % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", s);
	}
	if (s != 100)
	{
	printf(" ");
	}
	}
	printf('\n');
	return (0);
}
