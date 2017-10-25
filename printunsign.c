#include "holberton.h"

/**
 * printunsign - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printunsign(va_list args, int *p)
{
	print_unumber(va_arg(args, unsigned int), p);
}
