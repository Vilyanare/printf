#include "holberton.h"
#include <stdlib.h>
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
