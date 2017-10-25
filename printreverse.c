#include "holberton.h"

/**
 * streverse - Reverse the argument string
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void streverse(va_list args, int *p)
{
	void *pn = va_arg(args, void*);
	if (pn == NULL)
		_puts("(null)", p);
	_revs(pn, p);
}

