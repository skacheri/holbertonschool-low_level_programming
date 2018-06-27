#include <stdio.h>

/**
* main -entry point
* Return: value 0
*/
int main(void)
{
	int a, n;

	a = 0;
	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) != 0 || (n % 5) != 0)
		{
			a += n;
		}
	}
	printf("%i\n", a);
	return (0);
}
