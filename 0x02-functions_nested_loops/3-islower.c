#include "holberton.h"

/**
* _islower -function to check for lowercase character
* @c: is an integer variable
* Return: 1 if lowercase letter else 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
