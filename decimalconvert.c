#include "holberton.h"
/**
  *dtoxprint - helper function to print hex numbers
  *@args: number to print
  *@p: pointer to char counter
  */
void dtoxprint(va_list args, int *p)
{
        unsigned int n = va_arg(args, unsigned int);
        _dtoxprint(n, p);
}

/**
  * _dtoxprint - prints a hex conversion of a decimal
  *@n: decimal number
  *@p: pointer to a char counter
  */
void _dtoxprint(unsigned int n, int *p)
{
        if (n / 16 > 0)
                _dtoxprint(n / 16, p);
        if (n % 16 > 9)
                _putchar(n % 16 + 87, p);
        else
                _putchar(n % 16 + 48, p);
}
/**
  * _dtoxcode - prints a hex conversion of a decimal
  *@n: decimal number
  *@p: pointer to a char counter
  */
void _dtoxcode(unsigned int n, int *p)
{
        if (n / 16 > 0)
                _dtoxcode(n / 16, p);
        if (n % 16 > 9)
                _putchar(n % 16 + 55, p);
        else
                _putchar(n % 16 + 48, p);
}

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
