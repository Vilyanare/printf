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
		{"%", printmodulo},
		{NULL, NULL}
	};

	while (forms[i].fmt != NULL)
	{
		if (_strcmp(forms[i].fmt, s) == 0)
			return (forms[i].func);
		i++;
	}
	return (NULL);
}
