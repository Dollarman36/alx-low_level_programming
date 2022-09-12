#include <stdio.h>


/**
* main - Begin of execution
*
* Return: 0 if success
*/
int main(void)
{
	int hundred, tens, unity, number;

	for (number = 0; number <= 999; number++)
	{
		hundred = number / 100;
		tens = number / 10 % 10;
		unity = number % 10;

		if (hundred < tens)
		{
			if (hundred < unity)
			{
				putchar(hundred + 48);
				putchar(tens + 48);
				putchar(unity + 48);

				if (hundred * 100 + tens * 10 + unity != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

putchar('\n');

return (0);
}
