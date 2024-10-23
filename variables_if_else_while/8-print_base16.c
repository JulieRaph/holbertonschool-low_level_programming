#include <stdio.h>

/**
 * main - Print numbers of base 16 in lowercase
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
		if (num <= 9)
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
	putchar('\n');
	return (0);
}
