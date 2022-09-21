#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	--n;
	while (i < n)
	{
		a[i] ^= a[n];
		a[n] ^= a[i];
		a[i] ^= a[n];
		i++;
		n--;
	}
}
