#include "main.h"
#include <stdio.h>
#include <math.h>

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
	_printf("\n");
}
