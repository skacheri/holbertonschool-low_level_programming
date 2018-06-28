#include "holberton.h"

/**
* _isdigit -function that checks for a digit
* @c: digit entered by user to check if digit or not
* Return: 1 if digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
