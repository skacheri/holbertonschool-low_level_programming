#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -entry point
* Return: value 0
* Program to print last digit of the number stored in the variable n
*/

int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	if (last_dig > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, last_dig);
	if (last_dig == 0)
	printf("Last digit of %i is %i and is 0\n", n, last_dig);
	if (last_dig < 6 && last_dig != 0)
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_dig);
	return (0);
}
