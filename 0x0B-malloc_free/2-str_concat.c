#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the new allocated memory spac
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		concat[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		concat[len1] = s2[len2];
		len1++;
		len2++;
	}
	concat[len1] = '\0';
	return (concat);
}
