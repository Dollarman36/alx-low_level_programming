#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: the value associated with the element,
 *         or NULL if key couldnt be found.
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx = 0;
	hash_node_t *list_n = NULL;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	list_n = (ht->array)[idx];
	if (list_n != NULL)
	{
		while (list_n != NULL)
		{
			if (strcmp(list_n->key, key) == 0)
				return (list_n->value);
			list_n = list_n->next;
		}
	}
	return (NULL);
}
