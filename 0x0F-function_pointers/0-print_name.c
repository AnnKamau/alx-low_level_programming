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
		f(name);
	}
}

int main(void)
{
	void (*print_as_is)(char *);
	void (*print_uppercase)(char *);

	print_as_is = print_name_as_is;
	print_uppercase = print_name_uppercase;

	print_name("Bob", print_as_is);
	print_name("Bob Dylan", print_uppercase);

	return (0);
}
