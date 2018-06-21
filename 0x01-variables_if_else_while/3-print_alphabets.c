#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print alphabet in lowercase & uppercase followed by new line
*/
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	putchar(n);
	for (n = 65; n <= 90; n++)
	putchar(n);
	putchar(10);
	return (0);
}
