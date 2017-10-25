#include "holberton.h"
/**
  * _dtoxcode - prints a hex conversion of a decimal
  *@n: decimal number
  *@p: pointer to a char counter
  */
void _dtoxcode(unsigned int n, int *p) 
{
        if (n / 16 > 0)
                _dtoxcode(n / 16, p); 
        if (n % 16 > 9)
                _putchar(n % 16 + 55, p); 
        else
                _putchar(n % 16 + 48, p); 
}
