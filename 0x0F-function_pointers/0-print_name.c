#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified format function
 * @name: name to be printed
 * @f: a function pointer to the printing format function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
