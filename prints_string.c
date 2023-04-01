#include "main.h"

/**
 *_printstring - This function prints the string
 *@s: string to be printed
 *Return: string
 */

int prints_string(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		a++;
	}
	return (a);
}
