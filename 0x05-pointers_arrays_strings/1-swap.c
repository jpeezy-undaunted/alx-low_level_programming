#include <stdio.h>
void swap_int(int *a, int *b);

/*
 * swap_int - swap integer function declaration
 * Description:This function swaps the argument values of two integers
 * @a:first integer
 * @b:second integer
 * Return:void
 */
void swap_int(int *a, int *b) /*This fuction swaps the argument values of the two integers*/
{
	int placeholder1 = *a;
	int placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;
}
