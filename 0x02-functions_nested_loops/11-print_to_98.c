#include <stdio.h>

/**
* print_to_98 -function to print natural numbers from n to 98
* @n: number that user enters
*/
void print_to_98(int n)
{
	int r;

	if (n < 98)
	{
		for (r = n; r < 98; r++)
		printf("%i, ", r);
		if (r == 98)
		printf("%i\n", r);
	}
	else
	{
		for (r = n; r > 98; r--)
		printf("%i, ", r);
		if (r == 98)
		printf("%i\n", r);
	}
}
