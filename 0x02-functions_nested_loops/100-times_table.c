#include "holberton.h"
#include <stdio.h>

/**
* print_times_table -function to print times table till n
* @n: integer value till the number of times table to print
*/
void print_times_table(int n)
{
	int a, b, i, j, k;

	if (n > 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				i = (a * b) / 100;
				j = ((a * b) % 100) / 10;
				k = (a * b) % 10;
				if (i == 0 && j == 0)
				{
					if (b > 0 && b <= n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(k + '0');
				}
				else if (i == 0 && j != 0)
				{
					if (b > 0 && b <= n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(j + '0');
					_putchar(k + '0');
				}
				else
				{
					if (b > 0 && b <= n)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(k + '0');
				}
				if (b == n)
				_putchar('\n');
			}
		}
	}
}
