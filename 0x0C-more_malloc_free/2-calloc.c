#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: number of bytes per element
 *
 * Return: a void pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	setm_zero((char *)ptr, size * nmemb);

	return (ptr);
}


/**
 * setm_zero - set memory on zero
 * @ptr: pointer to byte block
 * @size: number of bytes to assign a zero
 *
 * Return: void
 */

void setm_zero(char *ptr, int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		ptr[i] = '\0';
	}
}
