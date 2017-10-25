#include "holberton.h"

/**
 * printint - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void DintoB(va_list args, int *p)
{
	printbinary(va_arg(args, int), p);
}
