#include "holberton.h"

/**
* jack_bauer -function to print every minute of day
*/

void jack_bauer(void)
{
	int a, b, i, j, k, l;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			i = a / 10;
			j = a % 10;
			k = b / 10;
			l = b % 10;
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
