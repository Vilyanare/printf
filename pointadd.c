#include "holberton.h"

/**
 * printaddress - Print the address of pointer
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printaddress(unsigned long int addr, int *p)
{
	_putchar('0', p);
	_putchar('x', p);
	_dtoxlong(addr, p);
}
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
