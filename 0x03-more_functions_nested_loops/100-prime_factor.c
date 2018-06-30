#include <stdio.h>

/**
* main -entry point
* Return: value 0
*/
int main(void)
{
	unsigned long i, n, factor, j;

	n = 612852475143;
	i = n / 2;
	j = 2;

	while (i > j)
	{
		while (n % j == 0)
		{
			factor = j;
			n = n / j;
		}
		j++;
	}
	printf("%lu\n", factor);
	return (0);
}
