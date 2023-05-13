#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to the name of the file to be created.
 * @text_content: pointer to the string, write to the file.
 *
 * Return: -1 if fails.
 *         Otherwise return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int folder, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	folder = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(folder, text_content, len);

	if (folder == -1 || b == -1)
		return (-1);

	close(folder);

	return (1);
}
