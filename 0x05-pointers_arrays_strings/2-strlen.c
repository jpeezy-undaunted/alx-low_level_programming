#include <stdio.h>
int _strlen(char *s);
/**
 * _strlen - Function declaration
 * Description:This function checks the length of a string
 * @s:the string pointer
 * Return:index
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{}
	return (index);
}
