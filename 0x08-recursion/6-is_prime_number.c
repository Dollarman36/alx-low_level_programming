#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: input number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_facts(n, 2));
}

/**
 * check_facts - increasingly checks if there are divisors under num/2
 * @num: input num
 * @f: increasing factor
 *
 * Return: 1 if num is prime, 0 otherwise
 */

int check_facts(int num, int f)
{
	if (num % f == 0)
	{
		if (f == num)
			return (1);
		else
			return (0);
	}

	return (check_facts(num, f + 1));
}
