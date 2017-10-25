#include "holberton.h"
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
