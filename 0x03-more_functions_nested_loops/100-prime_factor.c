#include <stdio.h>

/**
* main -entry point
* Return: value 0
*/
int main(void)
{
	unsigned long i, factor, j;

	i = 612852475143;
	j = 2;

	while (i > j)
	{
		while (i % j == 0)
		{
			factor = j;
			i = i / j;
		}
		j++;
	}
	printf("%lu\n", factor);
	return (0);
}
