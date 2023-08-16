#include "function_pointers.h"

/**
 * print_name - Prints a name using a pointer function
 * @name: pointer to a character array
 * @f: pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(*name);
	}
}
