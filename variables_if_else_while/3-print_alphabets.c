#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 *
*/

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
