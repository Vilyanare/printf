#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @p: pointer to a char counter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, int *p)
{
	(*p)++;
	return (write(1, &c, 1));
}

/**
 *_puts - print a string followed by new line
 *@str: string to be printed
 *@p: pointer for a character counter
 *Return: if % encountered return address of %
 */
void _puts(char *str, int *p)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		_putchar(str[x], p);
	}
}
/**
 * printchar - Print the arguments
 * @args: Argument coming in
 * @p: pointer for a char counter
 * Return: Void
 */

void printchar(va_list args, int *p)
{
	_putchar(va_arg(args, int), p);
}
