#include "holberton.h"
/**
  * printString - helper to print string with unprintables as hex value
  *@args: string to print
  *@p: pointer to char counter
  */
void printString(va_list args, int *p)
{
	char *s = va_arg(args, char *);
	if (s == NULL)
		_puts("(null)", p);
	_printString(s, p);
}
