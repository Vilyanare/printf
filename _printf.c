#include "holberton.h"
/**
  *_printf - print strings based on format specifiers
  *@format: string to print plus formats
  *Return: 0 for success
  *
  *Description: Prints strings without format specifiers.
  *subtitutes format specifiers with provided arguments
  *
  */
int _printf(const char *format, ...);
{
	while (format[x])
	{
		if (format[x] == '%' && format[x] != 
