#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
/**
 *  struct test - struc for functions
 *  @sym: percent
 *  @f: func
 */


struct test
{
	char *sym;

	int (*f)(va_list);
};
typedef struct test test_t;

int parser(const char*format, test_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);
int print_number(va_list list);

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
