#include <stdio.h>

/**
 *main - This program prints 00 to 99
 *Return:Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++) /*prints tens digits*/
	{
		for (ones = '0'; ones <= '9', ones++) /*prints ones digits*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) /*ignore comma at the end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
