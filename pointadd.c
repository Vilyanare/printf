#include "holberton.h"

/**
 * pointadd - Point to address of pointers
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void pointadd(va_list args, int *p)
{
	unsigned long int n = va_arg(args, void*);
	
	printaddress(n, p);
}
