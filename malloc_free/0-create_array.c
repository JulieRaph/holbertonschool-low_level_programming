#include "main.h"

/**
 * *create_array - function to create and initialize an array
 * @size: parameter pointer of the size (null if size 0)
 * @c: char to initialize the array
 * Return: null if size 0 or fail or pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(*array));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}

	return (array);
}
