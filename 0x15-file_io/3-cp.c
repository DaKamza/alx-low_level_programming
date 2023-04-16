#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
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
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[]
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return 1;
	}

	FILE *file_from = fopen(argv[1], "r");
	if (!file_from)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		return 2;
	}

	FILE *file_to = fopen(argv[2], "w");
	if (!file_to)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		fclose(file_from);
		return 3;
	}
	char buffer[1024];
	size_t nread;
	while ((nread = fread(buffer, 1, sizeof buffer, file_from)) > 0) {
		if (fwrite(buffer, 1, nread, file_to) != nread) {
			printf("Error: Can't write to %s\n", argv[2]);
			fclose(file_from);
			fclose(file_to);
			return 4;
		}
	}

	fclose(file_from);
	fclose(file_to);

	return 0;

	}
}
