#include "main.h"
/**
 * _printfunction -  a function that produces
 * output according to a format.
 * Returns: the number of characters printed (excluding
 * the null byte used to end output to strings)
 * write output to stdout, the standard output stream
 */

int _printfunction(const char *format, ...)
{
        int printed_chars = 0;
                while(*format != '\0')
                {
                        _putchar(*format);
                        format++;
                        printed_chars++;
                }
        _putchar('\n');

        return (printed_chars);
}
