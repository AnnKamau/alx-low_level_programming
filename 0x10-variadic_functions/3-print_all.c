#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";
	char *str;
	char c;
	int n;
	double f;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	c = va_arg(args, int);

	printf("%s%c", sep, c);
	break;

	case 'i':
	n = va_arg(args, int);

	printf("%s%d", sep, n);
	break;

	case 'f':
	f = va_arg(args, double);

	printf("%s%f", sep, f);
	break;

	case 's':
	str = va_arg(args, char *);

	if (str == NULL)
	str = "(nil)";

	printf("%s%s", sep, str);
	break;

	default:
		i++;
	continue;
	}
	sep = ", ";

	i++;
	}
	printf("\n");

	va_end(args);
}
