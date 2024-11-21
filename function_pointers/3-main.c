#include "3-calc.h"

/**
 * main - fonction principale lien avec file pour calculatrice
 * @argc: arguments
 * @argv: nombres d'arguments
 * Return: sum et 0 pour succes
*/

int main(int argc, char *argv[])
{
	int a, b, sum;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sum = op(a, b);

	if (b == 0 && (argv[2][0] == 37 || argv[2][0] == 47))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", sum);

	return (0);
}
