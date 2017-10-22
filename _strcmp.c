#include"holberton.h"
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
int _strcmp(char *s1,const char *s2)
{
	int c;

	for (c = 0; s1[c] && s2[c]; c++)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}
	return (0);
}
