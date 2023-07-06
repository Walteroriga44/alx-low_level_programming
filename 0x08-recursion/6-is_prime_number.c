#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return check_prime(n, 2);
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
