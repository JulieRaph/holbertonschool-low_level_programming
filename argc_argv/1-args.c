#include "main.h"

/**
 * main - function to print the number of arguments
 * @argc: arguments number
 * @argv: array of a arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv[1])

		printf("%d\n", argc - 1);

	else
		printf("0\n");

	return (0);
}
