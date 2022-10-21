#include "main.h"

/**
 * print_cn - prints ch %
 * Description: prints a character
 * @args: variadic para
 * Return: no of characters
 */

int print_cn(va_list arg_s)
{
	(void)arg_s;

	write(1, "%", 1);

	return (1);
}

/**
 * print_dc - convert decimals
 * @args: variadic para
 * Return: count
 */

int print_dc(va_list arg_s)
{
	int p = 0;
	int c = count = 0;
	int 
