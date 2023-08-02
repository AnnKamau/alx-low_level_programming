#include "main.h"
#include <stdio.h>
/**
 * compare_chars - compares the first and last characters
 * @s: string
 * @i: an integer
 * @j: second integer
 * Return: void
 */

int compare_chars(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (compare_chars(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (compare_chars(s, 0, _strlen_recursion(s) - 1));
}
