#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and prints the result
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int num = 0;
	char *ptr = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	++argv;
	--argc;
	while (argc--)
	{
		num = (int)strtol(*argv, &ptr, 10);
		res = res + num;

		if (*ptr != 0 || num < 0 || res < 0)
		{
			printf("Error\n");
			return (1);
		}
		++argv;
	}
	printf("%d\n", res);

	return (0);
}
