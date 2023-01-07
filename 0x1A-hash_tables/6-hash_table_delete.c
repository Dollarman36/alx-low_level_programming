#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table.
 *
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list_n = NULL, *aux = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		list_n = (ht->array)[i];
		while (list_n != NULL)
		{
			if (list_n->key != NULL)
				free(list_n->key);
			if (list_n->value != NULL)
				free(list_n->value);
			aux = list_n->next;
			free(list_n);
			list_n = aux;
		}
	}
	free(ht->array);
	free(ht);
}
