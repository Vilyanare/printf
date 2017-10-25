#include "holberton.h"

/**
 * printint - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printint(va_list args, int *p)
{
	print_number(va_arg(args, int), p);
}
