#include <stdio.h>

/**
* main - Begin of execution
*
* Return: 0 if success
*/
int main(void)
{
	int f_tens, f_unity, s_tens, s_unity, firstNumber, secondNumber;

	for (firstNumber = 0; firstNumber <= 99; firstNumber++)
	{
		f_tens = firstNumber / 10;
		f_unity = firstNumber % 10;

		for (secondNumber = 0; secondNumber <= 99; secondNumber++)
		{

			s_tens = secondNumber / 10;
			s_unity = secondNumber % 10;

			if (firstNumber != secondNumber)
			{
				if (firstNumber < secondNumber)
				{
					putchar(f_tens + 48);
					putchar(f_unity + 48);
					putchar(' ');
					putchar(s_tens + 48);
					putchar(s_unity + 48);

					if (firstNumber < 98 || secondNumber < 99)
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
