#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read file print to STDOUT.
 * @filename: file to be read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails and filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fb;
	FILE *file;
	ssize_t count;

	file = fopen(filename, "r");
	if (file < 0)
		return (0);

	file = malloc(sizeof(char) * letters);
	count = write(STDOUT_FILENO, fb, (read(file, fb, letters)));

	free(fb);
	close(file);

	return (count);
}
