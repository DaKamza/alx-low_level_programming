#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: program that generates random passwords
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum, j;
	int pass[100];

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
