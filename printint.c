#include "holberton.h"
/**
* printint - Print the arguments
* @args: Argument coming in
* @p: pointer to a char counter
* Return: Void
*/
void printint(va_list args, int *p)
{
	print_number(va_arg(args, int), p);
}

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
/*
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
