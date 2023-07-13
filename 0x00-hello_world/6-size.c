#include <stdio.h>
/**
 * main - A program that prints the sizes of various types
 * Return: 0 (Successful)
 */
int main(void)
{
	char z;
	int q;
	long int c;
	long long int e;
	float g;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
