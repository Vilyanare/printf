#include "holberton.h"
/**
 *_dtooprint - print a decimal in octal format
 *@n: decimal to print in octal
 *@p: pointer to char counter
 */
void _dtooprint(unsigned int n, int *p)
{
	if (n / 8 > 0)
		_dtooprint(n/8, p);
	_putchar(n % 8 + 48, p);
}
