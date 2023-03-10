#include "main.h"
/**
 * _islower - prints if character is lowercase
 * @c: character to check
 * Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
