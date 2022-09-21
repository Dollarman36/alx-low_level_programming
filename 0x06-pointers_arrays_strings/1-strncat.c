#include "main.h"

/**
 * _strncat - concatenates two strings  up to n bytes from source
 * @dest: pointer to the destination to be concatenated
 * @src: point to source to be added to destination
 * @n: number of bytes from source to be concatenated
 *
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{

		int i = 0;
		int j = 0;

		while (dest[i] != '\0')
			i++;

		while (j < n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		return (dest)
}
