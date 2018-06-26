#include "holberton.h"
#include "stdio.h"
/**
* print_last_digit -function to return value of last digit
* @n: last digit of a number
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int returnVal = n % 10;
	if (returnVal < 0) 
	{
		returnVal = returnVal * -1;
	}
	_putchar('0' + returnVal);
	return returnVal;
}
