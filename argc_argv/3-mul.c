#include "main.h"

/**
 * main - function to multiple two numbers
 * @argc: number arguments char or int
 * @argv: pointer array character*
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
