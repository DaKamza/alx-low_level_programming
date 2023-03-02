#include "main.h"
/**
 * leet - encodes string to 1337
 * @str: string to encode
 * Return: pointer to ncoded string
 */
char *leet(char *)
{
	int index1 = 0;
	int index2;

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] || str[index1] - 32 == leet[index2])
				str[index1 = index2 + '0';
		}
		index1++;
	}
	return (str);
}
