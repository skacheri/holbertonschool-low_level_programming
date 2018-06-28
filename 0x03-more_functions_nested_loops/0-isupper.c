#include "holberton.h"

/**
* _isupper -function to check if a character is uppercase
* @c: variable entered by user to check if uppercase or not
* Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
