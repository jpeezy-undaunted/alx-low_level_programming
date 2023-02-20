#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main - This program will print a random number n if it is positive,
 *zero and negative
 *Return:Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
