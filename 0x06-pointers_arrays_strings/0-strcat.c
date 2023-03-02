#include "main.h"

/**
 * strcat - concanates the string pointed by src including the terminate null byte to the end
 * @dest: A pointer to the string
 * @src: The source string to append to @dest
 * Return: a pointer to the destination string
 */
char *strcat(char *dest, const char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	
	return (dest);
}
