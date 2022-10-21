#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first element en the singly linked list_t list.
 * 
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;

	node = head;

	while (head->next != NULL)
	{
		node->next = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = node->next;

	}

	free(head->str)
		free(head);

}
