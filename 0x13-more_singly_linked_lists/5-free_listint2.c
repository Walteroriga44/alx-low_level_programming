#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: Pointer to the pointer to the head of the linked list.
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
