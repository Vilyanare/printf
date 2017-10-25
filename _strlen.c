#include "holberton.h"
/**
 * _strlen - Print the length of the string
 * @s: Prints length of the string "Holberton"
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
