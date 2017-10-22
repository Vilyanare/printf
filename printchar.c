#include "holberton.h"

/**
 * printchar - Print the arguments
 * @args: Argument coming in
 * Return: Void
 */

void printchar(va_list args)
{
	_putchar(va_arg(args, int));
}
