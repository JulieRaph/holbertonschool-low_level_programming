#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", n);

	if (n > 0)
	{
		printf("Positive\n");
	}
	else if (n == 0)
	{
		printf("Zero\n");
	}
	else
	{
		printf("Negative\n");
	}
	return (0);
}
