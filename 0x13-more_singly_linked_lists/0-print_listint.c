#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: ...
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}

	return (m);
}
