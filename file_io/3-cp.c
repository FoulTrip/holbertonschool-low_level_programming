#include "main.h"

/**
 * add_file - save 1024 bytes for the buffer
 * @filename: name file
 *
 * Return: pointer to the new buffer
 */
char add_file(char *filename)
{
	char *data;
	data = malloc(sizeof(char) * 1024);

	if (data == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file");
		exit(99);
	}

	return (data);
}

/**
 * close_file - close file ._.
 * @fd: file identifier
 */
void close_file(int fd)
{
	int close;

	close = close(fd);

	if (close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100)
	}
}

/**
 * main - Cp file to file
 * @argc: Arguments supplied to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from, to, read, write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = add_file(argv[2]);
	from = open(argv[1], O_RDONLY);
	read = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write = write(to, buffer, read);
		if (to == -1 || write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99)
		}

		read = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
		
	} while (read > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
