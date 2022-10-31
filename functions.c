#include "main.h"
#include <stdio.h>
/**
 *  write_base - func
 *  @str: string
 *  Return: string
 */

void write_base(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_write_char(str[i]);
}

/**
 * _memcpy - memory to copy
 * @dest: copy to
 * @src: copy from
 * @n: what to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
		dest[i] = '\0';
	}
	return (dest);
}
/**
 * print_number - prints number
 * @args: srg list
 * Return: number of args
 */

int print_number(va_list args)
{
	int n;
	int div;
	int leng;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	leng = 0;

	if (n < 0)
	{
		leng += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div != 0 ;)
	{
		leng += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (leng);
}

/**
 *  _write_char - func
 *  @c : pointer to char
 *
 *  Return : int
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
/**
 * parser - func
 * @format: string
 * @f_list: struct
 * @arg_list: struct
 * Return: int
 */

int parser(const char *format, test_t f_list[], va_list list)
{
	int i;
	int j;
	int r_val;
	int nprinted;

	nprinted = 0;
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0 ; f_list[j].sym != NULL ; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(list);
					if (r_val == -1)
						return (-1);
					nprinted += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					nprinted = nprinted + 2;
				}
				else 
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_write_char(format[i]);
			nprinted++;
		}
	}
	return (nprinted);
}

