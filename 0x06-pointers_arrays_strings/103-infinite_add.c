#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r:  buffer that the function will use to store the result
 * @size_r: The buffer size
 * Return: if not r, return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	r[0] = '\0';

	int i = 0;
	int j = 0;
	int carry = 0;

	while (i < strlen(n1) || j < strlen(n2))
	{

	int digit1 = (i < strlen(n1)) ? n1[i] - '0' : 0;
	int digit2 = (j < strlen(n2)) ? n2[j] - '0' : 0;
	int sum = digit1 + digit2 + carry;

	if (sum > 9)
	{
	carry = 1;
	sum -= 10;
	}
	else
	{
	carry = 0;
	}

	r[strlen(r)] = sum + '0';
	i++;
	j++;
	}
	if (carry)
	{
	r[strlen(r)] = '1';
	}

	return (r);
}
