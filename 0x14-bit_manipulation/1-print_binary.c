#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count > 0)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
