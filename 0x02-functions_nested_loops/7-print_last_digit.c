#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to be checked
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	last = last < 0 ? -1 * last : last;
	_putchar(last + '0');

	return (last);
}
