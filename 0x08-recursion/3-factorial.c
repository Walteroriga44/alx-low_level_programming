#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number.
 * @n: factorial funtion
 *
 * Return: -1 to indicate an error,if n is 0, it returns 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
