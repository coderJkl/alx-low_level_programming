#include "lists.h"

/*
 * list_len - gets the number of elements on a linked list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		while (1)
		{
			n++;
			if (h->next == NULL)
				break;
			h = h->next;
		}
	}
	return (n);
}
