#include"holberton.h"
/**
 *_revs - Print string in reverse
 *@str: string to be printed
 *@p: pointer for a character counter
 *Return: if % encountered return address of %
 */
void _revs(char *str, int *p)
{
        int x;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	x = i - 1;
        while (x >= 0)
        {
                _putchar(str[x], p);
		x--;
        }
}
