#include "holberton.h"

/**
 * printchar - Print the arguments
 * @args: Argument coming in
 * @p: pointer for a char counter
 * Return: Void
 */

void printchar(va_list args, int *p)
{
	int pn = va_arg(args, int);
        if (pn == 0)
	{
                _puts("(null)", p);
		return;
	}
	_putchar(pn, p);
}
