#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on Success otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);

	if (!text_content)
	{
		fprintf(file, "%s", text_content);
	}

	close(file);

	return (1);
}
