#include "holberton.h"

/**
* print_alphabet_x10 -function to print 1-z 10 times
*/
void print_alphabet_x10(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
