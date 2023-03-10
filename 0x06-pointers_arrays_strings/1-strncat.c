#include "main.h"
/**
 * _strncat - function that concatenatestwo strings
 * using at most n bytes from src
 * @dest:destination input value
 * @src:source input value
 * @n:input value pointer
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
