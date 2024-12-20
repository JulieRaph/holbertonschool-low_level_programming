#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @cmp: pointer to function to be used to compare
 * @size: number of elements in a array
 * Return: return the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
