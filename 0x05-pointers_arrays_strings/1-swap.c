#include "main.h"
void swap_int(int *a, int *b)
/**
 * swap_int - swap integer function declaration
 * Description:This fuction swaps the argument values of the two integers
 * @a:first integer
 * @b:second integer
 * Return:void
 */
{
	int placeholder1 = *a;
	int placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;
}
