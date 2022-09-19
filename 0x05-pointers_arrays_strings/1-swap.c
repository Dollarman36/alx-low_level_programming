#include "main.h"

/**
 * swap_int - check the code
 *  @a: First variable to be swapped
 *   @b: Second variable to be swapped
 *   Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
