#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the filename.
 * @text_content: The string to add
 * Return: If fails or is NULL or file does not exist -1 otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wte;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wte = write(op, text_content, len);

	if (op == -1 || wte == -1)
		return (-1);

	close(op);

	return (1);
}
