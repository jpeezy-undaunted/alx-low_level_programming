#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
  /*
   * main - function that prints an array
   * Description:'program that prints 98 followed by a new line'
   * @p:pointer
   * @n:input value
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - you are to make only one statement
   * - you are not allowed to code anything else than this line of code
   * Return:0
   */
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
