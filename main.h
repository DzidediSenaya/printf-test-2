#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _printfunction(const char *format, ...);
int _printchar(va_list arg_list);
int rot13_str(char *str);
int prints_string(char *s);
int rev_string(char *revs);

typedef struct form_spec
{
	char *s;
	int (*function)(va_list arg_list);
} form_spec;

#endif
