#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode rot13
 * @str: pointer to string
 * Return: *str
 */

char *rot13(char *str)
{

	for (int i = 0; str[i]; i++)
	{

	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = (str[i] - 'a' + 13) % 26 + 'a';
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
	str[i] = (str[i] - 'A' + 13) % 26 + 'A';
	}
	}
	return (str);
}
