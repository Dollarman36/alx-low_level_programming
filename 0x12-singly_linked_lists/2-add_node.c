#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beggining of a list_t list.
 * @head: pointer to first node in the list.
 *  @str: string to be add to the new node.
 *
 *  Return: addres of the new element, NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		len = 0;
		new->str = NULL;
	}
	else
	{
		while (str[len] != '\0')
			len++;
		new->str = strdup(str);
	}

	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
