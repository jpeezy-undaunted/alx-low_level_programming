#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: string that contains the binary number
 *
 * Return: the converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	while (b && *b)
	{
		if (*b < '0' || *b > '1')
			return (0);

		dec_num = 2 * dec_num + *b - '0';
		b++;
	}
	return (dec_num);
}
