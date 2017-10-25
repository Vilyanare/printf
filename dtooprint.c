#include "holberton.h"
/**
  * dtooprint - converts a decimal number to base 8
  *@n: decimal
  *@p: pointer to char counter
  *Return: octal representation in a long long
  */
void dtooprint(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);
	
	_dtooprint(n, p);
}
