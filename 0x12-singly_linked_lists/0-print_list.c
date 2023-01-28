#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		while (1)
		{
			n++;
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			if (h->next == NULL)
				break;
			h = h->next;
		}
	}
	return (n);
}
