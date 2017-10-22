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
	char *s = NULL;
	int x = 0;
	va_list args;

	va_start (args, NULL);

	while (format[x])
	{
		if (format[x] == '%')
		{
			s = (void *)(format + x);
			get_fmt_func(s + 1)(args);
			x++;
		}
		else
			_putchar(format[x]);
		x++;
	}
	va_end(args);
	return (x);
}
