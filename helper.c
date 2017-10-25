#include "holberton.h"

/**
 * get_fmt_func - Finds the necessary function for format specifier
 * @s: Char of format spec
 * Return: a function
 */

void (*get_fmt_func(char *s))(va_list, int *)
{
	int i = 0;

	fmt_s forms[] = {
		{"c", printchar},
		{"s", printstring},
		{"d", printint},
		{"i", printint},
		{"b", DintoB},
		{"%", printmodulo},
		{"u", printunsign},
		{"o", dtooprint},
		{"x", dtoxprint},
		{"X", dtoxprint},
		{"p", pointadd},
		{"S", printString},
		{"r", streverse},
		{NULL, NULL}
	};

	while (forms[i].fmt != NULL) /*Loops through struct until NULL*/
	{
		if (_strcmp(forms[i].fmt, s) == 0) /*Compares *s to see if it is equal to
						     *first member of struct*/
			return (forms[i].func); /*Returns function associated with 
						  *format specifier*/
		i++;
	}
	return (NULL); /*If no match returns NULL*/
}
