#include "main.h"
#include <stdarg.h>

/**
 * _printchar - prints arguments
 * @arg_list : argument list
 * Return: Always 1
 */

int _printchar(va_list arg_list)
{
	char *s;

	s = va_arg(arg_list, char *);
	_putchar(*s);
	return (1);
}
