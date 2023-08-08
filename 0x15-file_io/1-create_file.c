#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 * if text_content is NULL, an empty file is created
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[length])
		length++;

	write_status = write(fd, text_content, length);
	close(fd);

	if (write_status == -1)
		return (-1);

	return (1);
}
