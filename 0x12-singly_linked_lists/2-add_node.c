#include "lists.h"
#include <string.h>

/**
 * list_t *add_node - adds a new node at the beginning of a list_t
 * @head:
 * @str: string
 * Return: NULL or address of new string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);
		
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;

		*head = new;
	}

	return (new);
}
