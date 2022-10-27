#include "main.h"
#include <stdio.h>
#include <stddarg>

/**
 * _printf - printf function
 * @format: char string pointer
 * @...: variatic
 * Return: none
 */

int _printf(const char *format, ...)
{
	char *traverse;
	unsigned int i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (traverse = format; *traverse != '\0' ; traverse++)
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}
		if (*traverse == '\0')
			return;
		switch (*traverse)
		{
			case 'c' : i = va_arg(arg, int);
				   if (i < 0)
				   {
					   i = -i;
					   pputchar('-');
				   }
				   puts(convert(i,10));
				   break;
			case 's' : s = va_arg(arg, char *);
				   puts(s);
				   break;
			case 'd' : d =va_arg(arg, int);
				   if (i < 0)
				   {
					   i = -i;
					   putchar('-');
				   }
				   puts(convert(i,10));
				   break;
			case 'o' : i = va_arg(arg, unsigned int);
				   puts(convert(i,8));
				   break;
			case 'x' : i = va_arg(arg, unsigned int);
				   puts(convert(i,16));
				   break;
		}
	}
	va_end(arg);
}

