#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: negative if str1 < str2, 0 if str1 == str2 and positive if str1 > str2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
