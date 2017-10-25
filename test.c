#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Binary:[%b]\n", ui);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
   _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

/*    _printf("Unknown:[%r]\n");
//    printf("Unknown:[%r]\n");
	insigned int n = args;
	insigned int n = args;
*/	_printf("128 in Binary: [%b]\n", 128);
	_printf("98 in Binary: [%b]\n", 98);
	_printf("12,000,000 in Binary: [%b]\n", 12000000);
	_printf("0 in Binary: [%b]\n", 0);
	_printf("-98 in Binary: [%b]\n", -98);
	_printf("-1 in Binary: [%b]\n", -1);
	_printf("-128 in Binary: [%b]\n", -128);

    return (0);
}
