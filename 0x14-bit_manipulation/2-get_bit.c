#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The integer from which to extract the bit.
 * @index: The index (0-based) of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index (0 or 1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1U << index;

	a = (n & mask) != 0;

	return (a);
}
