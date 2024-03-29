#include "main.h"

/**
 * read_textfile - function that reads a text file and prints iit to
 * the POSIX standard output
 *
 * @filename: a string, the file name.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if filename is NULL
 * 0 if the can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_file, w_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r_file = read(fd, buffer, letters);
	if (r_file == -1)
		return (0);
	w_file = write(STDOUT_FILENO, buffer, r_file);
	if (w_file == -1)
		return (0);

	close(fd);
	free(buffer);

	return (r_file);
}
