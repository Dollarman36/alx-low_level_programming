#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string from which n bytes are going to be concatenated
 * @n: first n bytes of s2 to be concatenated.
 *
 * Return: pointer to the newly allocated space in memory, NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	char *as1 = "";
	char *as2 = "";
	unsigned int count = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 != NULL)
		as1 = s1;
	if (s2 != NULL)
		as2 = s2;

	while (as1[i++] != '\0')
		count = count + 1;

	i = 0;
	while (as2[i] != '\0' && i < n)
	{
		count = count + 1;
		i++;
	}

	ptr = malloc(sizeof(char) * (count + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (as1[i] != '\0')
		ptr[j++] = as1[i++];

	i = 0;
	while (as2[i] != '\0' && j < count)
		ptr[j++] = as2[i++];
	ptr[j] = '\0';
	return (ptr);
}
