#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");
	hash_table_set(ht, "hetairas", "1111");
	hash_table_set(ht, "mentioner", "2222");

	value = hash_table_get(ht, "python");
	printf("%s:%s\t\tindex: %lu\n", "python", value, key_index((const unsigned char *)"python", ht->size));
	value = hash_table_get(ht, "Jennie");
	printf("%s:%s\tindex: %lu\n", "Jennie", value, key_index((const unsigned char *)"Jennie", ht->size));
	value = hash_table_get(ht, "N");
	printf("%s:%s\t\tindex: %lu\n", "N", value, key_index((const unsigned char *)"N", ht->size));
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\t\tindex: %lu\n", "Asterix", value, key_index((const unsigned char *)"Asterix", ht->size));
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\t\tindex: %lu\n", "Betty", value, key_index((const unsigned char *)"Betty", ht->size));
	value = hash_table_get(ht, "98");
	printf("%s:%s\tindex: %lu\n", "98", value, key_index((const unsigned char *)"98", ht->size));
	value = hash_table_get(ht, "c");
	printf("%s:%s\t\t\tindex: %lu\n", "c", value, key_index((const unsigned char *)"c", ht->size));
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\tindex: %lu\n", "javascript", value, key_index((const unsigned char *)"javascript", ht->size));
	value = hash_table_get(ht, "hetairas");
	printf("%s:%s\tindex: %lu\n", "hetairas", value, key_index((const unsigned char *)"hetairas", ht->size));
	value = hash_table_get(ht, "mentioner");
	printf("%s:%s\tindex: %lu\n", "mentioner", value, key_index((const unsigned char *)"mentioner", ht->size));
	return (EXIT_SUCCESS);
}
