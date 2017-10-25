#include "holberton.h"

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

