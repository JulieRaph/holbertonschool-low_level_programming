#include "main.h"

/**
 * *array_range - create an array with value min and max
 * @min: value minimum included ordered from min
 * @max: value maximum included ordered from max
 * Return: ptr new space
*/

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
