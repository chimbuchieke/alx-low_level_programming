#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * it with a specific char
 * @c: char to initialize
 * @size: number of bytes allocated
 * Return: a pointer to the array or 0 if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (0);
	while (size--)
		array[size] = c;
	return (array);
}
