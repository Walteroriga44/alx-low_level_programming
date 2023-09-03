#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;
	int j = strlen(b);
	int k = 1;

	if (b == NULL)
		return (0);

	for (i = j - 1; i >= 0; i--)

	{
		if (b[i] == '1')
	{
		a += k;
	}
		else if (b[i] != '0')
		{
			return (0);
		}

		k *= 2;
	}

	return (a);
}
