#include <stdio.h>

/**
 *main - This program prints lowercase a-z
 *Return:Always 0 (Success)
 */
int main()
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
