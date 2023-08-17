#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = ", ";
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		switch (current_format)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;

			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
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
