#include "holberton.h"

/**
 * printstring - Print the arguments
 * @args: Argument coming in
 * Return: Void
 */

void printstring(va_list args)
{
	_puts(va_arg(args, char *));
}
