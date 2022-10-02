#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum of coins to make change
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 *
 * Return: 0 on success, 1 if argc is different than 2
 */

int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int count = 0;
	int i;
	int res = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]);

	if (res <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (res >= change[i])
		{
			count = count + (res / change[i]);
			res = res % change[i];
		}
	}
	printf("%d\n", count);

	return (0);
}
