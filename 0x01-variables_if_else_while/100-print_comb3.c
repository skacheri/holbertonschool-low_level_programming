#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print all possible combinations of two digits
*/
int main(void)
{
	int i, n;

	for (n = 48; n <= 57; n++)
	{
		for (i = n + 1; i <= 57; i++)
		{
			if (i != n)
			{
				putchar(n);
				putchar(i);
				if (n != 56 || i != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
