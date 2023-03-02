#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: negative if str1 < str2, 0 if str1 == str2 and positive if str1 > str2
 */
int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2)
}
