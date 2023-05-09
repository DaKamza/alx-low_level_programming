#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;
	int count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
