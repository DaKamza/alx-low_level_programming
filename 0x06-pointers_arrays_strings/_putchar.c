#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character tp print
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
