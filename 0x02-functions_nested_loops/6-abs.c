#include "holberton.h"

/**
*  _abs -function to print abs value
* @c: integer variable
* Return: value i or -i if negative
*/
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
