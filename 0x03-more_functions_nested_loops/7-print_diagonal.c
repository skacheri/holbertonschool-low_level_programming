#include "holberton.h"

/**
* print_diagonal -function to print diagonal lines n times
* @n: number as to how many diagonal lines will be printed determined by user
*/
void print_diagonal(int n)
{
	int row, col;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col < row; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

