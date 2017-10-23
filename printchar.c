#include "holberton.h"

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
