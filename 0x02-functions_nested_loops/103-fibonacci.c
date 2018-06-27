#include <stdio.h>

/**
* main -entry point
* Return: value 0
*/

int main(void)
{
	int n;
	unsigned long int sum, first, second, next;

	first = 1;
	second = 2;
	next = 0;
	sum = 2;
	for (n = 3; next < 4000000; n++)
	{
		next = first + second;
		first = second;
		second = next;
		if ((n % 2) == 0)
		{
			sum = sum + next;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
