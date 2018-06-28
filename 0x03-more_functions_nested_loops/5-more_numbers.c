#include "holberton.h"
#include <stdio.h>

/**
* more_numbers -function to print numbers from 0-14
*/
void more_numbers(void)
{
	int i, a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
