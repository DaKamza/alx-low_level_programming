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
	int i;
	int j;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n; && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
