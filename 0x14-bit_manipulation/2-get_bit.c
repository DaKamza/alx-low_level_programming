#include "main.h"

/**
 * get_bit - returns the value of a bit at an index given
 * @n: unsigned long interger to search from
 * @index: index of the bit
 *
 * Return: value of the bit at an index given
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
