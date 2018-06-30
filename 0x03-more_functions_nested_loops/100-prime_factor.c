#include <stdio.h>

/**
* main -entry point
* Return: value 0
*/
int main(void)
{
	unsigned long i, factor;

	i = 612852475143;
	factor = 2;

	while (i > factor)
	{
		while (i % factor == 0)
		{
			i = i / factor;
		}
		factor++;
	}
	printf("%lu\n", factor);
	return (0);
}
