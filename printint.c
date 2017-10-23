#include "holberton.h"

/**
 * printchar - Print the arguments
 * @args: Argument coming in
 * Return: Void
 */

void printint(va_list args)
{
	print_number(va_arg(args, int));
}
