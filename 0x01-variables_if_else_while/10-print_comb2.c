#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print all possible combinations of single digit numbers
*/
int main(void)
{
	int i, n;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(n);
			putchar(i);
			while (n != 57 || i != 57)
			{
				putchar(44);
				putchar(32);
				break;
			}
		}
	}
	putchar(10);
	return (0);
}
