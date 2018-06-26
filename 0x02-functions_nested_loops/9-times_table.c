#include "holberton.h"

/**
* times_table -to print the 9 tables in a rows and column format
*
*/
void times_table(void)
{
	int a, b, i, j;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			i = (a * b) / 10;
			j = (a * b) % 10;
			if (b != 10)
			{
				if ((a * b) < 10)
				{
					if (b > 0 && b < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(j + '0');
				}
				else
				{
					if (b > 0 && b < 10)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar(i + '0');
					_putchar(j + '0');
				}
			}
			if (b == 10)
			{
				_putchar('\n');
			}
		}
	}
}
