#include <stdio.h>

/**
* main -entry point
* program to print the first 98 series of fibonacci series
* Return: value 0
*/

int main(void)
{
	int n;

	double first, second, next;

	first = 1;
	second = 2;
	next = 0;
	printf("%.0f, ", first);
	printf("%.0f", second);
	for (n = 1; n <= 96; n++)
	{
		printf(", ");
		next = first + second;
		first = second;
		second = next;
		printf("%.0f", next);
	}
	printf("\n");
	return (0);
}
