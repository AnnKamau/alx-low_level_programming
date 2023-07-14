#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return - Always 0 (Success)
 */
int main(void)
{
	int g, o;

	for (g = '0'; g < '9'; g++)
	{
	for (o = g + 1; o <= '9'; o++)
	{
	if (o != g)
	{
	putchar(g);
	putchar(o);
	if (g == '8' && o == '9')
	continue;
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
