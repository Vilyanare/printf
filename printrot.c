#include "holberton.h"

/**
 * printrot - Translates argument to rot13 and prints to output 
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printrot(va_list args, int *p)
{
	rot13(va_arg(args, char *), p);
}
