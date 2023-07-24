#include "main.h"
/**
 * rev_string - It reverses a string
 * @s: The string to be checked
 * Return: Always 0
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0;
	char temp;

	while (i < len / 2)
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	i++;
	}
}
