#include "main.h"

/**
 * positive_or_negative - checks if given number is positive , negative or zero
 *
 * @i: number to checked
 * Return: nothing on success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n" , i);
	else if (i < 0)
		printf("%d is negation\n" , i);
	else 
		printf("%d is zero\n" , i);
}
