#include "holberton.h"
#include <stdlib.h>

/**
* print_to_98 -function to print natural numbers from n to 98
* @n: number that user enters
*/
void print_to_98(int n)
{
	int r, i, j, k;

	if (n > 98)
	{
		for (r = n; r >= 98; r--)
		{

			i = r / 100;
			j = (r %  100) / 10;
			k = r % 10;
			if (i != 0)
			_putchar(i + '0');
			if (j != 0)
			_putchar(j + '0');
			_putchar(k + '0');
			if (r != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (r = n; r <= 98; r++)
		{
			if (r >= 0)
			{
				i = r / 10;
				j = r % 10;
				if (i != 0)
				_putchar(i + '0');
				_putchar(j + '0');
				if (r != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (r < 0)
			{
				i = (r / 10) * -1;
				j = (r % 10) * -1;
				_putchar('-');
				if (i != 0)
				_putchar(i + '0');
				_putchar(j + '0');
				if (r != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
