#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: string with set of bytes to search on string s
 *
 * Return: pointer to byte in s matching any accpet byte, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			++j;

		}
	}
	return (0);
}
