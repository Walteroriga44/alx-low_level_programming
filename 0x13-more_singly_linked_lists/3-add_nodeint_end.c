#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head pointer
 * @n: value of new code
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if  (i == NULL)
	{
		return (NULL);
	}

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;

		}
		current->next = i;
	}

	return (i);
}
