#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array of characters
 * @size: size of the array
 * @action: action taken on the array
 * @int: the value
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    for (size_t i = 0; i < size; i++)
        action(array[i]);
}

void print_elem(int elem)
{
    printf("%d\n", elem);
}

void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}
