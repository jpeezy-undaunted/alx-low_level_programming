#include "main.h"
/**
 * _strncpy - function that copy a strings
 * using at most n bytes from src
 * @dest:destination input value
 * @src:source input value
 * @n:input value pointer
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
