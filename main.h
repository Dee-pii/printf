#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * struct func - struct for specifier to printer
 * @p: character to compare
 * @f: function to handle printing
 */
typedef struct fun
{
	char *p;
	int (*f)(va_list);
} fun_p;

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int (*spec_func(const char*))(va_list);

#endif
