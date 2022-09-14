#include <unistd.h>

/**
* _putchar - writes the character _putchar to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main()
{
	return (write(1, "_putchar\r\n", 11));
}
