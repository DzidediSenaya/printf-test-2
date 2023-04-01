#include "main.h"

/**
 * print_int - prints integer values
 * @i: number to print
 * Return: nothing
 */

int print_int(int i)
{
	unsigned int a, b, c, d, e;
	int ctr = 0;

	if (i < 0)
	{
		_putchar('-');
		i = i * -1;
		ctr++;
	}
	b = i;
	c = 1;
	for (a = 1 ; b > 9 ; a++)
	{
		b = b / 10;
		c = c * 10;
	}
	for (e = 1; e <= a; e++)
	{
		d = i / c;
		i = i % c;
		c = i / 10;
		_putchar(d + '0');
		ctr++;
	}
	return (ctr);
}
