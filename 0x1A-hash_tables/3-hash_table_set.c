#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to.
 * @key: is the key. @key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *list_n = NULL, *new = NULL;
	unsigned long int idx = 0;
	char *n_value = NULL, *n_key = NULL;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	list_n = (ht->array)[idx];
	if (list_n != NULL)
	{
		while (list_n != NULL)
		{
			if (strcmp(list_n->key, key) == 0)
			{
				list_n->value = realloc(list_n->value, strlen(value) + 1);
				list_n->value = memcpy(list_n->value, value, strlen(value) + 1);
				return (1);
			}
			list_n = list_n->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	n_value = strdup(value);
	n_key = strdup(key);
	if (new == NULL || n_value == NULL || n_key == NULL)
	{
		free_new(new, n_value, n_key);
		return (0);
	}
	new->value = n_value;
	new->key = n_key;
	new->next = (ht->array)[idx];
	(ht->array)[idx] = new;
	return (1);
}

/**
 * free_new - frees any address not NULL pointing from a new hash_node_t node.
 * @new: pointer to a newly created memory space for a hash node.
 * @n_value: pointer to a newly created memory space for a hash node value.
 * @n_key: pointer to a newly created memory space for a hash node key.
 */

void free_new(hash_node_t *new, char *n_value, char *n_key)
{
	if (n_value != NULL)
		free(n_value);
	if (n_key != NULL)
		free(n_key);
	if (new != NULL)
		free(new);
}
