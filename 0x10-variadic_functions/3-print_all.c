#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list args;
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf(" %c ", va_arg(args, int));
				break;

			case 'i':
				printf(" %d ", va_arg(args, int));
				break;

			case 'f':
				printf(" %f ", va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf(" (nil) ");
				}
				else
				{
					printf(" %s ", s);
				}
				break;

			default:
				i++;
				continue;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
