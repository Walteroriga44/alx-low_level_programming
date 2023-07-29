#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: ptr to the ls
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", h->str);
		}

		p++;
		h = h->next;

		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");

	return (p);
}
