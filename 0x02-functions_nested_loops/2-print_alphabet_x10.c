#include "main.h"
/**
 * print_alphabet_x10 -print 10 times the alphabet
 *
 * return Always success
 */
void print_alphabet_x10(void)
{

	int n, co;

	while (co ==10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);

		}

		co++;

		_putchar('\n');
	}
}
