#include "main.h"
/**
 * _memcpy - copies @n bytes pointed by @src into that pointed by @dest
 * @dest: pointer to the memory to copy into
 * @src: source buffer to copy from
 * @n: number of bytes to copy from
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
