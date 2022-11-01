#include "main.h"

/**
 * _printf: func
 * @format: string pointed to
 * Return: number of chars
 * @...: variable args
 */

int _printf(const char *format, ...)
{
	int nprinted;

	test_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{NULL, NULL}
	};
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	nprinted = parser(format, f_list, list);
	va_end(list);
	return (nprinted);
}
