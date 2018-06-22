#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print numbers of base 16 in lowercase followed by new line
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	putchar(n);
	for (n = 97; n <= 102; n++)
	putchar(n);
	putchar(10);
	return (0);
}
