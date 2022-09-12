#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Begin of execution
*
* Return: 0 if success
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	printf("\n");
	return (0);
}
