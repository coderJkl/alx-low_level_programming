#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a list_t node at the end of a list_t list
 * @head: original linked list
 * @str: the stirng to add to the node
 * Return: pointer to new string or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	
	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (0);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		return (temp);
	}
	}
	
	return (0);
}
