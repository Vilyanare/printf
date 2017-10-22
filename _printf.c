#include "holberton.h"
/**
 *_printf - print strings based on format specifiers
 *@format: string to print plus formats
 *Return: 0 for success
 *
 *Description: Prints strings without format specifiers.
 *subtitutes format specifiers with provided arguments
 *
 */
int _printf(const char *format, ...)
{
	int x = 0;
	while (format[x])
	{
		if (format[x] == '%')
		{
			for (c = 0; fmt[c].spec
		}
		else
			_putchar(format[x]);
		x++;
	}
	return (x);
}
