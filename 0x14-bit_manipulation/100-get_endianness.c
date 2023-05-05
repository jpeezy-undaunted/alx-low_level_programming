#include "main.h"

/**
 * get_endianness - function Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c);
}
