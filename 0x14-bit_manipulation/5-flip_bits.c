#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int combined = n ^ m;

	while (combined > 0)
	{
		num += combined & 1;
		combined >>= 1;
	}

	return (num);
}
