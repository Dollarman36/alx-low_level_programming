#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination of copy
 * @src: pointer to source of copy
 * @n: number of bytes of src to be copied onto dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n; i++)
	{
		dest[i] = src[i];
		--n;
	}

	return (dest);
}
