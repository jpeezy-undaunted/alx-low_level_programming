#include "main.h"

/**
 * set_bit - function sets a bit at a given index to 1
 * @n: points to the number/bit to change
 * @index: index of the bit to set to 1
 * indices starts at 0
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
