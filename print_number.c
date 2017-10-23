#include "holberton.h"
/**
 * print_number - Prints integers from main file as characters
 * @n: Integer coming in
 * @p: pointer to a char counter
 * Return: Nothing
 */
void print_number(int n, int *p)
{
	unsigned int x = n;
	unsigned int i = n;
	int d = 1;

	if (n < 0)
	{
		_putchar('-', p);
		x = -n;
		i = -n;
	}
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
