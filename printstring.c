#include "holberton.h"

/**
 * printstring - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printstring(va_list args, int *p)
{
	_puts(va_arg(args, char *), p);
}
