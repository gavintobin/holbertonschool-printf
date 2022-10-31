#include "main.h"

/**
 * print_char - func
 * @list: arg list
 * Return: number of chars
 */

int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - func
 * @list :srg list
 * Return: chars printed
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
		if (str == NULL)
			str = ("null");
	for (i = 0 ; str[i] != '\0' ; i++)
		_write_char(str[i]);
	return (i);
}
/**
 * print_percent - func
 * @list: arg list
 * Return: chars printed
 */

int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}
/**
 * print_integer - func
 * @list: arg list
 * Return: num of chars
 */

int print_integer(va_list list)
{
	int lennum;

	lennum = print_number(list);
	return (lennum);
}
