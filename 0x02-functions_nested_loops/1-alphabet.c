#include "holberton.h"

/**
* print_alphabet -function to print alphabets in lower case
* Return: value 0
*/

void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}


