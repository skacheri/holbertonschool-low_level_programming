#include "holberton.h"

/**
* print_line -function to prnt a staright line
* @n: number of times character _ is printed
*/
void print_line(int n)
{
	int r;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
			_putchar('_');
	}
	_putchar('\n');
}
