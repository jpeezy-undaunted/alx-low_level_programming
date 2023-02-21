#include <stdio.h>

/**
 *main - This program prints 00 to 99
 *Return:Always 0 (Success)
 */

int main(void)
{
	int tens;
	int units;

	for (tens = '0'; tens <= '9'; tens++) /*prints tens digits*/
	{
		for (units = '0'; units <= '9', units++) /*prints units digits*/
		{
			putchar(tens);
			putchar(units);
			if (!(tens == '9' && units == '9')) /*ignore comma at the end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
