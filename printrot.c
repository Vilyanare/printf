#include "holberton.h"

/**
 * printrot - Translates argument to rot13 and prints to output 
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printrot(va_list args, int *p)
{
	void *pn = va_arg(args, void*);
        if (pn == NULL)
                _puts("(null)", p);
	rot13(pn, p);
}
