#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *                    print the key/value in the order that they
 *                    appear in the array of hash table
 * @ht: is the hash table
 *
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list_n = NULL;
	unsigned long int i = 0;
	int f = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		list_n = (ht->array)[i];
		while (list_n != NULL)
		{
			if (f == 0)
			{
				printf("\'%s\': \'%s\'", list_n->key, list_n->value);
				f = 1;
			}
			else
			{
				printf(", \'%s\': \'%s\'", list_n->key, list_n->value);
			}
			list_n = list_n->next;
		}
	}
	printf("}\n");
}
