#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print alphabet in lowercase without q and e followed by new line
*/
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		while  (n != 101 && n != 113)
		{
			putchar(n);
			break;
		}
	}
	putchar(10);
	return (0);
}
