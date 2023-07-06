#include "main.h"
#include <stdio.h>
/**
 * check_prime - Recursive helper function to check if a number is prime
 * @n: The number to check for primality
 * @i: The divisor to check divisibility by n
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int check_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 2));
}

int check_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (check_prime(n, i + 1));
}
