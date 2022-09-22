#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string to be capitalized
 *
 * Return: pointer to string capitalized
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		look_no_sep(s, &i);
		if (is_letter(s[i]))
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		look_sep(s, &i);
	}
	return (s);
}


/**
 * look_no_sep - compares if input is not a separator listed in sep
 * @s: pointer to string
 * @i: pointer to increment
 *
 * Return: void1 if foun a no-sep, 0 if reached the string limit
 */

int look_no_sep(char *s, int *i)
{
	int j = 0;
	int k = *i;
	char sep[14] = " \t\n,;.!?\"(){}";
	char no_sep = 0;

	while (s[k] != '\0' && !no_sep)
	{
		j = 0;
		while (j < 13 && !no_sep)
		{
			if (s[k] != sep[j])
			{
				no_sep = 1;
				return (1);
			}
			j++;
		}
		k++;
	}
	*i = k;
	return (0);
}

/**
 * look_sep - compares if input is a separator listed in sep
 * @s: pointer to string
 * @i: pointer to increment
 *
 * Return: void
 */

void look_sep(char *s, int *i)
{
	int j = 0;
	int k = *i;
	char sep[14] = " \t\n,;.!?\"(){}";
	char is_sep = 0;

	while (s[k] != '\0' && !is_sep)
	{
		j = 0;
		while (j < 13)
		{
			if (s[k] == sep[j])
			{
				*i = k;
				is_sep = 1;
			}
			j++;
		}
		k++;
	}
	*i = k;
}

/**
 * is_letter - compares if input is in the range of ascii letters
 * @c: character to be compared
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
