#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int m;
	int o;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	o = 0;
	while (src[o] != '\0' && n > 0)
	{
		dest[m] = src[o];
		m++;
		o++;
		n--;
	}
	dest[m] = '\0';

	return (dest);
}
