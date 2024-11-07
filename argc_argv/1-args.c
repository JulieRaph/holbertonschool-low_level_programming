#include "main.h"

/**
 * main - function to print the number of arguments
 * @argc: arguments number
 * @argv: array of a arguments
 * Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	printf("Nombre d'arguments : %d\n", argc);

	for (i = 0 ; i < argc ; i++)
	{
		printf("Argument %d : %s\n", i, argv[i]);
	}
	return (0);
}
