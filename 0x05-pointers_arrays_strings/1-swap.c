#include <stdio.h>
void swap_int(int *a, int *b);

/*
 * swap_int - swap function declaration
 * @a:first integer
 * @b:second integer
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int placeholder1 = *a;
	int placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;
}
