#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *  @s: pointer to pointer to string be changed
 *  @to: pointer to string to be taken in the change
 *
 *  Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
