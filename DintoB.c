#include "holberton.h"

/**
 * printint - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void DintoB(va_list args, int *p)
{
	unsigned int pn = va_arg(args, void*);

	printbinary(pn, p);
}
