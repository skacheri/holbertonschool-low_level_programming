#include "holberton.h"

/**
* _isalpha -function to check for alphabetic character
* @c: integer value to check if alpha
* Return: value 1 if a letter else return 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
