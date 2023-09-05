#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL, -1 is returned
 * 1 is returned if file exists, otherwise -1 is returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, append_status, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[length])
		length++;

	append_status = write(fd, text_content, length);
	close(fd);

	if (append_status == -1)
		return (-1);

	return (1);
}
