#include "holberton.h"

/**
 * printunsign - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printunsign(va_list args, int *p)
{
	unsigned int np = va_arg(args, unsigned int);

	print_unumber(np, p);
}
