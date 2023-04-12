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
	int file = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		if (write(file, text_content, len) != len)
		{
			close(file);
			return (-1);
		}

	}

	close(file);

	return (1);
}
