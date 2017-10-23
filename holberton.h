#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>
/**
 * struct frmtspec - Format specifier struct
 * @fmt: Pointer to char checking matching specifier
 * @func: Pointer to function for correct format
 */
typedef struct frmtspec
{
	char *fmt;
	void (*func)(va_list);
} fmt_s;

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strcmp(char *s1,char *s2);
void printstring(va_list);
void printmodulo(va_list);
void printchar(va_list);
void printint(va_list args);
void print_number(int n);
void (*get_fmt_func(char *s))(va_list);

#endif
