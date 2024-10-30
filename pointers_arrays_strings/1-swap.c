#include "main.h"

/**
 * swap_int - function swap values of two int
 * @a: integer a pointer
 * @b: integer b pointer
 * Return: void (nothing)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
