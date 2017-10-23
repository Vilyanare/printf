#include"holberton.h"
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
