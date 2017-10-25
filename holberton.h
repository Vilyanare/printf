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
	void (*func)(va_list, int *);
} fmt_s;

int _printf(const char *format, ...);
int _putchar(char c, int *);
void _puts(char *str, int *);
void _revs(char *str, int *);
int _strcmp(char *s1,char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void rot13(char *c, int *);
void streverse(va_list, int *);
void pointadd(va_list, int *);
void printstring(va_list, int *);
void printmodulo(va_list, int *);
void printchar(va_list, int *);
void printint(va_list, int *);
void printaddress(unsigned long int, int *p);
void DintoB(va_list, int *);
void printrot(va_list, int *);
void print_number(int n, int *);
void printbinary(unsigned int n, int *);
void (*get_fmt_func(char *s))(va_list, int *);
void print_unumber(unsigned int n, int *);
void printunsign(va_list, int *);
void _dtoxlong(long unsigned int, int *);
void dtooprint(va_list, int *);
void _dtooprint(unsigned int, int*);
void dtoxprint(va_list, int*);
void _dtoxprint(unsigned int, int*);
void printString(va_list, int*);
void _printString(char*, int*);
void _dtoxcode(unsigned int, int*);

#endif
