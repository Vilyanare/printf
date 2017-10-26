#include "holberton.h"
/**
 * printstring - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */
void printstring(va_list args, int *p)
{
	_puts(va_arg(args, char *), p);
}
/**
  * printString - helper to print string with unprintables as hex value
  *@args: string to print
  *@p: pointer to char counter
  */
void printString(va_list args, int *p)
{
	char *s = va_arg(args, char *);

	_printString(s, p);
}
/**
  * _printString - Print strings with unprintables as hex
  *@s: string to print
  *@p: pointer to char counter
  */
void _printString(char *s, int *p)
{
	int x;
	unsigned int tmp = 0;

	for (x = 0; s[x]; x++)
	{
		if ((s[x] > 0 && s[x] < 32) || s[x] > 126)
		{
			_putchar(92, p);
			_putchar('x', p);
			tmp = s[x];
			if (tmp / 16 == 0)
				_putchar('0', p);
			_dtoxcode(tmp, p);
		}
		else
			_putchar(s[x], p);
	}
}
