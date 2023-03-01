#include "main.h"
#include "2-strlen.c"
void print_rev(char *s);
/**
 * print_rev - function declaration
 * Description:'This fuction prints a string in a reverse manner'
 * @s: string pointer
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
