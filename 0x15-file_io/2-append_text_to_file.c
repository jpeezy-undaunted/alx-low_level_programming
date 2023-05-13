#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to be added to the end of the file.
 *
 * Return: -1 if file name fails or is NULL.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	c = open(filename, O_WRONLY | O_APPEND);
	b = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(c);

	return (1);
}
