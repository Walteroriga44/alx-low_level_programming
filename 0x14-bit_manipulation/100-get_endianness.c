#include "main.h"
#include <stdio.h>
/**
 * get_endianness -  checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *m = (unsigned char *)&n;

	return ((m[0] == 1) ? 1 : 0);
}
