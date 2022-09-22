#include "main.h"

/**
 * print_number - prints an integer
 * @n: input number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int res = n;
	int fact = 1;
	int sign = 1;

	if (n < 0)
	{
		sign *= -1;
		_putchar('-');
	}

	while (res / 10)
	{
		fact *= 10;
		res /= 10;
	}
	while (fact)
	{
		res = n / fact;
		_putchar((res * sign) + '0');
		n = n - (res * fact);
		fact /= 10;
	}
}
