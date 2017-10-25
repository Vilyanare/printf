#include "holberton.h"

/**
 * pointadd - Point to address of pointers
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void pointadd(va_list args, int *p)
{
	printaddress(va_arg(args, unsigned long int), p);
}
