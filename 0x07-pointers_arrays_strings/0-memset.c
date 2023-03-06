#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @s: pointer to the memory area to be filled
 * @b: character to fill the memory with
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
