#include <stdio.h>

/**
* main -entry point
* program to print the first 50 series of fibonacci series
* Return: value 0
*/

int main(void)
{
	int n;

	long double first, second, next;

	first = 1;
	second = 2;
	next = 0;
	printf("%Lf, ", first);
	printf("%Lf, ", second);
	for (n = 1; n <= 96; n++)
	{
		next = first + second;
		first = second;
		second = next;
		if (n != 96)
		printf("%.0Lf, ", next);
		else
		printf("%.0Lf\n", next);
	}
	return (0);

}
