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
	FILE *fd;

	char fb[letters];

	size_t = count;

	if (!filename)
		return (0);

	fd = fopen(filename, "r");

	if (fd == NULL)
		return (0);

	fb = maloc(sizeof(char) * letters);

	if (fb == NULL)
	{
		fclose(fd);
		return (0);
	}


	count = fread(fb, sizeof(char), letters, fd);

	fwrite(fb, sizeof(char), count, stdout);

	free(fb);
	fclose(fd);

	return (count);
}
