#include "main.h"
/**
 * reverse_array - Function that reverses array of integers
 * @a:first array pointer
 * @n:second array pointer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
