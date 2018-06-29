#include <stdio.h>

/**
* main -entry point
* Return: value 0
*/
int main(void)
{
	unsigned long int i, n, factor, j;
	
	i = 612852475143;
	n = 612852475143/2;
	j = 2;

	while (j < n)
	{
		while (i % j == 0)
		{
			factor = j;
			n = n / j;
		}
		j++;
	}
	printf("%lu\n", factor);
	return (0);
}
