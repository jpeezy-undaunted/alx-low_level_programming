#include <stdio.h>
void print_rev(char *s);
/**
 * print_rev - function declaration
 * @a: string pointer
 * Return:void
 */
void print_rev(char *s)
{
	int index;
	
	for (index = _strlen(s) - 1; index >= 0; index--)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');
}
