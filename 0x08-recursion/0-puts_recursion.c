#include "main.h"
/**
 * _puts_recursion - function that prints a string and new line;
 * @s: String to print
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{

	_putchar(*s);
	_puts_recursion(s + 1);
}
void _puts_recursion(char *s)
{
	_putchar('\n');
	return (0);
}
