#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory area to be filled
 * @src: char to copy
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
