#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: numbers of arguments passed
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
		printf("%s\n", argv[i++]);
	return (0);
}
