#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - function to print
 * Description: prints a string
 *
 * @format: str to print
 * @...: variadic parameters (unknown)
 *
 * Return: no of characters
 */

int _printf(const char *format, ...)
{
	int c = -1;

	if (format != NULL)
	{
		int p;
		va_list arg_s;
		int (*o)(va_list);

		va_start(arg_s, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		c = 0;

		for (p = 0; format[p] != '\0'; p++)
		{
			if (format[p] == '%')
			{
				if (format[p + 1] == '%')
				{
					c += _putchar(format[p]);
					p++;
				}
				else if (format[p + 1] != '\0')
				{
					o = spec_func(format[p + 1]);
					c += (o ? o(arg_s) : _putchar(format[p]) + _putchar(format[p + 1]));
					p++;
				}
			}
			else
				c += _putchar(format[p]);
		}
		va_end(arg_s);
	}

	return (c);
}
