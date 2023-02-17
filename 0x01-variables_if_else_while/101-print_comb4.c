#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combination of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use putchar function
 * every other function is forbidden
 * you can only use putchar five times max in your code
 * you are not allowed to any variable of type char
 * all your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
        {
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
                        	if (c != d && d != e && e < d && d < c)
                        	{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);
					if (c + d + e != 9 + 8 + 7)
                                	{
                                        	putchar(',');
                                        	putcha
					}
				}
				c++;
                        }
                        d++;
                }
                e++;
        }
        putchar('\n');
        return (0);
}

