#include "holberton.h"
#include <stdio.h>
/**
 * DintoB - Takes in integer and turns it into binary
 * @args: Integer being received
 * @p: Pointer to counter
 * Return: Void
 */

void printbinary(unsigned int n, int *p)
{
	int remain = 0;

	if (n == 0)
	{
		_putchar(remain + '0', p);
	}
	else if (n == 1)
	{
		_putchar('1', p);
	}
	else
	{
		remain = n % 2;
		n = n / 2;
		printbinary(n, p);
		_putchar(remain + '0', p);
	}
}
