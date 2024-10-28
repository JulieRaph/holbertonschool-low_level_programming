#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
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
	putchar('\n');
	return (0);
}


/*
 * NUMERO GAGNANT 
 *
int main(void)
{
	int	num;

	num = 0;
	while (num <= 10)
	{
		printf("Le numero gagnant est : %i \n", num);
		num++;
	}
	return (0);
}*/
