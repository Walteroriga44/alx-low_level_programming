#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string reversed
 * Return; void
 */
void rev_string(char *s)
{
	int c = strlen(s);
	int b = 0;
	int d = c - 1;

	while (b < d)
	{
		char temp = s[b];

		s[b] = s[d];
		s[d] = temp;

		b++;
		d--;
	}
}
