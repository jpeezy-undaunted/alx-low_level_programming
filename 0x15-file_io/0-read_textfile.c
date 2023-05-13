#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: file name to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t folder, a, b;

	folder = open(filename, O_RDONLY);
	if (folder == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(folder, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);

	free(buffer);
	close(folder);
	return (b);
}
