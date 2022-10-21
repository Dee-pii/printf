#include "main.h"

/**
 * spec_func - function checks specifier validity
 * Description: check specifier validity
 * @format: specifier
 * Return: ptr to func on success
 * NULL if error
 */

int (*spec_func(const char *format))(va_list)
{
	int x;

	fun_p arr[] = {
		{"c", print_ch},
		{"s", print_st},
		{"%", print_cn},
		{"i", print_in},
		{"d", print_dc},
		{NULL, NULL}};

	for (x = 0; arr[x].p != NULL; x++)
	{
		if (*(arr[x].p) == *format)
		{
			return (arr[x].f);
		}
	}

	return (NULL);
}
