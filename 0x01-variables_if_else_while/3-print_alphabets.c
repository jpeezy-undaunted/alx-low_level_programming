#include <stdio.h>

/**
 *main - This program prints uppercase A-Z and lowercase a-z
 *Return:Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';
	
	while (lower <= 'z') /*print lowercases a-z*/
	{
                putchar(lower);
                lower++;
	}

	while (upper <= 'Z') /*print uppercases A-Z*/
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
