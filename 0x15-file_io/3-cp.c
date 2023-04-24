#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes.
 * @file: The filename buffer is storing chars for.
 * Return: A pointer to the allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		fprintf(stderr,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptot.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments provided.
 * @argv: An array of pointers to the arguments.
 * Return: on success 0.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (1);
	}
	FILE *file_from = fopen(argv[1], "r");

	if (!file_from)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (2);
	}
	FILE *file_to = fopen(argv[2], "w");

	if (!file_to)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		fclose(file_from);
		return (3);
	}
	char buffer[1024];
	size_t numread;

	while ((numread = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		if (fwrite(buffer, 1, numread, file_to) != numread)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			fclose(file_from);
			fclose(file_to);
			return (4);
		}
	}

	fclose(file_from);
	fclose(file_to);

	return (0);
}
