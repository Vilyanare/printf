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
