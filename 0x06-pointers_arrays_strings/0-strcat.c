#include "main.h"

/**
 * strcat - concanates the string pointed by src including the terminate null byte to the end
 * @dest: A pointer to the string
 * @src: The source string to append to @dest
 * Return: a pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (i = 0; dest[i] != NULL)
	{
		i++;
	}
	
	for (i = 0; src[len] != NULL)
	{
		dest[i] = src[len];
		i++;
		len++;
	}
	dest[i] = NULL;
	
	return (dest);
}
