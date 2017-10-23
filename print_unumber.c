#include "holberton.h"
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
