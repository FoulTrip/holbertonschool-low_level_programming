#include "main.h"

/**
 * add_file - save 1024 bytes for the buffer
 * @filename: name file
 *
 * Return: pointer to the new buffer
 */
char *add_file(char *filename)
{
	char *buffer;
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close file ._.
 * @fd: file identifier
 */
void *close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
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
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = add_file(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
		
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
