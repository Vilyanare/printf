#include "holberton.h"
/**
  *dtoXprint - helper function to print hex numbers
  *@args: number to print
  *@p: pointer to char counter
  */
void dtoXprint(va_list args, int *p) 
{
        unsigned int n = va_arg(args, unsigned int);

        _dtoxcode(n, p); 
}

