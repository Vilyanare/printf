#include "holberton.h"
#include <stdlib.h>
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
/**
 *_strcmp - compare two strings one character at a time until a difference
 * is encountered.
 *@s1: string one
 *@s2: string two
 *Return: difference between the different chars
 *negative if str 1 is less than str 2
 *positive if str 1 is greater than str 2
 *zero if strings are even
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] && s2[c]; c++)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}
	return (0);
}
/**
 * _strcpy - Copy string from src to dest
 * @src: Source array to get data from
 * @dest: Destination where data is sent to
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * *rot13 - rot13 encrypt all letters of the alphabet in a string
 * @c: Character declared as s in the main file
 * Return: c
 */
void rot13(char *c, int *p)
{
	char *rot = NULL;
	int n = 0;

	rot = malloc (sizeof(char) * _strlen(c) + 1);
	_strcpy(rot, c); 
	while (rot[n] != '\0')
	{
		while ((rot[n] >= 'a' && rot[n] <= 'z') ||
				(rot[n] >= 'A' && rot[n] <= 'Z'))
		{
			if ((rot[n] >= 'a' && rot[n] <= 'm') ||
					(rot[n] >= 'A' && rot[n] <= 'M'))
			{
				rot[n] = (rot[n] + 13);
				break;
			}
			else
			{
				rot[n] = (rot[n] - 13);
				break;
			}
		}
		n++;
	}
	_puts(rot, p);
	free(rot);
}
/**
 * printrot - Translates argument to rot13 and prints to output 
 * @args: Argument coming in
 * @p: pointer to a char counter
 * Return: Void
 */

void printrot(va_list args, int *p)
{
	rot13(va_arg(args, char *), p);
}
