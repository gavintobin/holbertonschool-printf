#include "main.h"
#include <stdio.h>
#include <math.h>
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
 * powerr - powerfunc
 * @base: base num
 * @power: pow num
 * Return: tmp
 */

int poww(int base, int  power)
{
	int tmp;
	int i;

	for (i = 0 ; i < power ; i++)
	{
		tmp *= base;
	}
	return (tmp);
}

/**
 * print_number - prints number
 * @args: srg list
 * Return: number of args
 */


int print_number(va_list args)
{
	int n;
	int i;
	int leng = 1;
	unsigned int num = 0;
	int dub;
	int num_cpy;

	n = va_arg(args, int);
	leng = 0;

	if (n < 0)
	{
		leng += _write_char('-');
		num = n * -1;
	}
	else
		num_cpy = num / 10;

	while (num_cpy > 0)
	{
		leng++;
		num_cpy /= 10;

	}
	for (i = leng - 1 ; i >= 0 ; i--)
	{
		putchar(num /(int)(poww(10, i)));
		dub = (int)(poww(10, i));
		num = (num % dub);
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
{
	return (write(1, &c, 1));
}
_printf("\n");
}
