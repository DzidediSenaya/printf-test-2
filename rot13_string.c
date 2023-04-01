#include "main.h"

/**
 * printf_rot13 - prints the rot 13 string
 * @r: prints the rot 13'ed string
 * Return : r
 */

int rot13_str(char *r)
{
	char premiere[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char deuxieme[52]  = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int j, i = 0, str = 0;

	{
		if ((r[i] >= 'A' && r[i] <= 'Z') || (r[i] >= 'a' && r[i] <= 'z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (r[i] == premiere[j])
				{
					str += _putchar(deuxieme[j]);
				}
			}
		} else
			str += _putchar(r[i]);
		i++;
	}
	return (str);
}
