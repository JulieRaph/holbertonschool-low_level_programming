#include <stdio.h>

/**
 * main - entry
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
