#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on element of array
 * @array: array pointed
 * @size: size of a array
 * @action: parameter of array
 * Return: void (nothing)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0 ; x < size ; x++)
			action(array[x]);
	}
}
