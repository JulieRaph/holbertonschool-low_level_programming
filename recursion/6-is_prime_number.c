#include "main.h"

/**
 * primenumber - calculate if n is a prime number
 * @n: number i want to check
 * @i: num by divide n to know if n is divide by other than itself
 * Return: itself to divide n with i + 1 (i is 2 at first iteration)
*/

int primenumber(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
		return (primenumber(n, i + 1));
}

/**
 * is_prime_number - goes in primenumber function if n <= to 1 or not 2
 * @n: number i want to check
 * Return: 0 if not a primenumber 1 if it is
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n == 2)
		return (1);
	else
		return (primenumber(n, 2));
}
