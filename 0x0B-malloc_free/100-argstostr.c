#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the first argument
 * @av: the second argument
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char **str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

