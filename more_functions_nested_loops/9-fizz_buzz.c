#include "main.h"

/**
 * main - fonction principale
 * i : parametre int
 * Return: always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 1 ; i <= 100 ; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
