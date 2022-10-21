#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list (see lists.h).
 * @h: linked list to be printed.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		i++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	i++;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (i);
	}
	printf("[%d] %s\n", h->len, h->str);


	return (i);
}
