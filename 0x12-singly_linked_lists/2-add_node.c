#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == str)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
