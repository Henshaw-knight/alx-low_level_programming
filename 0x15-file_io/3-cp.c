#include "main.h"

/**
 * main - Entry point, function that copies the content of a file to
 * another
 *
 * @argc: the argument count
 * @argv: the argument vector, list of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to, r_file, w_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprint(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		r_file = read(file_from, buffer, 1024);
		if (r_file == -1)
			dprint(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
		w_file = write(file_to, buffer, r_file);
		if (w_file == -1)
			dprint(STDERR_FILENO, "Erro: Can't write to %s\n", argv[2]), exit(99);
	} while (r_file == 1024);

	if (close(file_from) == -1)
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
