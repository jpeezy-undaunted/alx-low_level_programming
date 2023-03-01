#include "main.h"
void _puts(char *str);
/**
 * _puts -  fuction declaration
 * Description:'prints a string'
 * @str:the string pointers
 * Return:void
 */
void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
