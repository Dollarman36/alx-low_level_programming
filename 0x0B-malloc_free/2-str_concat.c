#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space in memory
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated after s1
 *
 * Return: A pointer to the newly allocated memory, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *ptr = NULL;
	char *as1 = s1;
	char *as2 = s2;

	if (as1 == NULL)
		as1 = "";

	if (as2 == NULL)
		as2 = "";

	ptr = as1;
	while (*ptr++)
		i++;

	ptr = as2;
	while (*ptr++)
		i++;

	i++;
	ptr = malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (*as1)
	{
		ptr[i++] = *as1++;
	}

	while (*as2)
	{
		ptr[i++] = *as2++;
	}
	ptr[i] = *as2;

	return (ptr);
}
