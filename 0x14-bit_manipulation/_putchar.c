#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to write
 * Return: -1 and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
