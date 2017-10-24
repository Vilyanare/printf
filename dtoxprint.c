#include "holberton.h"
/**
  *dtoxprint - helper function to print hex numbers
  *@args: number to print
  *@p: pointer to char counter
  */
void dtoxprint(va_list args, int *p)
{
	unsigned int n = va_arg(args, unsigned int);

	_dtoxprint(n, p);
}
