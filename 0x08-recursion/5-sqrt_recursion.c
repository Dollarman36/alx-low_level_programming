#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number to get its square root
 *
 * Return: int value of the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_fact(n, 1));
}

/**
 * _fact - gets the factor by which result equals the factor
 * @num: number to be sequentialy divided
 * @fact: factor to be evaluated and increased if needed
 *
 * Return: square root of num, or -1 if not found
 */

int _fact(int num, int fact)
{
	int r = 0;

	if ((num / fact == fact) && (num % fact == 0))
		return (1);

	if (num / fact == 0)
		return (-1);

	r = _fact(num, fact + 1);

	if (r < 0)
		return (-1);

	return (1 + r);
}
