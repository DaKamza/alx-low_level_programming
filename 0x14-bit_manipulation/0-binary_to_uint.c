#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int con_num = 0;

	if (b == NULL)
		return (0);

	while (b[j] != '\0')
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		con_num = (con_num * 2) + (b[j] - '0');
		j++;

	}
	return (con_num);
}
