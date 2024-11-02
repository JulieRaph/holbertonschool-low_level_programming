#include "main.h"

/**
 * reverse_array - print an array of integer reversing
 * @a: paramter pointer of an array
 * @n: the number of elements to swap
 * Return: void (nothing)
*/

void reverse_array(int *a, int n)
{
	int tmp;
	int j;

	for (j = 0 ; j < n / 2 ; j++)
	{
		tmp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = tmp;
	}
}
