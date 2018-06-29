#include "holberton.h"

/**
* print_triangle -function to print a # triangle
* @size: number of # lines in triangle, determined by user
*/
void print_triangle(int size)
{
	int hash, row, spaces;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (spaces = 1; spaces < size - row; spaces++)
			_putchar(' ');
			for (hash = 0; hash <= row; hash++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
