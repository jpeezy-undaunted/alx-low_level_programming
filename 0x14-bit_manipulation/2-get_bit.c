#include "main.h"

/**
 * get_bit - function returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: bit index using indices, start point 0
 *
 * Return: -1 if the bit is false
 * 		else return the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
