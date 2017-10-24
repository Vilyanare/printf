#include "holberton.h"

/**
 * DintoB - Takes in integer and turns it into binary
 * @args: Integer being received
 * @p: Pointer to counter
 * Return: Void
 */

void printbinary(int n, int *p)
{
	int remain;
	unsigned int binary = 0, i = 1;

	while (n != 0)
	{
		remain = n % 2;
		n = n / 2;
		binary = binary + (remain * i);
		i = i * 10;
	}
	print_number(binary, p);
}
