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
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	printf("\n");

	return (0);
}
