#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: The unsigned integer to be converted and printed.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, bits = 0;
	unsigned long int mask;

	if (n == 0)
	{
		printf("0");
		return;
	}

	bits = sizeof(n) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		if ((n & mask) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
