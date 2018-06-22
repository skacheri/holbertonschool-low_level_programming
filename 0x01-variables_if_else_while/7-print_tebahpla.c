#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print alphabet in lowercase followed by new line
*/
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	putchar(n);
	putchar(10);
	return (0);
}
