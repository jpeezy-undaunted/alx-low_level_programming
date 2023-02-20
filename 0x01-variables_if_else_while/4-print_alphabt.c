#include <stdio.h>

/**
 *main - This program prints lowercase aplha a-z exluding 'q' and 'e'e
 *Return:Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
