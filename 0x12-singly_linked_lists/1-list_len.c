#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list to get size.
 *
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	i++;

	return (i);
}
