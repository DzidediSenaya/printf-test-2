#include "main.h"
/**
 * _printf -  a function that produces
 * output according to a format.
 * @format : character string
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 * write output to stdout, the standard output stream
 */
int _printf(const char *format, ...)
{
	int print_chars = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
		}
		else
		{
			_putchar(*format);
		}
		format++;
		print_chars++;
	}
	return (print_chars);
}

