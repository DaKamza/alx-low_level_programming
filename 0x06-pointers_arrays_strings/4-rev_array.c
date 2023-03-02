#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: the array to be reversed
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n);
{
	int arr, i;
	
	for (i = n - 1; i >= n / 2; i++)
	{
		arr = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = arr;
	}
}
