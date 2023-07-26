#include "main.h"
/**
 * leet - encode into 1137
 * @n: input value
 * Return: the value of n
 */

char *leet(char *n)
{
	int i;
	int j;
	int k;
	char l[] = "oOlLeEaAtT"
	char e[] = "0011334477"

	i = 0;
	while (n[i] != '\0')
	{
	j = 0;
	k = 0;
	while (l[j] != '\0')
	{
	if (n[i] == l[j])
	{
	k = j;
	n[i] = e[k];
	}
	j++;
	}
	i++;
	}
	return (n);
}
