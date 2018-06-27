#include <stdio.h>

/**
* main -entry point
* program to print the first 50 series of fibonacci series
* Return: value 0
*/

int main(void)
{
	int n;
	long long int first, second, next;

	first = 1;
	second = 2;
	next = 0;
	printf("%lli, ", first);
	printf("%lli\n", second);
	for (n = 1; n <= 48; n++)
	{
		next = first + second;
		first = second;
		second = next;
		if (n != 48)
		printf("%lli, ", next);
		else
		printf("%lli\n", next);
	}
}
