
#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array size and assign char c
 * Return: pointer to array and NULL if no success
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int j;

	string = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		string[j] = c;
	return (string);
}
