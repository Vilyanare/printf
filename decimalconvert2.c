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
/**
  *dtoXprint - helper function to print hex numbers
  *@args: number to print
  *@p: pointer to char counter
  */
void dtoXprint(va_list args, int *p) 
{
        unsigned int n = va_arg(args, unsigned int);

        _dtoxcode(n, p); 
}
/**
  * _dtoxlong - prints a hex conversion of a decimal
  *@n: decimal number
  *@p: pointer to a char counter
  */
void _dtoxlong(long unsigned int n, int *p)
{
	if (n / 16 > 0)
		_dtoxlong(n / 16, p);
	if (n % 16 > 9)
		_putchar(n % 16 + 87, p);
	else
		_putchar(n % 16 + 48, p);
}
