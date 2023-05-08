#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exclusive = n ^ m;

	for (i = 0; i < sizeof(exclusive) * 8; i++)
	{
		if (exclusive & (1UL << i))
			count++;
	}
	return (count);
}