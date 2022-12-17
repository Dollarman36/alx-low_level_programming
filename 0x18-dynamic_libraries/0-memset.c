#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string to be filled
 * @b: byte to be filled in s
 * @n: number of bytes in s to be filled with b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n; i++)
	{
		*(s + i) = b;
		n--;
	}

	return (s);
}
