#include "main.h"

/**
 *rev_string - prints a reversed string
 *@revs: reversed string
 *Return: reversed string
 */

int rev_string(char *revs)
{
	int a;
	int str1 = 0;
	int str2 = 0;

	while (*revs != '\0')
	{
		revs++;
		str1++;
	}

	a = str1 - 1;
	while (a >= 0)
	{
		_putchar(*(revs + a));
		a--;
		str2++;
	}

	return (str2);
}
