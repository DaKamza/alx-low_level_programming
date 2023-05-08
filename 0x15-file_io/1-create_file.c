#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the filename to create.
 * @text_content: A pointer to a string
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}
