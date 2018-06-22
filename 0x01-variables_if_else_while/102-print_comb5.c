#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print all possible combinations of two digits
*/
int main(void)
{
	int a, b, i, j, k, l;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			i = a / 10;
			j = a % 10;
			k = b / 10;
			l = b % 10;
			putchar(i + '0');
			putchar(j + '0');
			putchar(32);
			putchar(k + '0');
			putchar(l + '0');
			if (i != 9 || j != 8 || k != 9 || l != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
