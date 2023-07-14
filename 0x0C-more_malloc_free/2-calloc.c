#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element in bytes.
 *
 * Return: ..
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	ptr = malloc(i);

	if (ptr == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = 0;
		j++;

	}

	return (ptr);
}
