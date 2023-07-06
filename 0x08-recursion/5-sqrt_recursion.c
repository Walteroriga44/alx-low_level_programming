#include "main.h"
#include <stdio.h>
/**
 * calculate_sqrt - Recursive helper function to calculate the square root
 * @n: The number for which the square root is to be calculated
 * @start: The starting point for the search range
 * @end: The ending point for the search range
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int calculate_sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: The number for which the square root is to be calculated
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (calculate_sqrt(n, 1, n));
}

/**
 * calculate_sqrt - Recursive helper function to calculate the square root
 * @n: The number for which the square root is to be calculated
 * @start: The starting point for the search range
 * @end: The ending point for the search range
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int calculate_sqrt(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	int mid = (start + end) / 2;

	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if (mid > n / mid)
	{
		return (calculate_sqrt(n, start, mid - 1));
	}
	else
	{
		return (calculate_sqrt(n, mid + 1, end));
	}
}
