#include "main.h"
/**
 * _strlen - prints the lent of a string
 * @s: string to check
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}