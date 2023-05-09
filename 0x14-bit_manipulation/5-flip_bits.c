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
	unsigned long int exclusive = n ^ m;

	for (j = 0; j < sizeof(exclusive) * 8; j++)
	{
		if (exclusive & (1UL << j))
			count++;
	}
	return (count);
}
