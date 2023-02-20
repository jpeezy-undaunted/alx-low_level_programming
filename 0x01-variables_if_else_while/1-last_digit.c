#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - This program will print the last digit of a random number
 *if it is greater than 5, less than 6 and not 0 each time it is executed
 *Return:Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, (n % 10));

	if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
