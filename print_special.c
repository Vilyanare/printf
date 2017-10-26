#include "holberton.h"

/**
 * printmodulo - Print the modulo coming in
 * @args: unused. there to make it fit in struct
 * @p: pointer to char counter
 * Return: Void
 */

void printmodulo(va_list args, int *p)
{
	(void) args;
	_putchar('%', p);
}
/**
 * streverse - Reverse the argument string
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */
void streverse(va_list args, int *p)
{
	_revs(va_arg(args, char *), p);
}
/**
 *_revs - Print string in reverse
 *@str: string to be printed
 *@p: pointer for a character counter
 *Return: if % encountered return address of %
 */
void _revs(char *str, int *p)
{
        int x;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	x = i - 1;
        while (x >= 0)
        {
                _putchar(str[x], p);
		x--;
        }
}
/**
 * printunsign - Print the arguments
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */
void printunsign(va_list args, int *p)
{
	print_unumber(va_arg(args, unsigned int), p);
}
/**
 * print_unumber - Prints unsigned integers from main file as characters
 * @n: Integer coming in
 * @p: pointer to a char counter
 * Return: Nothing
 */
void print_unumber(unsigned int n, int *p)
{
	unsigned int x = n;
	unsigned int i = n;
	unsigned int d = 1;

	while (x >= 10)
	{
		x = x / 10;
		d = d * 10;
	}
	while (d > 0)
	{
		_putchar(i / d % 10 + '0', p);
		d = d / 10;
	}
}
