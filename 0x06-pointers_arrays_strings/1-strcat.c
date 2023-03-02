#include "main.h"
/**
 * _strncat - concanates two strings
 * @dest: The string to be appended on
 *
 * @src: the string to be appended to dest
 * @n: the number of bytes from src
 * Return: A pointer to the string
 */
char *_strncat(char *dest, char *src, int n);
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i++] = src[i];

	return (dest);
}
