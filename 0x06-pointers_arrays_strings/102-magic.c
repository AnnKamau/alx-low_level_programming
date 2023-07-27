#include <stdio.h>
/**
 * main - program prints a[2] = 98, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int a[3] = {1, 2, 3};
	int *p = a;

	p[2] = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
