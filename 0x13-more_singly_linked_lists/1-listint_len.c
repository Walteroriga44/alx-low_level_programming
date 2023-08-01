#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: ..
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		p++;
		h = h->next;
	}

	return (p);
}
