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
	void (*f)(va_list, int *);
	char *s = NULL;
	int x = 0;
	va_list args;
	int charcounter = 0; /*Character counter*/
	int *p = &charcounter;

	va_start(args, NULL);

	while (format[x] != 0) /*Look through format string*/
	{
		if (format[x] == '%') /*Check format string for format specifier*/
		{
			s = (void *)(format + x); /*Recast format into a char string*/
			f = get_fmt_func(s + 1); /*Look for format specifier and return function*/
			if (f == NULL) /*If format specifier wasn't found*/
			{
				_putchar('%', p); /*Print modulus*/
				_putchar(s[1], p); /*Print char after modulus*/
			}
			else /*If format specifier was found*/
				f(args, p); /*Execute function associated with format specifier*/
			x++;
		}
		else /*While format specifier isn't found*/
			_putchar(format[x], p); /*Print each char of the format string*/
		x++;
	}
	va_end(args);
	return (charcounter);
}
