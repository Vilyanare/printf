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
