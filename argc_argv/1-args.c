#include "main.h"

/**
 * main - function to print the number of arguments
 * @argc: arguments number
 * @argv: array of a arguments
 * Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("Nombre d'arguments : %d\n", argc);

	return (0);
}
