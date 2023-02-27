#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first int to check
 * @b: second int check
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
