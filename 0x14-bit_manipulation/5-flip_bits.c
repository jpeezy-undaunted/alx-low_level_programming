#include "main.h"

/**
 * flip_bits - function counts the number of bits to be flipped
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, num_bit = 0;

	while (xor > 0)
	{
		num_bit += (xor & 1);
		xor >>= 1;
	}

	return (num_bit);
}
