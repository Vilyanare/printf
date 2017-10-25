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
	int charcounter = 0;
	int *p = &charcounter;

	va_start(args, NULL);

	while (format[x])
	{
		if (format[x] == '%')
		{
			s = (void *)(format + x);
			f = get_fmt_func(s + 1);
			if (f == NULL)
			{
				_putchar('%', p);
				_putchar(s[1], p);
			}
			else
				f(args, p);
			x++;
		}
		else
			_putchar(format[x], p);
		x++;
	}
	va_end(args);
	return (charcounter);
}
