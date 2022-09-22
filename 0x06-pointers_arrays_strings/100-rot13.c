#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string to be decodes
 *
 * Return: pointer to string decoded
 */

char *rot13(char *s)
{
	int i;
	int j;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rota[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (s[i] == lett[j])
			{
				s[i] = rota[j];
				break;
			}
		}
	}
	return (s);
}
