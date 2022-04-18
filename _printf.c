#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int j, k = 0;
	int (*a)(va_list);
	va_list args;

	va_start(args, format);
	j = 0;
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			a = get_func(format[j + 1]);
			k = a(args);
			j += 2;
		}
		_putchar(format[j]);
		j++;
	}
	_putchar('\n');
	va_end(args);

	return (k);
}
