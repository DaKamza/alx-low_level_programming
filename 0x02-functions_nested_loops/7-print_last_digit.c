#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to be checked
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 15;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');

	return (0);
}
