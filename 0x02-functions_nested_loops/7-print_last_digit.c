#include "holberton.h"
#include "stdio.h"
/**
* print_last_digit -function to return value of last digit
* @n: last digit of a number
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r = r * -1;
	}
	_putchar('0' + r);
	return (r);
}
