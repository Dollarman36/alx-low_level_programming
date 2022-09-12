#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
* main - Begin of execution
*
* Return: 0 if success
*/
int main(void)
{
	int n, m, rightChoice, leftChoice;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			rightChoice = n * 10 + m;
			leftChoice = m * 10 + n;

			if (rightChoice < leftChoice)
			{
				putchar(n + 48);
				putchar(m + 48);

				if (n * 10 + m != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
