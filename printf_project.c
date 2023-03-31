#include "main.h"
/**
 * _printfunction -  a function that produces
 * output according to a format.
 * @format: character string
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 * write output to stdout, the standard output stream
 */

int _printfunction(const char *format, ...)
{
	int print_chars = 0;

	while (*format != '\0')
	{
		_putchar(*format);
		format++;
		print_chars++;
	}
	_putchar('\n');
	return (print_chars);
}
