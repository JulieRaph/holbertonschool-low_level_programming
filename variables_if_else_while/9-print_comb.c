#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 * Numbers must be separated by commas and a space
 * Only use putchar up to four times
 * Return: always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x < '9')
		{
			putchar(',');

			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
