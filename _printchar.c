#include "main.h"
#include <stdarg.h>

int _printchar(va_list arg_list)
{
	char *s;
	s = va_arg(arg_list, char *);
	_putchar(*s);
	return(1);
}
