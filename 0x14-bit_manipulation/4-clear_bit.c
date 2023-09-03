#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index (0-based) of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	mask = 1UL << index;

	mask = ~mask;

	*n &= mask;

	return (1);
}
