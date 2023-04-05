#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to a new memory space location
 * @str: string to check
 * Return: pointer to string, NULL if insufficien memory
 */
char *_strdup(char *str)
{
	char *dupp;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dupp = malloc(sizeof(char) * (i + 1));

	if (dupp == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		dupp[len] = str[len];

	return (dupp);
}
