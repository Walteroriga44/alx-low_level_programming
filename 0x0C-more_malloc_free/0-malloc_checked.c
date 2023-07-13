#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: The desired size of memory to allocate.
 *
 * Returns: Nothing!
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);

	}

	return (p);
}
