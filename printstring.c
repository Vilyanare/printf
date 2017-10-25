#include "holberton.h"

/**
 * printstring - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printstring(va_list args, int *p)
{
	char *pn = va_arg(args, char *);
	if (pn == NULL)
	{
		_puts("(null)", p);
		return;
	}
	_puts(pn, p);
}
