#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
