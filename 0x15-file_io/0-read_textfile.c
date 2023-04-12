#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int file;
	ssize_t count;

	if (filename == NULL)
		return (0);


	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	fb = malloc(sizeof(char) * letters);
	if (fb == NULL)
	{
		close(file);
		return (0);
	}
	count = write(STDOUT_FILENO, fb, read(file, fb, letters));
	if (count < 0)
	{
		free(fb);
		close(file);
		return (0);
	}

	free(fb);
	close(file);

	return (count);
}
