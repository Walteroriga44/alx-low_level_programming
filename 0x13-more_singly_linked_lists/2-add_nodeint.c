#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head ptr
 * @n: value of the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j = malloc(sizeof(listint_t));

	if (j == NULL)
	{
		return (NULL);
	}

	j->n = n;
	j->next = *head;

	*head = j;

	return (j);
}
